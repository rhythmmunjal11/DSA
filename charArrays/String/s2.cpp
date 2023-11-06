#include<bits/stdc++.h>
using namespace std;

bool compareStr(string s1 , string s2){

    if (s1.length() != s2.length())
            return false;


    

    // else 
  
        // int j = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] != s2[i])
            {
                return false;
            }
            // j++;
            
        }

        return true;
        
    
    
}

int main()
{
    string s1 = "rhythm";
    string s2 = "Rhythm";

    cout<<compareStr(s1 , s2);

    return 0;

}