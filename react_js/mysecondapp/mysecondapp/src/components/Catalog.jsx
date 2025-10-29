import React, { useEffect, useState } from "react";

function Catalog() {
  const [products, setProducts] = useState([]);
  const [loading, setLoading] = useState(true);

  const truncate = (str, len) => (str.length > len ? str.slice(0, len) : str);

  useEffect(() => {
    async function fetchProducts() {
      try {
        let response = await fetch("https://fakestoreapi.com/products");
        let data = await response.json();

        // 3 sec loading
        setTimeout(() => {
          setProducts(data);
          setLoading(false);
        }, 3000);
      } catch (err) {
        console.error(err);
        setLoading(false);
      }
    }

    fetchProducts();
  }, []);

  if (loading) {
    return (
      <div
        className="d-flex justify-content-center align-items-center"
        style={{ height: "60vh" }}
      >
        <div className="spinner-border text-primary" role="status">
          <span className="visually-hidden">Loading...</span>
        </div>
      </div>
    );
  }

  return (
    <div className="container p-5">
      <h2 className="text-center mb-4">Product Catalog</h2>
      <div className="row">
        {products.map((item) => (
          <div className="col-md-4 mt-4 d-flex" key={item.id}>
            <div className="card w-100" style={{ height: "350px" }}>
              <img
                src={item.image}
                className="card-img-top"
                alt="Product"
                style={{ height: "180px", objectFit: "contain" }}
              />
              <div
                className="card-body d-flex flex-column justify-content-between"
                style={{ padding: "10px" }}
              >
                <div>
                  <h5 className="card-title">{truncate(item.title, 10)}</h5>
                  <p className="card-text">{truncate(item.description, 10)}</p>
                </div>
                <div>
                  <p>
                    <strong>${item.price}</strong>
                  </p>
                  <button className="btn btn-primary w-100">
                    Add to Cart
                  </button>
                </div>
              </div>
            </div>
          </div>
        ))}
      </div>
    </div>
  );
}

export default Catalog;
