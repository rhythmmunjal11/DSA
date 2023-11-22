#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int* arr[5] = {2,3,4,5,2};

    int a = 10;
    int* p = &a;
    int**q = &p;

    cout<<**q<<endl;
    cout<<*p<<endl;
    // cout<<&&q<<endl; // error

    // int b = 20;
    // *q = &b;
    // (*p)++;


    return 0;

}