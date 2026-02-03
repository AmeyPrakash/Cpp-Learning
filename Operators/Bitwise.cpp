#include<iostream>
using namespace std;
int main() {
    int a = 5;
    int b = 6;
    cout << "Bitwise AND (a & b): " << (a & b) << endl; 
    cout << "Bitwise OR (a | b): " << (a | b) << endl;    
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl;  
    cout << "Bitwise NOT (~a): " << (~a) << endl;      
    cout << "Left Shift (a << 1): " << (a << 1) << endl; 
    cout << "Right Shift (b >> 1): " << (b >> 1) << endl; 
    return 0;
}