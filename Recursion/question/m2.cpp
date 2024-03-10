#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int& b = a;

    // int c = b/2;
    // int c = ++b;

    int c = b+1;  // isme b ki value same rahegi that is 10

    //int c = b++;   // isme b and a ki value 11 ho jayengi bcz bcz b++ and ++b are same as b+=1;   

    // int& c = ++b;   
    // int new1 = b+1;

    // int new1 = b++;
    // int& c = new1; 

    // int& c = b+1;  // gives error  
    // int& c = b++;  // gives error  

    // int newB = b+1;
    // int& c = newB;


    cout<<a<<endl;
    cout<<b<<endl;
    
    c = c + 3;
    cout<<c<<endl;


    //a = c;  // in this value of a and b both is 10 if ************ int c = b++;

    cout<<a<<endl;
    cout<<b<<endl;

    return 0;

}