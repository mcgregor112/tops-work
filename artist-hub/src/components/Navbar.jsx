import { useState } from "react";
import { Link } from "react-router-dom";
import { FiSearch, FiUser, FiShoppingCart } from "react-icons/fi";
import "../styles/navbar.css";

export default function Navbar() {
  const [search, setSearch] = useState("");

  const handleSearch = (e) => {
    if (e.key === "Enter") {
      window.location.href = `/products?search=${search}`;
    }
  };

  return (
    <nav className="navbar-container">
      {/* Logo */}
      <div className="navbar-left">
        <Link to="/" className="navbar-brand">ARTIST HUB</Link>
      </div>

      {/* Center Links */}
      <ul className="navbar-links">
        <li><Link to="/buy">BUY</Link></li>
        <li><Link to="/sell">SELL</Link></li>
        <li><Link to="/products">ARTS</Link></li>
        <li><Link to="/cart">CART</Link></li>
        <li><Link to="/about">ABOUT</Link></li>
        <li><Link to="/contact">CONTACT</Link></li>
      </ul>

      {/* Right Side Icons */}
      <div className="navbar-right">
        
        {/* Search Input */}
        <div className="search-box">
          <FiSearch className="icon search-icon" />
          <input
            type="text"
            placeholder="Search artworks..."
            value={search}
            onChange={(e) => setSearch(e.target.value)}
            onKeyDown={handleSearch}
          />
        </div>

        {/* User Icon */}
        <Link to="/login">
          <FiUser className="icon" />
        </Link>

        {/* Cart Icon */}
        <Link to="/cart">
          <FiShoppingCart className="icon" />
        </Link>
      </div>
    </nav>
  );
}
