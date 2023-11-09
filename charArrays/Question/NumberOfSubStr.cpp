#include<bits/stdc++.h>
using namespace std;

int main()
{
    // char arr[] = "abc";
    // char arr[] = {'a','b','c','\0','d'};
    // char arr[] = {'a','b','c','d','\0'};

    // char arr[5] = {'a','b','c','d'};   

    // int n = strlen(arr);
    // cout<<n<<endl;

    // cout<<arr;

    // int n1 = sizeof(arr);
    // cout<<n1<<endl;




    // char str[6];


    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>str[i];
    // }
    
    // cout<<strlen(str)<<endl;
    // cout<<str<<endl;
    // cout<<sizeof(str)<<endl;



    string str = "abc";
    string str ;
    cin>>str;

    int n = str.length();
    // cout<<n<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout<<str.substr(i,j+1-i)<<endl;
            // after that we will check whether this particular sub-string is palindrome or not , so for calculating whether this substring is palindrome or not the time complexity would be O(n) , and total time complexity of our code will be O(n^3);
        }

        
        
    }
    




    // so . this solution has O(n^2) time complexity 

    
//     class Solution {
// public:

//     int expandAroundIndex(string s , int left , int right){

//         int count = 0;

//         while(left >= 0 && right < s.length() && s[left] == s[right]){

//             count++;

//             left--;
//             right++;

//         }

//         return count;
//     }


//     int countSubstrings(string s) {
//         int count = 0;
//         int n = s.length();

//         for(int center = 0 ; center < n; center++ ){
//             // odd substring ka palidrome count
//             int oddKaCount = expandAroundIndex(s , center , center);
//             count+=oddKaCount;

//             // even substring ka palidrome count
//             int evenKaCount = expandAroundIndex(s , center , center+1);
//             count+=evenKaCount;
//         }

//         return count;
//     }
// };
    



    return 0;

}