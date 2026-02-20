import { useParams } from "react-router-dom";
import { useEffect, useState } from "react";
import { useCart } from "../contexts/CartContext";

export default function ProductDetails() {
  const { id } = useParams();
  const { cartItems, setCartItems } = useCart();

  const [product, setProduct] = useState(null);

  useEffect(() => {
    fetch(`http://localhost:5000/products/${id}`)
      .then((res) => res.json())
      .then((data) => setProduct(data));
  }, []);

  if (!product) return <h2>Loading...</h2>;

  const addToCart = () => {
    setCartItems([...cartItems, product]);
  };

  return (
    <div className="product-details">
      <img src={product.image} alt="" />
      <div>
        <h1>{product.title}</h1>
        <p>{product.description}</p>
        <h3>₹{product.price}</h3>

        <button onClick={addToCart} className="btn-primary">
          Add to Cart
        </button>
      </div>
    </div>
  );
}
