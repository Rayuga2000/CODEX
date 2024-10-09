//explicit arrow function
const explicit = () => {
    return "Hello World!"
}
// console.log(explicit())

//implicit arrow function
const implicit = () => "Hello World!" // const implicit = () => ("Hello World!")
// console.log(implicit())

(myFunc=(x,y,z)=>{
    console.log(x,y,z)
})(5,10,15);

(myFunc=(x,y)=>{
    console.log(x,y);    
})(10,20)