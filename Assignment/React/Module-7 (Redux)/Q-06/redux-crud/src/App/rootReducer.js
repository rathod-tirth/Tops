import { combineReducers } from "redux";
import userReducer from "../Feature/userReducer";

const rootReducer = combineReducers({
   user: userReducer
});

export default rootReducer;