// remove headers
document.querySelector('button').addEventListener('click',()=>{
    if(document.querySelector('div>h1')!=null){
        document.querySelector('div>h1').remove()
    }
    else{
        alert("Nothing to show!")
    }
})

// remove images
document.querySelector('ul').addEventListener('click',(event)=>{
    const tagName=event.target.tagName // gets the tagname of the target element

    if(tagName==='IMG'){
        event.target.parentNode.remove()
    }
    else{
        console.log(tagName);        
    }
})

// same thing as above but with a different approach
// document.querySelectorAll('img').forEach((item)=>{
//     item.addEventListener('click',(event)=>{
//         event.target.parentNode.remove()
//     })
// })
