#include<bits/stdc++.h>
using namespace std;

void changeArr(int* arr){ // yha int* arr karlo , ya int arr[] same hi h bcz pass  by reference hua h to address store hoga 
    cout<<"address of arr in changeArr Before changing address : "<<arr<<endl;
    arr[1] = 100;
    arr = arr + 1;
    cout<<"after : "<<arr<<endl;
}

int main()
{
    int arr[5] = {1,12,13,14,15};
    cout<<"before "<<arr[1]<<endl;
    cout<<"before address in main : "<<arr<<endl;
    changeArr(arr);
    cout<<"after address of arr in main : "<<arr<<endl;
    cout<<arr[1];

    return 0;

}