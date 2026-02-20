import React from "react";

function VoteCheck({ age }) {
  return <p>{age >= 18 ? "You are eligible to vote" : "You are not eligible to vote"}</p>;
}

export default VoteCheck;

