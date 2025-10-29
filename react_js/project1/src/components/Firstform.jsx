import React, { useState } from 'react';

function Firstform() {
    const [step1,setStep1] = useState({});

    const handleChange =(e)=>{
        const{name,value}= e.target;
        setStep1({
            ...step1,
            [name]:value
        })
    }

    const handleClick=()=>{
        console.log(step1);

        localStorage.setItem('step1',JSON.stringify(step1));
    }

  return (
    <div>
        <fieldset>
            <legend>Personal Details</legend>
            <input type="text" name="username" id="" onChange={handleChange}></input>
            <br></br>
            
        </fieldset>
    </div>
  )
}

export default Firstform