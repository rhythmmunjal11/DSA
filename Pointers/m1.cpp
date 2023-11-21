#include<bits/stdc++.h>
using namespace std;

int main()
{
    // char c = 'r';
    char c[] = "rhythm";

    // char c[] = {'r' , 'h'};
    // char *ch = &c[0];

    char *ch = &c[0];

    cout<<c<<endl;
    cout<<c+3<<endl;
    // cout<<*c<<endl;   
    cout<<"address of c char = "<<&c<<endl;

    // cout<<&c[0]<<endl; // wrong (error)

    // cout<<&c[0]<<endl;
    // cout<<endl;

    // cout<<&c[0]<<endl;
    // cout<<endl;

    // cout<<&c[1]<<endl;
    // cout<<endl;

    // cout<<*c<<endl;
    // cout<<*c+1<<endl;
    // cout<<*(c+1)<<endl;


    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<*ch<<endl;
    cout<<*ch+1<<endl;
    cout<<(ch+1)<<endl; 
    cout<<*(ch+1)<<endl; 

    


    return 0;

}