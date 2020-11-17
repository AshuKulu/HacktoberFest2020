const images = document.querySelectorAll("img")
const background = document.querySelector(".background")
const body = document.querySelector('.body')
const btn=document.getElementById('btn')
console.log("hi")
let y =""
images.forEach(image=>{
   
    
    image.addEventListener('click',(e)=>{
        const imageSrc= e.target.src
        const backgroundImg=document.getElementById("backgroundImage")
        const height=window.innerHeight
        // console.log(height)
        background.style.height= height
        background.style.top=y + 'px'
        console.log(y)
        background.classList.add("active")
        if(background.classList.contains("active")){
            body.classList.add('overlay')
        }
        backgroundImg.src=imageSrc
    })
})
background.addEventListener('click',(e)=>{
    if(e.target.id===btn.id){
        background.classList.remove("active")
        body.classList.remove("overlay")
    }
   
})


// window.addEventListener("click",(e)=>{
//     console.log(e.target.offsetTop)
//     // console.log(e.pageY)
// })

window.addEventListener("scroll",(e)=>{
    y=window.scrollY
    // console.log(y)
})