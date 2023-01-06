function addToDisplay(val){
document.getElementById('display').value+=val;
}
function clearDisplay(){
    document.getElementById('display').value="";
}
  function calculate() {
    var result = eval(document.getElementById("display").value);
    document.getElementById("display").value = result;
  }