import styled from 'styled-components'

function Header() {
   return (
      <>
         <nav>
            <Wrapper>
               <Title>Fruits</Title>
            </Wrapper>
            <Wrapper>
               <ul>
                  <li>Home</li>
                  <li>About</li>
                  <li>Pages</li>
                  <li>News</li>
                  <li>Contact</li>
                  <li>Shop</li>
               </ul>
            </Wrapper>
         </nav>
      </>
   )
}
export default Header

const Wrapper = styled.section`

`;