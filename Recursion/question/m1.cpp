#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i = 0;
    int& i1 = i;

    cout<<i<<endl;
    cout<<i1<<endl;

    // cout<<i1+1<<endl;
    // cout<<i<<endl;

    int newi = i1+1;
    cout<<newi<<endl;
    i = newi;
    cout<<i<<endl;
    cout<<i1<<endl;

    return 0;

}