#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[] = {1,2,3,4};
    // cout<<"before "<<arr<<endl;
    // int* ptr = arr+1; (here no problem as value of arr same hi rahegi , we just store that arr+1 address into ptr , no impact on actual base address of arr)

    //int* ptr = arr++;  // (gives error as we can't chage the value of arr(constant pointer ))

    // cout<<arr<<endl;
    // cout<<ptr<<endl; 



    char c[] = "rhythm";
    // char* ch = &c;  //error
    char* ch = &c[0];
    cout<<ch[1]<<endl;
    cout<<ch[5]<<endl;
    cout<<ch[6]<<endl;
    cout<<ch[7]<<endl;

    

    return 0;

}