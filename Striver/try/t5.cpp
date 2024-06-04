#include<bits/stdc++.h>
using namespace std;

int main()
{
    // char c = 'd'-'a';
    // cout<<c<<endl;

    // cout<<'e'-'b';

    // int arr[10] = {0};

    string s;
    cin>>s;

    // int hash[26] = {0};
    // for(int i = 0 ; i < s.size() ; i++){
    //     hash[s[i] - 'a']++;
    // }

    // for(int i = 0 ; i < s.size() ; i++){
    //     cout<<hash[i]<<" ";
    // }


    int hash[256]={0};
    for(int i = 0 ; i < s.size() ; i++){
        hash[s[i]]++; // hash array takes integer so if i put value inside it that is integer or even char then it will automatically converts itself to integer
    }
    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;

        cout<<hash[ch]<<endl;
    }

    

    return 0;

}