import axios from "axios";

export const insert = (api, object) => {
   return function () {
      axios.post(api, object);
   }
}

export const deleteData = (api) => {
   return function () {
      axios.delete(api);
   }
}

export const updateData = (api, object) => {
   return function () {
      axios.patch(api, object);
   }
}
