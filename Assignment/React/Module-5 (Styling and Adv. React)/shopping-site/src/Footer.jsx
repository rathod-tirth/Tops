import styled from 'styled-components';

function Footer() {
   return (
      <>
         <Foot>
            <FBox >
               <h3>About us</h3>
               <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Omnis assumenda corporis animi tempore ipsa
                  deserunt repellat labore ipsam nostrum sequi!</p>
            </FBox>
            <FBox >
               <h3>Get in Touch</h3>
               <p>34/8, East Hukupara, Gifirtok, Sadan. <br />
                  support@fruitkha.com <br />
                  +00 111 222 3333</p>
            </FBox>
            <FBox >
               <h3>Pages</h3>
               <ul>
                  <li>Home</li>
                  <li>About</li>
                  <li>Shop</li>
                  <li>News</li>
                  <li>Contact</li>
               </ul>
            </FBox>
            <FBox >
               <h3>Subscribe</h3>
               <p>Subscribe to our mailing list to get the latest updates.</p>
               <form className="inp-wrapper">
                  <input type="email" placeholder="Email" />
                  <Btn type="submit"><i className="fas fa-paper-plane" /></Btn>
               </form>
            </FBox>
         </Foot>
      </>
   )
}
export default Footer

const Foot = styled.footer`
   display: flex;
   padding: 5rem;
   padding-bottom: 0;
   height: 560px;
   background-color: #051922;
   margin-top: 5rem;
   color: white;
`;

const FBox = styled.section`
   width: 25%;
   margin-left: 1.2rem;

   h3 {
      position: relative;
      font-weight: 500;
      margin-bottom: 2rem;
   }

   h3:after {
      position: absolute;
      content: '';
      left: 0px;
      right: 0px;
      width: 25px;
      height: 2px;
      background-color: orange;
      margin: 2.5rem 0;
   }

   input {
      padding: 0.6rem;
      padding-top: 0.5rem;
      border: none;
      background-color: #012738;
      width: 78%;
      border-radius: 4px 0 0 4px;
      color: #fff;
   }

   li {
      list-style: none;
      position: relative;
      padding-left: 0.9rem;
      font-size: 0.8rem;
      color: gray;
      margin: 0.8rem 0;
      cursor: pointer;
      transition: 0.2s ease;
   }

   li:hover {
      color: orange;
   }

   ul li:before {
      position: absolute;
      left: 0;
      top: 0;
      content: ">";
      font-family: sans-serif;
      font-size: 1rem;
      font-weight: 900;
      color: orange;
   }

   p {
      line-height: 1.5rem;
      margin-bottom: 1rem;
      font-size: 0.8rem;
      color: gray;
      margin-top: 0.2rem;
   }
`;

const Btn = styled.button`
   border: none;
   border-radius: 0 4px 4px 0;
   color: orange;
   background-color: #012738;
   padding: 0.6rem 0.9rem;
   cursor: pointer;
   transition: 0.3s ease;
   font-size: 0.8rem;
   font-weight: 500;
   margin-left: 0.3rem;

   &:hover {
      color: #012738;
      background-color: orange;
   }
`;