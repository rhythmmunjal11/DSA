#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;

int main()
{
    // unordered_map<int,int>hash;

   vector<int>arr{1,2,4,3,5,6,3};

   vector<int>hash1(7);

   for (int i = 0; i < arr.size(); i++)
   {
       hash1[arr[i]]++;
   }

   for (int i = 0; i < arr.size(); i++)
   {
        if(hash1[arr[i]] > 1){
            cout<<i+1;
            break;
        }
   }
   
   
 
    return 0;

}