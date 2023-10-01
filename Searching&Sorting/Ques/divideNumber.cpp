#include<iostream>
using namespace std;

int divideNum(int divident , int divisor){

    int s = 0;
    int e = abs(divident);
    int ans = 0;

    int mid = s + (e-s)/2;

    while (s<=e)
    {
        if (abs(divisor) * mid == abs(divident))
        {
            ans = mid;
            break;
        }

        else if (abs(divisor) * mid < abs(divident))
        {
            ans = mid;
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }

        mid = s + (e-s)/2;
        
        
    }

    if (divisor < 0 && divident < 0  || divisor > 0 && divident > 0)
    {
        return ans;
    }

    else{
        return -ans;
    }
    


    
}

int main()
{
    int divident = -22;
    int divisor = -7;

    int ans = divideNum(divident , divisor);
    cout<<"ans is : "<<ans<<endl;
 
    return 0;

}  