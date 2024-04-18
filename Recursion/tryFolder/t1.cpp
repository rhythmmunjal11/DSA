#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i = 2;
    int& j = i;

    cout<<"address of i is : "<<&i<<endl;
    cout<<"address of j is : "<<&j<<endl;

    // cout<<i+1<<endl;
    // cout<<j<<endl;

    // i = i + 2;

    // i = i++; // important 
    i = ++i;
    cout<<i<<endl;
    cout<<j<<endl;

    return 0;

}