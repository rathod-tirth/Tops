var fs=require("fs");

// Writing the file
// Sample.txt is an empty file
fs.writeFile("sample.txt","Let's write a few sentences in the file",function (err){
    if (err) {
        return console.error(err);
    }

    // Reading the file
    fs.readFile("sample.txt",function (err,data) {
        if(err){
            return console.error(err);
        }
        console.log("Data = "+data.toString());
    })
})
// use node.js to run the code

/*  On the client side, you can’t read or write files in JavaScript browsers. The fs module in Node.js may 
be used to accomplish this on the server-side. It has methods for reading and writing files on the file 
system that are both synchronous and asynchronous. 

    The fs.readFile() and rs.writeFile() methods are used to read and write of a file using javascript. 
The file is read using the fs.readFile() function, which is an inbuilt method. This technique reads the 
full file into memory and stores it in a buffer. */