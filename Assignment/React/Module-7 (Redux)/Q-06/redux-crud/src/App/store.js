import { createStore, applyMiddleware } from "redux";
import reduxThunk from 'redux-thunk'
import rootReducer from "./rootReducer";

const middleWare = [reduxThunk]

const store = createStore(rootReducer, applyMiddleware(...middleWare));

export default store;