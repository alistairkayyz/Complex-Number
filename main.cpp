#include <iostream>
using namespace std;

class complexNumbers{
    private:
      float real;
      float imag;
    public:
       complexNumbers(): real(0), imag(0){ }
       void input()       {
           cout << "Enter real and imaginary parts respectively: ";
           cin >> real;
           cin >> imag;
       }

       // Operator overloading
       complexNumbers operator - (complexNumbers c2)       {
           complexNumbers temp;
           temp.real = real - c2.real;
           temp.imag = imag - c2.imag;

           return temp;
       }

       void output()       {
           if(imag < 0)
               cout << "Output Complex number: "<< real << imag << "i";
           else
               cout << "Output Complex number: " << real << "+" << imag << "i";
       }
};

int main()
{
    complexNumbers c1, c2, result;

    cout<<"Enter first complex number:\n";
    c1.input();

    cout<<"Enter second complex number:\n";
    c2.input();

    result = c1 - c2;
    result.output();

    return 0;
}
