#include<bits/stdc++.h>
using namespace std;

void printSub(string str , int i , int n , string output){

    // base case 
    if (i == n)
    {
        cout<<output<<" ";
        return ;
    }


    // exclude
    printSub(str , i+1 , n , output);

    // include
    output.push_back(str[i]);  // yha value change hogi i = 0 pr (phele value output ki at i = 0 pr " " thi , ab 'a' hai value output ki at i = 0) 
    printSub(str , i+1 , n , output);    




//   *********************************

    //  agar include phele likha hota then we will do this 
    // output.push_back(str[i]);
    // printSub(str , i+1 , n , output);
    // output.pop_back(); // ********************** bcz hamne let's say output ki value at i = 0 pr change kar di 
    // phele value thi output ki at i = 0 pr "" or ab value ho chuki hai 'a'
    // so gab hum exclude ko call karenge tab value of outptu at i = 0 pr exclude ke liye to vo value "" honi thi , but ab value hai 'a' to ans galat aa gayaga 


}

int main()
{
    string str = "abc";
    int i = 0;
    int n = str.length();

    string output = "";

    printSub(str , i , n , output);

    return 0;

}