import React, { Component } from "react";

class DataFetch extends Component {
  componentDidMount() {
    console.log("Component Mounted");
  }

  render() {
    return <h2>Data Loaded</h2>;
  }
}

export default DataFetch;
