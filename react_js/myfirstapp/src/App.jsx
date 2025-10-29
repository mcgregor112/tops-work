import { useState } from "react";
import "./App.css";
import Home from "./components/Home";
import Catalog from "./components/Catalog";

function App() {
  const [showCatalog, setShowCatalog] = useState(false);

  return (
    <>
      <h1 className="text-center">MY second App</h1>
      <Home />

      <div className="text-center mt-4">
        <button
          className="btn btn-primary"
          onClick={() => setShowCatalog(!showCatalog)}
        >
          {showCatalog ? "Hide Catalog" : "Show Catalog"}
        </button>
      </div>

      {/* Show Catalog when button is clicked */}
      {showCatalog && <Catalog />}
    </>
  );
}

export default App;
