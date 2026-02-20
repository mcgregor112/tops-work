import HelloReact from "./components/Q1_Introduction/HelloReact.jsx";
import JSXExample from "./components/Q2_JSX/JSXExample.jsx";
import Greeting from "./components/Q3_Components/Greeting.jsx";
import WelcomeMessage from "./components/Q3_Components/WelcomeMessage.jsx";
import UserCard from "./components/Q4_Props_State/UserCard.jsx";
import Counter from "./components/Q4_Props_State/Counter.jsx";
import ClickEvent from "./components/Q5_Events/ClickEvent.jsx";
import InputEvent from "./components/Q5_Events/InputEvent.jsx";
import LoginStatus from "./components/Q6_Conditional_Rendering/LoginStatus.jsx";
import VoteCheck from "./components/Q6_Conditional_Rendering/VoteCheck.jsx";
import FruitList from "./components/Q7_Lists_Keys/FruitList.jsx";
import UserList from "./components/Q7_Lists_Keys/UserList.jsx";
import FormExample from "./components/Q8_Forms/FormExample.jsx";
import EmailValidation from "./components/Q8_Forms/EmailValidation.jsx";
import DataFetch from "./components/Q9_Lifecycle/DataFetch.jsx";
import LifeCycleDemo from "./components/Q9_Lifecycle/LifeCycleDemo.jsx";


function App() {
  return (
    <div>
      <HelloReact />
      <JSXExample />
      <Greeting name="Krishna" />
      <WelcomeMessage />
      <UserCard name="Krishna" age={21} location="India" />
      <Counter />
      <ClickEvent />
      <InputEvent />
      <LoginStatus />
      <VoteCheck age={20} />
      <FruitList />
      <UserList />
      <FormExample />
      <EmailValidation />
      <DataFetch />
      <LifeCycleDemo />
    </div>
  );
}

export default App;
