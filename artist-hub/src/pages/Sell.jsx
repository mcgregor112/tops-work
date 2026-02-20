import { useState } from "react";
import "./sell.css";

export default function Sell() {
  const [formData, setFormData] = useState({
    title: "",
    category: "",
    price: "",
    description: "",
    artistName: "",
    artistEmail: "",
    image: "",
    status: "Available",
    userId: localStorage.getItem("userId") || ""
  });

  const [preview, setPreview] = useState("");

  const handleChange = (e) => {
    setFormData({ 
      ...formData, 
      [e.target.name]: e.target.value 
    });

    if (e.target.name === "image") {
      setPreview(e.target.value);
    }
  };

  const handleSubmit = async (e) => {
    e.preventDefault();

    if (!formData.userId) {
      alert("You must be logged in to sell.");
      return;
    }

    const res = await fetch("http://localhost:3000/sell", {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify(formData)
    });

    if (res.ok) {
      alert("Artwork submitted successfully!");
      window.location.href = "/dashboard";
    } else {
      alert("Error submitting artwork");
    }
  };

  return (
    <div className="sell-container">
      <h1 className="sell-title">Sell Your Artwork</h1>

      <form className="sell-form" onSubmit={handleSubmit}>
        
        <div className="form-group">
          <label>Artwork Image URL</label>
          <input 
            type="text"
            name="image"
            placeholder="Paste image link"
            onChange={handleChange}
          />
        </div>

        {preview && (
          <img src={preview} className="preview-img" alt="preview" />
        )}

        <div className="form-group">
          <label>Artwork Title</label>
          <input 
            type="text"
            name="title"
            placeholder="Enter artwork title"
            onChange={handleChange}
          />
        </div>

        <div className="form-group">
          <label>Category</label>
          <select name="category" onChange={handleChange}>
            <option value="">Select Category</option>
            <option>Painting</option>
            <option>Digital Art</option>
            <option>Sculpture</option>
            <option>Photography</option>
            <option>Other</option>
          </select>
        </div>

        <div className="form-group">
          <label>Price (₹)</label>
          <input 
            type="number"
            name="price"
            placeholder="Enter price"
            onChange={handleChange}
          />
        </div>

        <div className="form-group">
          <label>Description</label>
          <textarea 
            name="description"
            placeholder="Write about your artwork"
            onChange={handleChange}
          ></textarea>
        </div>

        <div className="form-group">
          <label>Artist Name</label>
          <input 
            type="text"
            name="artistName"
            placeholder="Your full name"
            onChange={handleChange}
          />
        </div>

        <div className="form-group">
          <label>Artist Email</label>
          <input 
            type="email"
            name="artistEmail"
            placeholder="Your email"
            onChange={handleChange}
          />
        </div>

        <button className="sell-btn" type="submit">
          Upload Artwork
        </button>
      </form>
    </div>
  );
}
