function checkAnswers() {
    var score = 0;
    var q1Answer = document.querySelector('input[name="q1"]:checked');
    var q2Answer = document.querySelector('input[name="q2"]:checked');
    var q3Answer = document.querySelector('input[name="q3"]:checked');
    var q4Answer = document.querySelector('input[name="q4"]:checked');
    var q5Answer = document.querySelector('input[name="q5"]:checked');
    var submitButton = document.getElementById("submit");

    if (q1Answer && q1Answer.value === "c") {
        score+=2;
    }
    if (q2Answer && q2Answer.value === "a") {
        score+=1.75;
    }
    if (q3Answer && q3Answer.value === "a") {
        score+=2.5;
    }
    if (q4Answer && q4Answer.value === "c") {
        score+=1.75;
    }
    if (q5Answer && q5Answer.value === "a") {
        score+=1.75;
    }

    alert("Your score is " + score + " out of 10");

    // Disable form and submit button
    var quizForm = document.getElementById("quiz-form");
    quizForm.reset();
    quizForm.disabled = true;
    submitButton.disabled = true;
}

// Set a 30-second time limit for the quiz
var timeLimit = 20; // in seconds
var timer = setTimeout(function() {
    alert("Time's up!");
    checkAnswers();
}, timeLimit * 1000);