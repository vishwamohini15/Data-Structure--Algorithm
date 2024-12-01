let inputElm=document.querySelector(".input");
let btnElm=document.querySelector(".btn");
let answer=document.querySelector(".answer h1");


btnElm.addEventListener("click",()=>{
     console.log("hello world");
     if (inputElm.value % 2==0) {
          console.log("yeh its even");
          answer.innerHTML="yeh its Even";
          inputElm.value=" ";
          
     }else{
          console.log("NOT its even");
          answer.innerHTML=" NO its NOT even";
          inputElm.value=" ";

     }
     
})