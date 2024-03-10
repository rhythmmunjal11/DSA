#include<bits/stdc++.h>
using namespace std;

int noOfWays(int n){

    // base case
    if (n==0 || n==1)
    {
        return 1 ; 
    }


    return noOfWays(n-1) + noOfWays(n-2);
    

}

int main()
{
    int n; // nth stair
    cin>>n;


// total no. of ways to reach nth stair
    cout<<noOfWays(n);

    return 0;

}

























