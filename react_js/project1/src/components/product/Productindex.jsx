import React from 'react'

function productindex() {
  return (

    <tr id='i'>
        <td>{index.pname}</td>
        <td>{index.price}</td>
        <td>{index.desc}</td>
        <td><img></img></td>
    <td>
    <Navlink to={'/product/edit/'+indexedDB.id} className="btn-btn-success">Edit</Navlink>
  </td>
  </tr>



  )
}

export default productindex