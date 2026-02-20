import React from "react";

function UserList() {
  const users = [
    { id: 1, name: "Krishna" },
    { id: 2, name: "Aman" }
  ];

  return (
    <ul>
      {users.map(user => (
        <li key={user.id}>{user.name}</li>
      ))}
    </ul>
  );
}

export default UserList;
