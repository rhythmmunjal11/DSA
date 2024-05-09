#include<bits/stdc++.h>
using namespace std;


int solve(int n , int x ,int y , int z){

    // base case
    if (n==0)
    {
        return 0;
    }

    if (n < 0)
    {
        return INT_MIN;
    }
    

    // 1 case solve
    int ans1 = solve(n-x , x , y , z) + 1;
    int ans2 = solve(n-y , x , y , z) + 1;
    int ans3 = solve(n-z , x , y , z) + 1;


    int ans = max(ans1 , max(ans2,ans3));
    return ans;
    



}

int main()
{
    // find maximum no. of segments of length n

    int n = 7;
    int x = 2;
    int y = 5;
    int z = 5;


    // solve fucntion returns maximum number of segments
    int ans = solve(n,x,y,z);

    // valid and invlid case (n = 8 , x = 3 , y = 3 , z = 3 ) invalid case

    if(ans < 0){
        ans = 0;
    }

    cout<<ans<<endl;

    return 0;

}