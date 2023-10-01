#include<iostream>
using namespace std;

int main()
{
    int n , k;
    cin>>n>>k;

    int mask = 1<<k;
    int ans = n | mask;

    cout<<ans<<endl;


    


    
    return 0;

}