import { useEffect, useState } from "react";
import { useLocation } from "react-router-dom";

export default function Search() {
  const [results, setResults] = useState([]);
  const query = new URLSearchParams(useLocation().search).get("q");

  useEffect(() => {
    fetch(`http://localhost:5000/products?q=${query}`)
      .then((res) => res.json())
      .then((data) => setResults(data));
  }, [query]);

  return (
    <div className="page-container">
      <h2>Search results for: {query}</h2>
      <div className="product-grid">
        {results.map((item) => (
          <div key={item.id} className="product-card">
            <img src={item.image} />
            <h3>{item.title}</h3>
            <p>₹{item.price}</p>
          </div>
        ))}
      </div>
    </div>
  );
}
