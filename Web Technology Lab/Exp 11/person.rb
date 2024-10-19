class Person
    # Initialize the class with name, age, and email attributes
    def initialize(name, age, email)
        @name = name
        @age = age
        @contact = email
    end
    # Getter for the name
    def name
        @name
    end
    # Setter for the name
    def name=(name)
        @name = name
    end
    # Getter for the age
    def age
        @age
    end
    # Setter for the age
    def age=(age)
        @age = age
    end
    # Getter for the email
    def email
        @contact
    end
    # Setter for the email
    def email=(email)
        @contact = email
    end
end