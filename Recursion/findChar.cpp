#include<bits/stdc++.h>
using namespace std;

int findChar(string& str , int& n , int& i , char& key){

    // ***** important int& i  m hum i+1 nahi kar sakte  , what we can do is ---->>> ++i 

    // but it will also  give error in ---> i++

    // ************ or *********

    // int newi = i+1;
    // then pass it (str , n , newi , ch);



    // base case
    if(i>=n){
        return 0;
    }
    // or  **************************
    
    // if(str[i]=='\0'){
    //     return false;
    // }

    // solve one case 
    if(str[i] == key){
        return 1;
    }

    //int newi = i+1; // do if (int& i )  pass by referecne ho 

    // baaki recursion sambhal lega
    // return findChar(str , n , i+1 , key);
     findChar(str , n , ++i , key); // do if int& i ho 

     // important : chaiye return lagaao ya na lagaao baat same hogi , answer same hi aayega 

}

int main()
{
    string str = "rhythmmunjal";

    // cout<<str[4]; // prints 'h' 

    char key = 't';


    int n = str.length();
    int i = 0;

    cout<<"given char is present(1) or not(0) ->> "<<findChar(str , n , i , key);





    return 0;

}