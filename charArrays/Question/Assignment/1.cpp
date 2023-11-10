#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "anagram";
    string t = "nagaramv";

    sort(s.begin() , s.end());
    sort(t.begin() , t.end());

    // cout<<t.compare(s)<<endl;
    // cout<<!(s.compare(t))<<endl;

    // if (!(s.compare(t)))
    // {
    //     cout<<"equal";
    // }
    
    cout<<(s==t);

    return 0;

}