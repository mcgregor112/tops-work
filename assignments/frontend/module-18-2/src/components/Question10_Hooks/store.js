import { createStore } from "redux";
export const INCREMENT = "INCREMENT";
export const DECREMENT = "DECREMENT";

export const increment = () => ({
  type: INCREMENT,
});

export const decrement = () => ({
  type: DECREMENT,
});
const initialState = {
  count: 0,
};
function reducer(state = initialState, action) {
  switch (action.type) {
    case INCREMENT:
      return { count: state.count + 1 };

    case DECREMENT:
      return { count: state.count - 1 };

    default:
      return state;
  }
}

const store = createStore(reducer);

export default store;