import { useEffect, useState } from "react";
import axios from "axios";
import "./../styles/products.css";

export default function Products() {
  const [data, setData] = useState([]);

  useEffect(() => {
    axios.get("http://localhost:5000/products").then((res) => setData(res.data));
  }, []);

  return (
    <div className="products-container">
      {data.map((p) => (
        <div className="product-card" key={p.id}>
          <img src={p.image} />
          <h3>{p.title}</h3>
          <p>₹{p.price}</p>
          <a href={`/product/${p.id}`}>View Details</a>
        </div>
      ))}
    </div>
  );
}
