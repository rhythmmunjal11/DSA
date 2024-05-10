#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string str = "abcddefdg";

    // char ch = 'd';

    // cout<<ch.length()<<endl; wrong and ch.size()

    // strchr(str , ch); wrong

    // cout<<str.size()<<endl;;

    // cout<<str.length()<<" ";




    char str[] = "this is a s tring";

    char si = 's';

    char* p = strrchr(str , si); 

    cout<<p<<endl;
    cout<<p-str+1<<endl; // length of the s character from last 

    return 0;

}