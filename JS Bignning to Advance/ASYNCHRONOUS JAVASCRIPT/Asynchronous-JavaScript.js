// Synchronous Programming vs Asynchronous Programmimng
// Synchronous code runs in sequence. 
// This means that each operation must wait for the previous one to complete before executing. 
// Asynchronous code runs in parallel. 
// This means that an operation can occur while another one is still being processed.


// Sync is single-thread, so only one operation or program will run at a time. 
// Async is non-blocking, which means it will send multiple requests to a server. 
// Sync is blocking — it will only send the server one request at a time and will wait for that request to be answered by the server.

// "I will finish later!"
// Functions running in parallel with other functions are called asynchronous
// A good example is JavaScript setTimeout()


// console.log("Script Start");
// console.log("This is Synchronous, Single Threaded");

// for (let i = 0; i < 10000; i++) {
//     console.log("Inside For Loop Waiting Finish this For Loop");
// }
// console.log("For Loop Finish");




// ***************************************************************
//                      Asynchronous Programming
// ***************************************************************


// setTimeout()
// Waiting for a Timeout
// When using the JavaScript function setTimeout(), you can specify a callback function to be executed on time-out:



// ********************
// // Example with setTimeout()
// Here We can see Script Start then print script end print immediately and after 5 sec setTimeout Execute on console.
// // This Behaviour is Called Ayschnronous Programming 

// console.log("Script Start");

// setTimeout(() => {
//     console.log("SetTimeOut Executed");
// }, 5000);

// console.log("Script End")



// ********************
// // Another Example with setTimeout()  Please Comment Above Example Code

console.log("Script Start");

function func() {
    console.log("SetTimeOut Executed")
}
// setTimeout() take 2 arguments. 
// 1st Function means it takes Callback and Time Duration in mili second

setTimeout(func, 2000);
for (let i = 0; i < 5000; i++) {
    console.log("For Loop Running");
    
}
console.log("Script End")


// Set Timeout Execute at Last Even Set Timeout Delay is Finish, because Event Loop Control btw Callback Queue and Call Stack, When Call Stack Free Event loop Allow to go Callback Queue code to Callstack and Execute 




// ********************
// setInterval()
// Waiting for Intervals:
// When using the JavaScript function setInterval(), you can specify a callback function to be executed for each interval:






// Hey Hey Boy




