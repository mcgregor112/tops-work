import React from "react";
import "./App.css";

// Question 10 - Hooks
import Task1 from "./components/Question10_Hooks/Task1";
import Task2 from "./components/Question10_Hooks/Task2";
import Task3 from "./components/Question10_Hooks/Task3";
import Task4 from "./components/Question10_Hooks/Task4";

// Question 11 - Routing
import RoutingTask1 from "./components/Question11_Routing/Task1";
import RoutingTask2 from "./components/Question11_Routing/Task2";

// Question 12 - JSON / Firebase
import JsonTask from "./components/Question12_JSON_Firebase/Task1";

// Question 13 - Context API
import ContextTask from "./components/Question13_ContextAPI/Task1";

function App() {
  return (
    <div style={{ padding: "20px" }}>
      <h1>React Full Stack Lab Project</h1>

      <hr />
      <h2>Question 10 - Hooks</h2>
      <Task1 />
      <Task2 />
      <Task3 />
      <Task4 />

      <hr />
      <h2>Question 11 - Routing</h2>
      <RoutingTask1 />
      <RoutingTask2 />

      <hr />
      <h2>Question 12 - JSON / Firebase</h2>
      <JsonTask />

      <hr />
      <h2>Question 13 - Context API</h2>
      <ContextTask />
    </div>
  );
}

export default App;