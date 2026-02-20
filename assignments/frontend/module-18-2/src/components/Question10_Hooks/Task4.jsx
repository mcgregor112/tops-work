import React, { useState, useRef } from "react";

const Task4 = () => {
  const [count, setCount] = useState(0);
  const renderCount = useRef(0);

  renderCount.current += 1;

  return (
    <div>
      <h2>useRef Example</h2>
      <p>Counter: {count}</p>
      <p>Component Rendered: {renderCount.current} times</p>

      <button onClick={() => setCount(count + 1)}>Increment</button>
    </div>
  );
};

export default Task4;