#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "daabcbaabcbc";
    string target = "abc";

    // int find = str.find(target);
    // cout<<find<<endl;

    // cout<<str.erase(find , target.length());

    // while (find != -1)
    // {
    //     cout<<"chali "<<endl;
    // }


    while (str.find(target) != string::npos)
    {
        int find = str.find(target);
        str.erase(find , target.length());
    }

    cout<<str<<endl;
    
    

    return 0;

}