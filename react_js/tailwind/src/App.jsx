import { useState } from 'react'
import "bootstrap/dist/css/bootstrap.min.css";
import { BrowserRouter,Routes,Route } from 'react-router-dom';
import Dashbord from './components/dashboard';
import Home from './components/home';
import Navbar from "./components/Navbar";
import Footer from './components/Footer';
import Pricing from './components/Pricing';

function App() {
  const [count, setCount] = useState(0)

  return (
    <>
    <Navbar />
        <Routes>
           <Route path="/" element={<Dashbord />} ></Route>
            <Route path="/home" element={<Home />} ></Route>
             <Route path="/pricing" element={<Pricing />} ></Route>
        </Routes>
    
     <Footer />  
    </>
  )
}

export default App