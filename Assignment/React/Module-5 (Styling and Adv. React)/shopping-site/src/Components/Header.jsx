import styled from 'styled-components';

function Header() {
   return (
      <>
         <header>
            <Nav>
               <section>
                  <Logo href="#">Fruits.com</Logo>
               </section>
               <section>
                  <ul>
                     <List>Home</List>
                     <List>About</List>
                     <List>Pages</List>
                     <List>News</List>
                     <List>Contact</List>
                     <List>Shop</List>
                  </ul>
               </section>
               <section>
                  <Icon><i className="fa-solid fa-cart-shopping" /></Icon>
                  <Icon><i className="fa-solid fa-magnifying-glass" /></Icon>
               </section>
            </Nav>
         </header>
      </>
   )
}
export default Header

const Nav = styled.nav`
   display: flex;
   width: 100vw;
   height: 80px;
   background-color: #051922;
   color: white;
   justify-content: space-around;
   align-items: center;
`;

const Logo = styled.a`
   text-decoration: none;
   color: orange;
   font-size: 1.5rem;
   font-weight: 700;
`;

const List = styled.li`
   list-style: none;
   display: inline;
   font-size: 0.8rem;
   font-weight: 700;
   margin: 0 0.5rem;
   cursor: pointer;
   transition: 0.3s ease;

   &:hover{
      color: orange;
   }
`;

const Icon = styled.span`
   margin: 0 0.5rem;
   cursor: pointer;

   &:hover{
      color: orange;
   }
`;