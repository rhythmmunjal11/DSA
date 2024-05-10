#include<bits/stdc++.h>
using namespace std;

void lastOcc(string& str , int i , int& ans , char& ch){

    //base case
    if(i >= str.size()){
        return ;
    }

    // 1 case solve 
    if(str[i] == ch){

        ans = i;

    }


    // baaki recursion will handle
    lastOcc(str , i+1 , ans , ch);

}



// last Occurence(rtl)

void lastOccRTL(string& str , int i , int& ans1 , char& ch){

    // base case
    if (i<0)
    {
        return;
    }

    // 1 case solve
    if(str[i] == ch){
        ans1 = i;
        return ;
        

    }

    // baaki recursion will handle
    lastOccRTL(str , i-1 , ans1 , ch);
    


}



int main()
{
    string str ;
    cin>>str;

    // char str[] = "this is string ";

    char ch;
    cin>>ch;

    int ans = -1;
    int i = 0;


    // lastOcc from left to right
    lastOcc(str , i , ans , ch);

    cout<<"LTR INDEX "<<ans<<endl;


    cout<<endl;



    // last occurence from (right to left) ********* 
    int ans1 = -1;

    lastOccRTL(str , str.length() - 1 , ans1 , ch);

    cout<<"RTL INDEX "<<ans1<<endl;

    return 0;

}