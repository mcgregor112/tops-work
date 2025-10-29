import React from 'react'

function Productedit() {
    
    const [product,setProduct] = useState({
        pname:'',
        price:'',
        desc:'',
        image:'',
    });


    const getProductById = async(id)=>{
        const proData = await axios.get('http://localhost:5000?product'+id)
    }

}

export default Productedit