//This code prints the sum of series 1/1! + 2/2! + 3/3!... n/n! where '!' is factorial;

#include "iostream" 
using namespace std;

int main() {
    float number;
    cout<<"Enter a number till which the series is wanted: ";
    cin >> number;
    float seriesSum = 0.0;
    
    for (int i = 1; i <= number; i++)
    {
        float fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        
        seriesSum = seriesSum + (i/fact);
        if(i<number) {
            cout << i << "/" << i << "! + ";
        }
        else{
            cout << i << "/" << i << "! = " << seriesSum << endl;
        } 
    }
}