import axios from "axios";

const ALLDATA = "ALLDATA";
const SINGLEDATA = "SINGLEDATA";

const userObject = {
   allUser: [],
   singleUser: [],
   name: "Tirth Rathod"
};

const userReducer = (state = userObject, action) => {
   switch (action.type) {
      case ALLDATA:
         return {
            ...state,
            allUser: action.payload
         }

      case SINGLEDATA:
         return {
            ...state,
            singleUser: action.payload
         }
   }
   return state;
}

export default userReducer;

const getData = (data) => ({ type: ALLDATA, payload: data });

export const fetchUser = (api) => {
   return function (dispatch) {
      axios.get(api)
         .then((res) => { dispatch(getData(res.data)) });
   }
}

const getSingleData = (data) => ({ type: SINGLEDATA, payload: data });

export const fetchSingleUser = (api) => {
   return function (dispatch) {
      axios.get(api)
         .then((res) => { dispatch(getSingleData(res.data)) });
   }
}


