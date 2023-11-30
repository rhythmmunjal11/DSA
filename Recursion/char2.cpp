#include<bits/stdc++.h>
using namespace std;

void findChar(string& str , int& n , int& i , char& key , int& count){
// void findChar(string& str , int& n , int& i , char& key , vector<int>&ans){

    // base case
    if(i>=n){
        return ; ///////////////////////////////// void  
    }

// 1 case solve kara
    if(str[i] == key){

        // cout<<"ch found at index : "<<i<<endl;

        // ans.push_back(i);

        count++;


        
    }

// baaki recursion will handle 
    return findChar(str , n , ++i , key , count); // chaiye return lagao ya na lagao same baat hai 

}

int main()
{
    string str = "lovebabbar";
    // string str = "rhythmmunjal";

    // cout<<str[4]; // prints 'h' 

    char key = 'b';


    // vector<int>ans;

    int count = 0;


    int n = str.length();
    int i = 0;

    // findChar(str , n , i , key , ans);

    findChar(str , n , i , key , count);

    cout<<count;


    // for (auto value : ans )
    // {
    //     cout<<value<<" ";
    // }

    // cout<<endl; 
    
    





    return 0;

}