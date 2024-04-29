# include <iostream>
using namespace std;

int main() {

  char choice;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> choice;

  cout << "Enter operand 1: ";
  cin >> num1;
  
  cout << "Enter operand 2: ";
  cin>> num2;

  switch(choice) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}

