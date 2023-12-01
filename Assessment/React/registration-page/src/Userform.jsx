import useFormControl from "./Custom-Hooks/useFormControl";

function Userform() {

  // using useFormControl hook to reduce code size
  const { value, handleChange, handleSubmit } = useFormControl();

  // destructuring the neccessary values... 
  const { email, password, rpassword, fname, lname, phone, address, town, region, pin, country } = value;

  return (
    <div className="container m-5">

      {/* HEADING */}
      <h2>Registration</h2>
      <br />

      {/* NOTICE */}
      <p>Fields marked <span className="text-danger">*</span> are required</p>

      {/* FORM */}
      <form>

        {/* EMAIL */}
        <div className="form-group">
          <label htmlFor="email">Email<span className="text-danger">*</span> </label>
          <input type="email" className="form-control" placeholder="Enter email" name="email" onChange={handleChange} value={email} />
        </div>
        {/* PASSWORD */}
        <div className="form-group">
          <label htmlFor="password">Password<span className="text-danger">*</span> </label>
          <input type="password" className="form-control" placeholder="Enter password" name="password" onChange={handleChange} value={password} />
        </div>
        {/* RE-ENTER PASSWORD */}
        <div className="form-group">
          <label htmlFor="rpassword">Re-Enter Password<span className="text-danger">*</span> </label>
          <input type="password" className="form-control" placeholder="Re-Enter password" name="rpassword" onChange={handleChange} value={rpassword} />
        </div>
        {/* FIRST NAME */}
        <div className="form-group">
          <label htmlFor="fname">First Name<span className="text-danger">*</span> </label>
          <input type="text" className="form-control" placeholder="Enter First Name" name="fname" onChange={handleChange} value={fname} />
        </div>
        {/* LAST NAME */}
        <div className="form-group">
          <label htmlFor="lname">Last Name<span className="text-danger">*</span> </label>
          <input type="text" className="form-control" placeholder="Enter Last Name" name="lname" onChange={handleChange} value={lname} />
        </div>
        {/* PHONE */}
        <div className="form-group">
          <label htmlFor="phone">Phone Number<span className="text-danger">*</span> </label>
          <input type="number" className="form-control" placeholder="Enter Phone Number" name="phone" onChange={handleChange} value={phone} />
        </div>
        {/* ADDRESS */}
        <div className="form-group">
          <label htmlFor="address">Address<span className="text-danger">*</span> </label>
          <textarea className="form-control" name="address" id="address" cols="20" rows="8" placeholder="Enter Address" onChange={handleChange} value={address}></textarea>
        </div>
        {/* TOWN */}
        <div className="form-group">
          <label htmlFor="town">Town</label>
          <input type="text" className="form-control" placeholder="Enter Town" name="town" onChange={handleChange} value={town} />
        </div>
        {/* REGION */}
        <div className="form-group">
          <label htmlFor="region">Region<span className="text-danger">*</span> </label>
          <input type="text" className="form-control" placeholder="Enter Region" name="region" onChange={handleChange} value={region} />
        </div>
        {/* PIN-CODE */}
        <div className="form-group">
          <label htmlFor="pin">PostCode/Zip<span className="text-danger">*</span> </label>
          <input type="text" className="form-control" placeholder="Enter PostCode/Zip" name="pin" onChange={handleChange} value={pin} />
        </div>
        {/* COUNTRY */}
        <div className="form-group">
          <label htmlFor="country">Country<span className="text-danger">*</span> </label>
          <select className="form-control" name="country" id="country" onChange={handleChange} value={country}>
            <option>India</option>
            <option>UK</option>
            <option>USA</option>
            <option>Japan</option>
          </select>
        </div>
        {/* SUBMIT BTN */}
        <button type="submit" className="btn btn-primary" onClick={(e) => handleSubmit(e)}>Submit</button>
      </form>
    </div>
  );
}

export default Userform;
