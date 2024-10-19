<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Collect and sanitize form data
    $name = htmlspecialchars(trim($_POST['name']));
    $email = htmlspecialchars(trim($_POST['email']));
    $message = htmlspecialchars(trim($_POST['message']));

    // Validate form fields and email
    if (!empty($name) && !empty($email) && !empty($message) && filter_var($email, FILTER_VALIDATE_EMAIL)) {
        // Email configuration
        $to = "shindesushant341@gmail.com"; 
        $subject = "New Contact Form Submission from $name";
        $body = "You have received a new message from your website contact form.\n\n";
        $body .= "Name: $name\nEmail: $email\n\nMessage:\n$message\n";
        $headers = "From: $email\r\nReply-To: $email\r\n";

        // Send email
        if (mail($to, $subject, $body, $headers)) {
            echo "Message sent successfully!";
        } else {
            echo "Message sending failed. Please try again.";
        }
    } else {
        echo "Please fill in all fields correctly.";
    }
} else {
    echo "Invalid request method.";
}
?>


