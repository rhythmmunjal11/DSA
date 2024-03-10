#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 11;
    int& b = a;

    a = b + 1;

    // a+=1;
    // a++;

    cout<<a<<endl;
    cout<<b<<endl;

    return 0;

}