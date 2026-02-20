import React, { useState } from "react";

function EmailValidation() {
  const [email, setEmail] = useState("");
  const [error, setError] = useState("");

  const validate = () => {
    setError(email.includes("@") ? "" : "Invalid Email");
  };

  return (
    <div>
      <input onChange={e => setEmail(e.target.value)} />
      <button onClick={validate}>Validate</button>
      <p>{error}</p>
    </div>
  );
}

export default EmailValidation;
