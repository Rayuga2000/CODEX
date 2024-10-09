// filter()
const arr=[
    {
        Item:"Book1", Price:200, Published:1965, Genre:"History"
    },
    {
        Item:"Book2", Price:300, Published:1965, Genre:"Science"
    },
    {
        Item:"Book3", Price:200, Published:1955, Genre:"History"
    },
    {
        Item:"Book4", Price:2000, Published:1945, Genre:"Comedy"
    },
    {
        Item:"Boo5", Price:200, Published:1975, Genre:"Science"
    },
    {
        Item:"Book6", Price:100, Published:1995, Genre:"Comedy"
    }
]

const userItems=arr.filter((book)=>book.Price>200 && book.Genre==="Comedy")
console.log(userItems);

// map()
const arr1=[1,2,3,4]
const arr2=arr1.map((num)=>num*num)

console.log(arr2);

// chaining
const arr3=[1,2,3,4]

console.log(arr3.map((num)=>num*10).filter((num)=>num>=30));

