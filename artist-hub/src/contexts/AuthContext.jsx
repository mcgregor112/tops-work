import { createContext, useContext, useState, useEffect } from "react";

const AuthContext = createContext();

export function AuthProvider({ children }) {
  const [user, setUser] = useState(null);

  // Load saved user from localStorage on refresh
  useEffect(() => {
    const savedUser = localStorage.getItem("artistHubUser");
    if (savedUser) {
      setUser(JSON.parse(savedUser));
    }
  }, []);

  // Login function
  const login = async (email, password) => {
    const res = await fetch("http://localhost:5000/users?email=" + email);
    const data = await res.json();

    if (data.length === 0) return { success: false, msg: "User not found!" };

    const userRecord = data[0];

    if (userRecord.password !== password)
      return { success: false, msg: "Incorrect password!" };

    // Save user in state + localStorage
    setUser(userRecord);
    localStorage.setItem("artistHubUser", JSON.stringify(userRecord));

    return { success: true, user: userRecord };
  };

  // Signup
  const signup = async (userData) => {
    const res = await fetch("http://localhost:5000/users", {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify(userData),
    });

    const savedUser = await res.json();
    return savedUser;
  };

  // Logout
  const logout = () => {
    setUser(null);
    localStorage.removeItem("artistHubUser");
  };

  return (
    <AuthContext.Provider value={{ user, login, signup, logout }}>
      {children}
    </AuthContext.Provider>
  );
}

export const useAuth = () => useContext(AuthContext);
