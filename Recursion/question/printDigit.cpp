#include<bits/stdc++.h>
using namespace std;

void printDigit(int& n){

    cout<<"n ki value "<<n<<endl;

    // base case
    if (n==0)
    {
        return;
    }

    
    // ek case hum solve karge 
    // cout<<n%10<<" ";  // 7 4 6  


    //baaki recursion sambhal lega 
    int newN = n / 10;
    printDigit(newN);
    // printDigit(n/10);

    cout<<"n ki value "<<n<<endl;    

    // ek case hum solve karge 
    cout<<n%10<<endl;;  ///// 6 4 7 



    
}

int main()
{
    // int n = -647; // prints -6 -4 -7

    // int n = 0647; // prints 4 2 3

    int n = 647;
    cout<<"before value of n is : "<<n<<endl;

    printDigit(n);

    cout<<"after value of n is : "<<n<<endl;

    return 0;

}