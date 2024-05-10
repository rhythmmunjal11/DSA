#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string str = "rhythm munjal";


    // cout<<str<<endl;

    // cout<<str.size()<<endl; // same as str.length()

    // cout<<str.length()<<endl;




   // strrchr finds the last occurence of a given character 


    char str[] = "This is a sample string";
    // string str = "this is a sample string";  // not work for this 
  char * pch;
  pch=strrchr(str,'s'); // last occurence 

  char* pch1;
  pch1 = strchr(str , 's'); // first occurence

  cout<< "Last occurence of 's' found at: "<<pch-str+1<<endl;;
  cout<< "first occurence of 's' found at: "<<pch1-str+1<<endl;;
  


    return 0;

}