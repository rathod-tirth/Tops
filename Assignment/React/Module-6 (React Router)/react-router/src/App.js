import { BrowserRouter, Route, Routes } from "react-router-dom";
import Header from "./Header";
import { lazy, Suspense } from "react";

const Admin = lazy(() => import("./Admin-User/Admin"));
const User = lazy(() => import("./Admin-User/User"));

function App() {
  return (
    <>
      <BrowserRouter>
        <Header />
        <Suspense fallback={<Loading />}>
          <Routes>
            <Route path='/' element={<><h2>Hello Click on admin or user panel</h2></>}></Route>
            <Route path='/admin' element={<><Admin /></>}></Route>
            <Route path='/user' element={<><User /></>}></Route>
          </Routes>
        </Suspense>
      </BrowserRouter>
    </>
  );
}

export default App;


const Loading = () => {
  return (
    <>
      <h2>Loading...</h2>
    </>
  );
};