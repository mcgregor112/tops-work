import React, { createContext, useState, useContext } from "react";

const ThemeContext = createContext();

const Child = () => {
  const { theme, toggleTheme } = useContext(ThemeContext);

  return (
    <div style={{ background: theme === "light" ? "#fff" : "#333", color: theme === "light" ? "#000" : "#fff" }}>
      <h2>Theme: {theme}</h2>
      <button onClick={toggleTheme}>Toggle</button>
    </div>
  );
};

const Task1 = () => {
  const [theme, setTheme] = useState("light");

  const toggleTheme = () => {
    setTheme(theme === "light" ? "dark" : "light");
  };

  return (
    <ThemeContext.Provider value={{ theme, toggleTheme }}>
      <Child />
    </ThemeContext.Provider>
  );
};

export default Task1;