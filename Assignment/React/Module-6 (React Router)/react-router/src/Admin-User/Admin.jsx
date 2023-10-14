import { useEffect, useState } from "react"
import axios from 'axios';

function Admin() {
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
            <h2>Admin Table</h2>
            <table class="table table-bordered">
               <thead>
                  <tr>
                     <th>Id</th>
                     <th>UserName</th>
                     <th>Email</th>
                  </tr>
               </thead>
               <tbody>
                  {data.map((data) => {
                     const { id, username, email } = data;
                     return (
                        <tr key={id}>
                           <td>{id}</td>
                           <td>{username}</td>
                           <td>{email}</td>
                        </tr>
                     );
                  })}
               </tbody>
            </table>
         </div>
      </>
   )
}
export default Admin