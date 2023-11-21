#include<bits/stdc++.h>
using namespace std;

void solve(int *p){
    *p = *p + 1;
    cout<<"p " << p << endl;


}

int main()
{
    int a = 11;

    solve(&a);

    cout<<a<<endl;
    cout<<&a<<endl;

    return 0;

}