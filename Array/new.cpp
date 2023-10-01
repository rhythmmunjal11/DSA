#include<iostream>
using namespace std;

int main()
{
    // bool a = -978;
    // cout<<a<<endl;

    int a = 10;
    int b = 9;

    // a = a + b;
    // b = a-b;
    // a = a - b;

    // using xor operator
    a = a ^ b;
    b = a ^ b;
    a = b^a;
    

    cout<<"value of a is :" <<  a<<endl;
    cout<<"value of b is :"<<b<<endl;

    
 

    
    return 0;

}