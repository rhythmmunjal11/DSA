#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n){
    if (n==0 || n==1)
    {
        return 1; //means only one way to reach oth or 1th stair

    }

    return climbStairs(n-1) + climbStairs(n-2);
    
}

int main()
{
    // climb stairs 

    int n;
    cin>>n; // find total number of ways to reach nth stair 

    int ans = climbStairs(n);
    cout<<ans<<endl;


    return 0;

}