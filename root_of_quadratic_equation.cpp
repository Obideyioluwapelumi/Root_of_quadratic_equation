

            // Program to Find Roots of a Quadratic Equation

/*
For a quadratic equation ax2+bx+c = 0 (where a, b and c are coefficients),
its roots are given by following the formula.

--  Quadratic Equation Formula
The term b2-4ac is known as the determinant of a quadratic equation. 
The determinant tells the nature of the roots.
*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, determinant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    determinant = b*b - 4*a*c;
    
    // 1. If the determinant is greater than 0, the roots are real and different.
    if (determinant > 0) {
        x1 = (-b + sqrt(determinant)) / (2*a);
        x2 = (-b - sqrt(determinant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    // 2. If the determinant is equal to 0, the roots are real and equal.
    else if (determinant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(determinant)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    // 3. If the determinant is less than 0, the roots are complex and different.
    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-determinant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;
}

