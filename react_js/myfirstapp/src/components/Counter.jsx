import React, { useState } from "react";

export default function App() {
  const [a, setA] = useState("");
  const [b, setB] = useState("");
  const [sum, setSum] = useState(null);

  return (
    <fieldset style={{ width: "250px", margin: "50px auto", padding: "15px" }}>
      <legend>Addition</legend>
      <input type="number" value={a} onChange={(e) => setA(e.target.value)} placeholder="First" /><br /><br />
      <input type="number" value={b} onChange={(e) => setB(e.target.value)} placeholder="Second" /><br /><br />
      <button onClick={() => setSum(Number(a) + Number(b))}>Add</button>
      {sum !== null && <p>Result: {sum}</p>}
    </fieldset>
  );
}
