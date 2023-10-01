#include<iostream>
using namespace std;

int main()
{
    // cout<<(5&1)<<endl;
    // cout<<(101&1)<<endl;

    int d = 101;
    cout<<(d&1)<<endl;
    d = d >> 1;
    cout<<(d&1)<<endl;
    d = d >> 1;
    cout<<(d&1)<<endl;
    d = d >> 1;
    cout<<(d&1)<<endl;
    d = d >> 1;
    cout<<(d&1)<<endl;


 
    return 0;

}