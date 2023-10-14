import { useEffect, useState } from "react"
import axios from 'axios';

function User() {
   useEffect(() => { fetch() }, []);
   const [data, setData] = useState([]);

   const fetch = async () => {
      const res = await axios.get("https://jsonplaceholder.typicode.com/users");
      const data = res.data;
      setData(data);
   };

   return (
      <>
         <div class="container">
            <h2>User Table</h2>
            <table class="table table-bordered">
               <thead>
                  <tr>
                     <th>Id</th>
                     <th>Name</th>
                     <th>Email</th>
                     <th>Address</th>
                     <th>Phone</th>
                     <th>Website</th>
                     <th>Company</th>
                  </tr>
               </thead>
               <tbody>
                  {data.map((data) => {
                     const { id, name, email, address, phone, website, company, } = data;
                     return (
                        <tr key={id}>
                           <td>{id}</td>
                           <td>{name}</td>
                           <td>{email}</td>
                           <td>{address.street}, {address.suite}, {address.city}</td>
                           <td>{phone}</td>
                           <td>{website}</td>
                           <td>{company.name}</td>
                        </tr>
                     );
                  })}
               </tbody>
            </table>
         </div>
      </>
   )
}
export default User