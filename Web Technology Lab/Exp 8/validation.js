document.getElementById('registrationForm').addEventListener('input', validateForm);
document.getElementById('registrationForm').addEventListener('submit', handleSubmit);

function validateForm(){
    let username = document.getElementById('username').value;
    let email = document.getElementById('email').value;
    let password = document.getElementById('password').value;

    document.getElementById('usernameError').innerHTML = "";
    document.getElementById('emailError').innerHTML = "";
    document.getElementById('passwordError').innerHTML = "";

    if(username.length < 3){
        document.getElementById('usernameError').innerHTML = "Username must be at least 3 characters long.";
    }

    let emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    if(!emailPattern.test(email)){
        document.getElementById('emailError').innerHTML = "Please enter a valid email address.";
    }

    if (password.length < 6){
        document.getElementById('passwordError').innerHTML = "Password must be at least 6 characters long.";
    }
}

function handleSubmit(event){
    event.preventDefault();
    
    let usernameError = document.getElementById('usernameError').innerHTML;
    let emailError = document.getElementById('emailError').innerHTML;
    let passwordError = document.getElementById('passwordError').innerHTML;

    if (usernameError === "" && emailError === "" && passwordError === ""){
        document.getElementById('confirmationMessage').innerHTML = 'Form submitted successfully!';
    } else {
        document.getElementById('confirmationMessage').innerHTML = 'Please correct the errors above.';
    }
}