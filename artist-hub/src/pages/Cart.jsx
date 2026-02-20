import { useCart } from "../contexts/CartContext";

export default function Cart() {
  const { cartItems, setCartItems } = useCart();

  const removeItem = (id) => {
    setCartItems(cartItems.filter(item => item.id !== id));
  };

  if (cartItems.length === 0) {
    return <h2 style={{ padding: "20px" }}>Your cart is empty.</h2>;
  }

  return (
    <div className="cart-page">
      <h2>Your Cart</h2>

      {cartItems.map((item) => (
        <div key={item.id} className="cart-card">
          <img src={item.image} alt="" />
          <div>
            <h3>{item.title}</h3>
            <p>₹{item.price}</p>
            <button onClick={() => removeItem(item.id)}>Remove</button>
          </div>
        </div>
      ))}
    </div>
  );
}
