function first(){
        
        let fname = document.getElementById("fname").value;
        let lname = document.getElementById("lname").value;
        let email = document.getElementById("exampleInputEmail1").value;
        let password = document.getElementById("exampleInputPassword1").value;   
   
   /* storing data */
   
   localStorage.setItem("f_name",fname);
   localStorage.setItem("l_name",lname);
   localStorage.setItem("e_mail",email);
   localStorage.setItem("psw",password);
   
   if(password.length != 6){
    alert("password must be 6 characthers long");
    return false;
   }

   if(fnameame!=="" & lname!=="" & email!=="" & password!==""){
            
            window.location.href="login.html"
      }
      else{
        alert("Sorry you have missed any field!");
      }

    }



















    function first() {
      let fname = document.getElementById("fname").value;
      let lname = document.getElementById("lname").value;
      let email = document.getElementById("exampleInputEmail1").value;
      let password = document.getElementById("exampleInputPassword1").value;
    
      
      localStorage.getItem("f_name");
      localStorage.getItem("l_name");
      localStorage.getItem("e_mail");
      localStorage.getItem("psw");
      
    
      if (password.length !== 6) {
        alert("Password must be 6 characters long");
        return false;
      }
    
      if ( "f_name" == fname  && "l_name" == lname  && "e_mail" == email  && "psw" == password ) {
        window.location.href = "quiz.html";
      } else {
        alert("Sorry, you have missed a field!");
      }
    
    
     
    }