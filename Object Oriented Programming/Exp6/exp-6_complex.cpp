#include <iostream>
using namespace std;
class Complex{
private:
    double real;
    double imag;

public:
    Complex() : real(0), imag(0) {}

    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+( Complex& obj){
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }

    Complex operator-( Complex& obj){
        Complex result;
        result.real = real - obj.real;
        result.imag = imag - obj.imag;
        return result;
    }

    void display(){
        cout << "Result: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    double real1, imag1;
    cout << "Enter real part of the first complex number: ";
    cin >> real1;
    cout << "Enter imaginary part of the first complex number: ";
    cin >> imag1;
    Complex complex1(real1, imag1);
    complex1.display();

    double real2, imag2;
    cout << "Enter real part of the second complex number: ";
    cin >> real2;
    cout << "Enter imaginary part of the second complex number: ";
    cin >> imag2;
    Complex complex2(real2, imag2);
    complex2.display();

    Complex resultAdd = complex1 + complex2;
    cout << "Addition ";
    resultAdd.display();

    Complex resultSub = complex1 - complex2;
    cout << "Subtraction ";
    resultSub.display();

    return 0;
}
