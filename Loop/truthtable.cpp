#include<iostream>

int main(){
    std::cout<<"Truth Table for AND, OR, XOR"<<std::endl;
    int bin[2] = {0,1};
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            int A = bin[i];
            int B = bin[j];
            std::cout << A << " " << B << " :: "
                        << (A && B) << " "
                        << (A || B) << " "
                        << (A ^ B) << std::endl;
        } 
    }
    

    return 0;
}