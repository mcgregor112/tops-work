import React from "react";
import { useSelector, useDispatch } from "react-redux";
import { increment, decrement } from "../Question10_Hooks/store";

const Task3 = () => {
  const count = useSelector((state) => state.count);
  const dispatch = useDispatch();

  return (
    <div>
      <h2>Redux Counter</h2>
      <h3>Count: {count}</h3>

      <button onClick={() => dispatch(increment())}>+</button>
      <button onClick={() => dispatch(decrement())}>-</button>
    </div>
  );
};

export default Task3;