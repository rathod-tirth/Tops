import { toast } from "react-toastify";

const useValidation = (value) => {

   // Regex
   const emailTest = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/;
   const passwordTest = /^(?=.*[A-Z])(?=.*[a-z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$/;

   // validation function is invoked when form is submitted
   const validation = () => {

      // dependent of the validation
      let result = true;

      // email
      if (!value.email || !emailTest.test(value.email)) {
         toast.error("Provide Proper Email");
         result = false;
      }
      // password
      if (!value.password || !passwordTest.test(value.password)) {
         toast.error("Provide Proper Password");
         result = false;
      }
      // re-enter-password
      if (value.rpassword !== value.password) {
         toast.error("Provide same Password");
         result = false;
      }
      // first name
      if (!value.fname) {
         toast.error("Provide Proper First Name");
         result = false;
      }
      // last name
      if (!value.lname) {
         toast.error("Provide Proper Last Name");
         result = false;
      }
      // phone number
      if (!value.phone || value.phone.length !== 10) {
         toast.error("Provide Proper Phone");
         result = false;
      }
      // address
      if (!value.address) {
         toast.error("Provide Proper Address");
         result = false;
      }
      // region
      if (!value.region) {
         toast.error("Provide Proper Region");
         result = false;
      }
      // pin
      if (!value.pin) {
         toast.error("Provide Proper Pin");
         result = false;
      }
      // country
      if (!value.address) {
         toast.error("Provide Proper Country");
         result = false;
      }

      return result;
   }

   return validation;
};

export default useValidation;