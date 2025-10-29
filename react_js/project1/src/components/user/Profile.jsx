import React,{useEffect, useState} from "react"
import {useNavigate} from 'react-router-dom';

function Navbar(){
    let user = localStorage.getItem('user');
    user = JSON.parse(user);
    console.log(user);

    

    
}