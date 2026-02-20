import React, { useState } from "react";

function InputEvent() {
  const [value, setValue] = useState("");

  return (
    <div>
      <input onChange={(e) => setValue(e.target.value)} />
      <p>You typed: {value}</p>
    </div>
  );
}

export default InputEvent;
