import React, { useEffect, useState } from "react";

const Task1 = () => {
  const [data, setData] = useState([]);

  useEffect(() => {
    fetch("http://localhost:3000/users")
      .then(res => res.json())
      .then(res => setData(res));
  }, []);

  return (
    <div>
      <h2>JSON Server Data</h2>
      {data.map(item => (
        <p key={item.id}>{item.name}</p>
      ))}
    </div>
  );
};

export default Task1;