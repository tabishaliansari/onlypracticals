from flask import Flask

# Initialize the Flask application
app = Flask(__name__)
# Define a route that captures the user's name from the URL
@app.route('/greet/<name>')

def greet_user(name):
    # Return a personalized greeting message
    return f"<h2>Hello, {name}!</h2><br> Welcome to your personalized lab manual."

# Run the application
if __name__ == '__main__':
   app.run(debug=True)
