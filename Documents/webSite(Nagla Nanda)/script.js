var buttons=document.querySelectorAll('.btns');
var sections=document.querySelectorAll('section');
// seceted btn
function select(e){
    removecolor();
    removeShow();
    // add color 
    this.classList.add('active');
    // add cotent
    let content=document.querySelectorAll(`#${this.id}-content`);
    content.forEach(item => item.classList.add('show'));
}
// removeall colors
function removecolor(){
buttons.forEach(item => item.classList.remove('active'))
}
// remove the previous items
function removeShow(){
    sections.forEach(item => item.classList.remove('show'))
    }
// select the btns
 buttons.forEach(item =>  item.addEventListener('click',select));