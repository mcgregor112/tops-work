import { useEffect, useState } from "react";
import axios from "axios";

export default function ManagerDashboard() {
  const [products, setProducts] = useState([]);
  const [form, setForm] = useState({
    title: "",
    price: "",
    description: "",
    image: "",
    category: "painting",
    artistId: ""
  });

  const loadData = async () => {
    const res = await axios.get("http://localhost:5000/products");
    setProducts(res.data);
  };

  useEffect(() => {
    loadData();
  }, []);

  // Add Product
  const handleAdd = async () => {
    await axios.post("http://localhost:5000/products", form);
    loadData();
    alert("Product Added");
  };

  // Delete Product
  const handleDelete = async (id) => {
    await axios.delete(`http://localhost:5000/products/${id}`);
    loadData();
    alert("Deleted");
  };

  // Update Product
  const handleUpdate = async (id) => {
    await axios.put(`http://localhost:5000/products/${id}`, form);
    loadData();
    alert("Updated");
  };

  // Convert uploaded file → Base64
  const convertBase64 = (file) => {
    return new Promise((resolve) => {
      const reader = new FileReader();
      reader.onloadend = () => resolve(reader.result);
      reader.readAsDataURL(file);
    });
  };

  const handleImageUpload = async (e) => {
    const base64 = await convertBase64(e.target.files[0]);
    setForm({ ...form, image: base64 });
  };

  return (
    <div style={{ padding: "30px" }}>
      <h1>Manager CRUD Panel</h1>

      <h2>Add / Edit Product</h2>

      <input
        placeholder="Title"
        onChange={(e) => setForm({ ...form, title: e.target.value })}
      />

      <input
        placeholder="Price"
        onChange={(e) => setForm({ ...form, price: e.target.value })}
      />

      <textarea
        placeholder="Description"
        onChange={(e) => setForm({ ...form, description: e.target.value })}
      ></textarea>

      <input type="file" onChange={handleImageUpload} />

      <button onClick={handleAdd}>Add Product</button>

      <hr />

      <h2>Products List</h2>

      {products.map((p) => (
        <div key={p.id} style={{ marginBottom: 20 }}>
          <img src={p.image} width="100" />
          <h3>{p.title}</h3>
          <p>₹{p.price}</p>

          <button onClick={() => handleDelete(p.id)}>Delete</button>
          <button onClick={() => handleUpdate(p.id)}>Update</button>
        </div>
      ))}
    </div>
  );
}
