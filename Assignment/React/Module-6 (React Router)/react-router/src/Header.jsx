import { Link, NavLink } from "react-router-dom"

function Header() {
   return (
      <>
         <nav className="navbar navbar-inverse">
            <div className="container-fluid">
               <div className="navbar-header">
                  <Link className="navbar-brand" to='/'>Lazy-Loading</Link>
               </div>
               <ul className="nav navbar-nav">
                  <li><NavLink to="/">Home</NavLink></li>
                  <li><NavLink to="/admin">Admin</NavLink></li>
                  <li><NavLink to="/user">User</NavLink></li>
               </ul>
            </div>
         </nav>
      </>
   )
}
export default Header