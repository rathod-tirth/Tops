import { useState } from "react";

function App() {
  // form control
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

  const { email, password, rpassword, fname, lname, phone, address, town, region, pin, country } = value;

  // form validation
  const validation = () => {
    let result = true;

    if (!email || !password || !rpassword || !fname || !lname || !phone || !address || !region || !pin || !country) {
      result = false;
      alert("Incorrect Inputs");
    }

    return result;
  };

  const handleChange = (e) => {
    setValue({ ...value, [e.target.name]: e.target.value });
  };

  // form submition
  const handleSubmit = (e) => {
    e.preventDefault();

    if (validation()) {
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

    }
  }

  return (
    <div className="container m-5">
      <h2>Registration</h2>
      <br />
      <p>Fields marked <span className="text-danger">*</span> are required</p>
      {/* FORM */}
      <form>
        <div className="form-group">
          <label htmlFor="email">Email<span className="text-danger">*</span> </label>
          <input type="email" className="form-control" placeholder="Enter email" name="email" onChange={handleChange} value={email} />
        </div>
        <div className="form-group">
          <label htmlFor="pwd">Password<span className="text-danger">*</span> </label>
          <input type="password" className="form-control" placeholder="Enter password" name="pwd" onChange={handleChange} value={password} />
        </div>
        <div className="form-group">
          <label htmlFor="rpwd">Retype Password<span className="text-danger">*</span> </label>
          <input type="password" className="form-control" placeholder="Retype password" name="rpwd" onChange={handleChange} value={rpassword} />
        </div>
        <div className="form-group">
          <label htmlFor="fname">First Name<span className="text-danger">*</span> </label>
          <input type="text" className="form-control" placeholder="Enter First Name" name="fname" onChange={handleChange} value={fname} />
        </div>
        <div className="form-group">
          <label htmlFor="lname">Last Name<span className="text-danger">*</span> </label>
          <input type="text" className="form-control" placeholder="Enter Last Name" name="lname" onChange={handleChange} value={lname} />
        </div>
        <div className="form-group">
          <label htmlFor="phone">Phone Number<span className="text-danger">*</span> </label>
          <input type="number" className="form-control" placeholder="Enter Phone Number" name="phone" onChange={handleChange} value={phone} />
        </div>
        <div className="form-group">
          <label htmlFor="address">Address<span className="text-danger">*</span> </label>
          <textarea className="form-control" name="address" id="address" cols="30" rows="10" placeholder="Enter Address" onChange={handleChange} value={address}></textarea>
        </div>
        <div className="form-group">
          <label htmlFor="town">Town</label>
          <input type="text" className="form-control" placeholder="Enter Town" name="town" onChange={handleChange} value={town} />
        </div>
        <div className="form-group">
          <label htmlFor="region">Region<span className="text-danger">*</span> </label>
          <input type="text" className="form-control" placeholder="Enter Region" name="region" onChange={handleChange} value={region} />
        </div>
        <div className="form-group">
          <label htmlFor="pin">PostCode/Zip<span className="text-danger">*</span> </label>
          <input type="text" className="form-control" placeholder="Enter PostCode/Zip" name="pin" onChange={handleChange} value={pin} />
        </div>
        <div className="form-group">
          <label htmlFor="country">Country<span className="text-danger">*</span> </label>
          <select className="form-control" name="country" id="country" onChange={handleChange} value={country}>
            <option value="">India</option>
            <option value="">UK</option>
            <option value="">USA</option>
            <option value="">Japan</option>
          </select>
        </div>
        <button type="submit" className="btn btn-primary" onClick={handleSubmit}>Submit</button>
      </form>
    </div>
  );
}

export default App;
