function display_promt(){
    let person=prompt("Enter your Name:");

    if(person!=null){
        document.getElementById('myp').innerHTML="Greetings "+person;
    }
}