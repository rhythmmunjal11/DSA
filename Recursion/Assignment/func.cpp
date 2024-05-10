#include<bits/stdc++.h>
using namespace std;

// [wrong] as correct = 3 is defalut parametr and it is not in rightnmost , ans is the rightmost which is not defalut parameter
// void func(int s , int r , int carry = 3 , int ans){ // means default parameter sabse rightmost me aayega 
//     cout<<s<<endl;
//     cout<<r<<endl;
//     cout<<carry<<endl;
// } 


// wrong
// void func(int s , int r = 2 , int carry  , int ans){ // means default parameter sabse rightmost me aayega 
//     cout<<s<<endl;
//     cout<<r<<endl;
//     cout<<carry<<endl;
// } 


// correct
void func(int s , int r , int carry , int ans){ // means default parameter sabse rightmost me aayega 
    cout<<s<<endl;
    cout<<r<<endl;
    cout<<carry<<endl;
}

int main()
{

    int start = 0;
    int e = 5;

    int ans = -1;

    //func(start , e ); // carry value is 10 that is printed
    func(start , e , 0 , ans); // carry will be overwriteen to 0





    // new


    // string s = "";

    // s+='a'; // concatenate

    // s.push_back('b'); // ese bhi kar sakte hai 

    // // s.push_back("c");  // wrong bcz string ke ander ek or stirng daal raha hu

    // // we can push characters in that bcz string is a sequence of characters 

    // cout<<s<<endl;


    return 0;

}