#include<iostream>
using namespace std;
#include<cmath>

int getDecimal(int n){
    int ans = 0;
    int i = 0;

    while (n>0)
    {
        int bit = n %10;
        ans = bit * pow(2 , i++) + ans;
        n/=10;
    }
    
    return ans;
}

int main()
{
    int n;
    cin>>n;

    int decimal = getDecimal(n);
    cout<<decimal<<endl;
 
    return 0;

}