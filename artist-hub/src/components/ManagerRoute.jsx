import { Navigate } from "react-router-dom";

export default function ManagerRoute({ children }) {
  const user = JSON.parse(localStorage.getItem("user"));

  if (!user) return <Navigate to="/login" replace />;

  if (user.role !== "manager") return <Navigate to="/unauthorized" replace />;

  return children;
}
