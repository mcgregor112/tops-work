import { useAuth } from "../contexts/AuthContext";

export default function UserDashboard() {
  const { user } = useAuth();

  return (
    <div className="dashboard">
      <h1>Welcome, {user?.name}</h1>
      <p>Email: {user?.email}</p>

      <h2>Your Orders</h2>
      <p>No orders yet.</p>
    </div>
  );
}
