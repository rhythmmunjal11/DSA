#include<iostream>
#include<cmath>
using namespace std;

int BinaryToDecimal(int n){

    int i = 0;
    int value = 0;

    while (n > 0)
    {
        int d = n % 10;
        value = d*pow(2,i++) + value;
        n/=10;
    }

    return value;

}



int BinaryToDecimal2(int n){

    int i = 0;
    int value = 0;

    while (n > 0)
    {
        int d = (n & 1); // deals(&) with binary that's why if we input 101 then the binary of 101 will be executed 
        value = d*pow(2,i++) + value;
        n = n >> 1;
    }

    return value;

}



int main()
{
    // binary to Decimal 

    int n;
    cin>>n;

    // cout<<BinaryToDecimal(n);
    cout<<BinaryToDecimal2(n);


 
    return 0;

}