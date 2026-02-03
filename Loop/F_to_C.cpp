#include<iostream>
using namespace std;

int main() {
    float fahrenheit,celsius;
    cout << "Enter thte temprature in fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5.0/9;
    cout << "Temp in celsius is : " << celsius << endl;
}