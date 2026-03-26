/* compile time allocation = static
runtime memory allocation = dynamic*/
/*
static = stack
dynamic = heap
*/


#include<iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1); /*a double size vector created 2*1 */

    vec.push_back(2); //a double size vector created 2*2
    vec.push_back(4);
    vec.push_back(5);
    
    cout<<vec.size();
    cout<<vec.capacity();

    return 0;
}