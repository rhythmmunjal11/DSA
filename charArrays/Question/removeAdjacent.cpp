// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // string str = "abbaca";
//     // string str = "azxxzy";

//     string str = "aaaaaaaa";

//     for (int i = 0; i < str.length()-1; )
//     {   
//         if(str.length() == 0){
//             cout<<"braek";
//             break;
//         }
//         cout<<i<<endl;
//         if (str[i] == str[i+1])
//         {
//             cout<<"before str is : "<<str<<endl;
//             cout<<"before strlen "<<str.length()<<endl;
//             str.erase(i , 2);
//             cout<<"after erasing str is : "<<str<<endl;
//             cout<<"after strlen "<<str.length()<<endl;
//             i=0;
//         }

//         else { 
//             i++;
//         }
        
//     }

//     cout<<str;
    

//     return 0;

// }



class Solution {
public:
    string removeDuplicates(string s) {
        
        string ans = "";
        int i = 0;

        while(i < s.length()){


            if(ans.length() > 0){

                if(ans[ans.length() - 1] == s[i]){
                    ans.pop_back();
                }

                else{
                    ans.push_back(s[i]);
                }
            }

            

            else{
                ans.push_back(s[i]);
            }

            i++;
            
        }

             return ans;
        }
};