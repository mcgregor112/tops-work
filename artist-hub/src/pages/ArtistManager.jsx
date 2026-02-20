import { useEffect, useState } from "react";
import axios from "axios";

export default function ArtistManager() {
  const [artists, setArtists] = useState([]);
  const [form, setForm] = useState({
    name: "",
    bio: "",
    image: ""
  });

  // Load artists
  const loadArtists = async () => {
    const res = await axios.get("http://localhost:5000/artists");
    setArtists(res.data);
  };

  useEffect(() => {
    loadArtists();
  }, []);

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

  // Add Artist
  const handleAddArtist = async () => {
    await axios.post("http://localhost:5000/artists", form);
    setForm({ name: "", bio: "", image: "" });
    loadArtists();
    alert("Artist Added");
  };

  // Update Artist
  const handleUpdate = async (id) => {
    await axios.put(`http://localhost:5000/artists/${id}`, form);
    loadArtists();
    alert("Artist Updated");
  };

  // Delete Artist
  const handleDelete = async (id) => {
    await axios.delete(`http://localhost:5000/artists/${id}`);
    loadArtists();
    alert("Artist Deleted");
  };

  return (
    <div style={{ padding: "30px" }}>
      <h1>Artist Manager</h1>

      <h2>Add / Edit Artist</h2>

      <input
        placeholder="Artist Name"
        value={form.name}
        onChange={(e) => setForm({ ...form, name: e.target.value })}
      />

      <textarea
        placeholder="Artist Bio"
        value={form.bio}
        onChange={(e) => setForm({ ...form, bio: e.target.value })}
      />

      <input type="file" onChange={handleImageUpload} />

      <button onClick={handleAddArtist}>Add Artist</button>

      <hr />

      <h2>Artists List</h2>

      {artists.map((a) => (
        <div key={a.id} style={{ marginBottom: 20 }}>
          <img src={a.image} width="120" height="120" style={{ borderRadius: 10 }} />
          <h3>{a.name}</h3>
          <p>{a.bio}</p>

          <button onClick={() => handleDelete(a.id)}>Delete</button>
          <button onClick={() => handleUpdate(a.id)}>Update</button>
        </div>
      ))}
    </div>
  );
}
