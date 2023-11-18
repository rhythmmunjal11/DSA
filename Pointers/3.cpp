#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1,20,34,42,50};
    // // cout<<*arr+1<<endl;
    // // cout<<*(arr+1)<<endl;
    // // cout<<*arr<<endl;
    // // cout<<1[arr]<<endl;


    // int *p = &arr[0];
    // p = p + 2;
    // cout<<p<<endl;

    // cout<<&p<<endl;
    // &p = &p+1;


    char c = 'r';
    char *ch = &c;

    cout<<c<<endl;
    cout<<&c<<endl;
    // cout<<&c[0]<<endl;
    // cout<<endl;

    // cout<<&c[0]<<endl;
    // cout<<endl;

    // cout<<&c[1]<<endl;
    // cout<<endl;

    // cout<<*c<<endl;
    // cout<<*c+1<<endl;
    // cout<<*(c+1)<<endl;


    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<*ch<<endl;
    cout<<*ch+1<<endl;
    cout<<(ch+1)<<endl; 

    





    return 0;

}