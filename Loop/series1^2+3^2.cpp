#include<iostream>
#include<cmath>
int main(){
    int n;
    std::cout<<"Enter the number of terms:: " ;
    std::cin>>n;
    int sum =0;
    for (int i = 1; i <= 2*n - 1; i=i+2)
    {
        
        sum += i * i;
    }
    std::cout << "Sum = " << sum << std::endl;
    return 0;  

}