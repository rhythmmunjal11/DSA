#include<bits/stdc++.h>
using namespace std;

int main()
{
    string sentence = "hello kaise ho";
    string target = "kaise";

    target = "everyone";


    cout<<sentence.find(target)<<endl;
    cout<<std::string::npos<<endl;

    if (sentence.find(target) == std::string::npos)
    {
        cout<<"not found ";
    }
    
    

    return 0;

}