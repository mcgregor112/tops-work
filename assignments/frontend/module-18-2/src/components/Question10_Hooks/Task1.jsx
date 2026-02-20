import React, { useState } from "react";

const Task1 = () => {
  const [count, setCount] = useState(0);

  return (
    <div>
      <h2>useState Counter</h2>
      <h3>{count}</h3>

      <button onClick={() => setCount(count + 1)}>Increment</button>
      <button onClick={() => setCount(count - 1)}>Decrement</button>
    </div>
  );
};

export default Task1;