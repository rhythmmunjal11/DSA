#include<iostream>
using namespace std;

int main()
{
    int a = 10 , b = 5 , c = 5;
    int d;
    // d = b + c == a;  gives 1
    d = a + (b == c);
    cout<<d<<endl;
    
    return 0;

}