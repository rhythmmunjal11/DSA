#include<bits/stdc++.h>
using namespace std;


void permutation(string str , int i){

    // base case
    if(i >= str.length()){
        cout<<str<<" ";
        return;
    }


    for(int j = i ; j < str.length(); j++){

        swap(str[i] , str[j]);
        permutation(str , i+1);


    }


}

int main()
{
    string str = "abc";
    int i = 0;

    permutation(str , i);

    return 0;

}