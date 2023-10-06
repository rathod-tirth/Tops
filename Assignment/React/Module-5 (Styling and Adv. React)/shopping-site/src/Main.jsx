import styled from "styled-components"
import { featureData } from "./data";
import Product from "./Product";

function Main() {
   return (
      <>
         <main>
            <div>
               <Hero>
                  <SubTitle>Fresh &amp; Organic</SubTitle>
                  <Tilte>Delicious Seasonal Fruits</Tilte>
                  <Btn>Fruit Collection</Btn>
                  <Btn>Contact Us</Btn>
               </Hero>
               <Feature>
                  {featureData.map((data) => {
                     const { id, icon, title, text } = data;
                     return (
                        <section key={id}>
                           <FWrapper>
                              <FIcon className="feature-icon"><i className={icon} /></FIcon>
                              <FText className="feature-text">
                                 <h4>{title}</h4>
                                 <p>{text}</p>
                              </FText>
                           </FWrapper>
                        </section>
                     );
                  })}
               </Feature>
               <Product />
            </div>
         </main>
      </>
   )
}
export default Main

const SubTitle = styled.h4`
   color: orange;
   text-transform: uppercase;
   letter-spacing: 0.2rem;
   font-size: 0.8rem;
   font-weight: 700;
`;

const Tilte = styled.h1`
   font-size: 3rem;
   color: white;
   margin: 1rem;
`;

const Btn = styled.button`
   border: none;
   border-radius: 40px;
   background-color: orange;
   padding: 0.6rem 0.9rem;
   color: white;
   cursor: pointer;
   transition: 0.3s ease;
   font-size: 0.8rem;
   font-weight: 500;
   margin: 0.5rem;

   &:hover {
   background-color: #051922;
   color: orange;
}
`;

const Hero = styled.section`
   text-align: center;
   height: calc(100vh - 80px);
   background-color: #051922AA;
   position: relative;
   padding: calc(50vh - 200px);
   margin-top: 80px;

   &::before {
      position: absolute;
      top: 0;
      right: 0;
      content: "";
      height: inherit;
      width: 100vw;
      background-image: url(p06hk0h6.jpg);
      background-size: cover;
      background-position: center;
      z-index: -2;
   }
`;

const Feature = styled.section`
   display: flex;
   justify-content: space-around;
   align-items: center;
   height: 200px;
   background-color: #f3f3f3;
`;

const FWrapper = styled.div`
   display: flex;
   align-items: center;
`;

const FIcon = styled.span`
   color: orange;
   border: 2px dotted orange;
   border-radius: 50%;
   padding: 0.8rem;
   font-size: 1.2rem;
`;

const FText = styled.span`
   margin-left: 0.8rem;
   p {
      font-size: 0.8rem;
      color: gray;
      margin-top: 0.2rem;
   }
`;