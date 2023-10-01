#include<iostream>
using namespace std;

int findSqrt(int n){

    int target = n;
    int s = 0;
    int e = n;
    int ans = -1;

    int mid = s + (e-s)/2;

    while (s <= e)
    {
        if (mid*mid == target)
        {
            return mid;
        }

        else if (mid * mid > target)
        {
            e = mid - 1;
            // ans = mid; // will give wrong answer 
        }

        else{
            ans = mid;
            s = mid + 1;
        }

        mid = s + (e-s)/2;
        
        
    }

    return ans;
}

int main()
{
    int n;
    cout<<"Square root of number : "<<endl;
    cin>>n;

    int ans = findSqrt(n);
    
    double ans1 = ans;

    int precision;

    cout<<"Enter the number of precision : "<<endl;
    cin>>precision;

    double step = 0.1;

    for (int i = 0; i < precision; i++)
    {
        for (double j = ans1; j * j < n; j = j + step)
        {
            ans1 = j;
        }

        step/=10;
        
    }

    cout<<ans1<<endl;
    
    
 
    return 0;

}