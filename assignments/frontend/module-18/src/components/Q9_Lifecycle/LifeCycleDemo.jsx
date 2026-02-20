import React, { Component } from "react";

class LifeCycleDemo extends Component {
  componentDidUpdate() {
    console.log("Component Updated");
  }

  componentWillUnmount() {
    console.log("Component Unmounted");
  }

  render() {
    return <h2>Lifecycle Demo</h2>;
  }
}

export default LifeCycleDemo;
