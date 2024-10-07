var obj1={
    firstName: "Tushar",
    lastName: "Sarkar",
}

// console.log(obj1.firstName +" "+obj1.lastName)

const obj2={
    age:24,
    sex:"M"
}

const obj=Object.assign({},obj1,obj2) // appends all the enumerables to the first argument enumerable 
// console.log(obj);

const obj3={...obj1,...obj2} // achieves the same result as above using 'spread' operator
// console.log(obj3);

console.log(Object.keys(obj)); // returns an array containing all the keys of an object
console.log(Object.values(obj)); // returns an array containing all the values of an object
console.log(Object.entries(obj)); // returns an array containing all the key-value pair of an object
console.log(obj.hasOwnProperty('age')); // returns a boolean value after checking if the object has the mentioned property

//i) often data from a database comes in the following format (array of objects)
const users=[
    {
        name: "Tushar"
    },
    {
        name: "Rahul"
    },
    {
        name: "Ashutosh"
    }
]

for(let i=0;i<3;i++){
    console.log(users[i].name); //ii) we can access those values like this using loops
}
