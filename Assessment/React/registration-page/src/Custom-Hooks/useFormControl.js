import { useState } from "react";
import { toast } from "react-toastify";
import useValidation from "./useValidation";

// custom hook for form control to ensure cleaner, readable with better code quality

function useFormControl() {

   // Input tags as state object
   const [value, setValue] = useState({
      email: "",
      password: "",
      rpassword: "",
      fname: "",
      lname: "",
      phone: "",
      address: "",
      town: "",
      region: "",
      pin: "",
      country: ""
   });

   // storing Input values as state objects
   const handleChange = (e) => {
      setValue({ ...value, [e.target.name]: e.target.value });
   };

   const validation = useValidation(value);

   // form submission
   const handleSubmit = (e) => {
      // preventing the webpage form reloading
      e.preventDefault();

      // procceding the code on based on validation output
      if (validation()) {

         // add your code... for correct inputs

         // cleaing up the input fields
         setValue({
            email: "",
            password: "",
            rpassword: "",
            fname: "",
            lname: "",
            phone: "",
            address: "",
            town: "",
            region: "",
            pin: "",
            country: ""
         });

         // notification
         toast.success("Form Submitted");

         console.log("All the user Input is correct");

      } else {
         // add your code... for incorrect inputs

         console.log("Error!! User Input is Incorrect");
      }
   }

   // returning values of the hook as an object
   return { value, setValue, handleChange, handleSubmit }
}
export default useFormControl