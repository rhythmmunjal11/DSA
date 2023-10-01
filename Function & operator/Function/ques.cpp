#include<iostream>
using namespace std;

/// ***************** count number of set bits 

int main()
{
    int n ;
    cin>>n;

    int a = 0;

    // for negative number code aatak gayega as if we right shift any -ve number so it will become high value +ve number 

    while (n!=0)
    {
        int ans = n & 1;
        if (ans == 1)
        {
            a++;
        }

        n = n >> 1;
        
    }

    cout << "number of set bits in n : " << a << endl;
    
 
    return 0;

}