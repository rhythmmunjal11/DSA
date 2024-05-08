#include<bits/stdc++.h>
using namespace std;

void printSub(string str , int n , int i , string output , vector<string>& final){

    // base case
    if(i >= n){
        final.push_back(output);
        return ;                       
    }

    // include
    printSub(str , n , i+1 , output + str[i] , final);

    // exclude
    printSub(str , n , i+1 , output , final);


    // we can also do exlude first , but it will print like this (" " c b bc a ac ab abc)

}

int main()
{
    string str = "abc";
    int n = str.length();
    int i = 0;

    string output = "";
    // cout<<output;

    vector<string>final;

    printSub(str , n , i , output , final);


    for(auto val : final){
        cout<<val<<" ";
    }

    cout<<endl;

    cout<<"size of final vector is :  "<<final.size();




    return 0;

}