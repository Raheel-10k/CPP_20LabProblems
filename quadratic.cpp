//This code gives the roots of a quadratic equation using discriminant to find roots and its types.

#include "iostream"
using namespace std;

int main() {
    float dsc, realPart, imaginaryPart;
    int a, b, c;
    cout << "For equation: ax² + bx + c = 0.\nEnter coefficients a, b and c: ";
    cin >> a >> b >> c;
    dsc = b*b - 4*a*c;

    //finding the roots according to type of discriminant:
    
    if (dsc > 0) {
        float root1 = (float(-b + sqrt(dsc))) / (float(2*a));
        float root2 = (float(-b - sqrt(dsc))) / (float(2*a));
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << root1 << endl;
        cout << "x2 = " << root2 << endl;
    }//when both roots are real
    
    else if (dsc == 0) {
        cout << "Roots are real and same." << endl;
        float root = float(-b)/float((2*a));
        cout << "x1 = x2 =" << root << endl;
    }//when only one root exists

    else {
        /*
            formula used bellow is:
                root= (-b ± sqrt(dsc))/(2a);
                now for imaginary:
                root = real + imaginary.
            where real=-b/2a and imaginary=(sqrt(dsc)/(2a)).
            resulting roots as x+yi where x and y are real and imaginary respectively.
        */
        realPart = float(-b)/float((2*a));
        imaginaryPart =(float(sqrt(-dsc)))/(float(2*a));
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }//when roots are imaginary
    return 0;
}