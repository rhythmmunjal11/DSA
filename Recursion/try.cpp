#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 11;
    int& b = a;

    cout<<&a<<endl;
    cout<<&b<<endl;


    int& c = b;
    cout<<c<<endl;
    cout<<&c<<endl;

    int& d = c;
    cout<<&d<<endl;

    return 0;

}