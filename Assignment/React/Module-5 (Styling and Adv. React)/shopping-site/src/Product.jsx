import styled from 'styled-components';
import { productData } from './data';

function Product() {
   return (
      <>
         <Pro className="product">
            <PTitle>
               <h1><span style={{ color: "orange" }}>Our</span> Products</h1>
               <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Ex, ab omnis, dolorum</p>
            </PTitle>
            <PWrapper>
               {productData.map((data) => {
                  const { id, img, name, price } = data;
                  return (
                     <Card key={id}>
                        <CardImg src={img} alt="Strawberry" />
                        <article style={{ textAlign: "center" }}>
                           <h3>{name}</h3>
                           <p>per kg</p>
                           <h1>₹{price}</h1>
                           <Btn><i className="fa-solid fa-cart-shopping" /> Add to Cart</Btn>
                        </article>
                     </Card>
                  );
               })}
            </PWrapper>
         </Pro>
      </>
   )
}
export default Product

const Pro = styled.section`
   h1 {
      font-size: 1.8rem;
   }
   p {
      font-size: 0.8rem;
      color: gray;
      margin-top: 0.2rem;
   }
`;

const PTitle = styled.section`
   text-align: center;
   margin: 5rem;
`;

const PWrapper = styled.section`
   display: grid;
   width: 1150px;
   grid-template-columns: auto auto auto;
   gap: 1rem;
   margin: auto;
}
`;

const Card = styled.section`
   width: 350px;
   box-shadow: 1px 1px 20px #d3d3d3;

   &:hover {
     box-shadow: none;
   }
`;

const CardImg = styled.img`
   width: 300px;
   margin: 1rem 1rem 0 1rem;
   cursor: pointer;
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