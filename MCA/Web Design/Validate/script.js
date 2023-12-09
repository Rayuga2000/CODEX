function validate(uname,pass){
    const valid_uname="Uname";
    const valid_pass="Password";

    if(pass===valid_pass && uname===valid_uname){
        console.log("Login Successful");
    }
    else{
        console.log("Login UnSuccessful");
    }
}

validate(document.getElementById('uname').value,document.getElementById('pass').value);