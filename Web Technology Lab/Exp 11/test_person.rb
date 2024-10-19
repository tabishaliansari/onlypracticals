require_relative 'person'

# Create a new Person object
person = Person.new('Alice', 30, 'alice@example.com')

# Retrieve and print the initial values
puts "Name: #{person.name}"
puts "Age: #{person.age}"
puts "Email: #{person.email}"

# Modify the person's attributes
person.name = 'Bob'
person.age = 35
person.email = 'bob@example.com'

# Retrieve and print the updated values
puts "Updated Name: #{person.name}"
puts "Updated Age: #{person.age}"
puts "Updated Email: #{person.email}"