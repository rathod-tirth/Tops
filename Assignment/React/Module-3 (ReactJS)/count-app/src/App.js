import { useState } from "react";
import "./App.css";

function App() {
  const [count, setCount] = useState(0);

  return (
    <>
      <div className="container">
        <h2>React Count</h2>
        <span>{count}</span>
        <div className="wrapper">
          <button className="btn" onClick={() => setCount(count + 1)}>Increment</button>
          <button className="btn" onClick={() => setCount(count + 1)}>Decrement</button>
        </div>
        <button className="btn" onClick={() => setCount(0)}>Reset</button>
      </div>
    </>
  );
}

export default App;
