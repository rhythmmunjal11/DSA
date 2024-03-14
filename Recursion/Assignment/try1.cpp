#include<bits/stdc++.h>
using namespace std;

bool palidromeRE(string& str , int start , int end){

    // base case
    if (start >= end)
    {
        return true;
    }

    // 1 case solve
    if (str[start] != str[end])
    {
        return false;
    }
    


    // RE
    palidromeRE(str , start+1 , end-1); // same as below

    // return palidromeRE(str , start+1 , end-1); *************************** 

   
    


}

int main()
{
    // string str = "racetcar";  // 0  (false)
    string str = "raceecar"; // 1 

    int start = 0;

    int end = str.size()-1;

    cout<<palidromeRE(str , start , end);
   

    return 0;

}