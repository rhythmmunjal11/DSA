#include<iostream>
#include<cmath>
using namespace std;

// int DecimalToBinary(int n){
    
//     int i = 0;
//     int binary = 0;

//     while (n > 0)
//     {
//         int d = n%2;
//         binary = d*pow(10 , i++) + binary;
//         n/=2;
//     }

//     return binary;
// }


int DecimalToBinary2(int n){
    
    int i = 0;
    int binary = 0;

    while (n > 0)
    {
        int d = (n&1);
        binary = d*pow(10 , i++) + binary;
        n = n >> 1;
    }

    return binary;
}




int main()
{
    // Decimal To Binary
    int n;
    cin>>n;

    cout<<DecimalToBinary2(n);


 
    return 0;

}
