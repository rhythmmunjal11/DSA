#include<bits/stdc++.h>
using namespace std;

void func(int* arr){
    arr = arr+1;
    arr[3] = 100;
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    cout<<"arr[3] "<<arr[3]<<endl;

    cout<<"before "<<endl;

    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    func(arr);

    cout<<"arr[3] "<<arr[3]<<endl;
    cout<<"arr[3] "<<arr[4]<<endl;

    cout<<"after function call  "<<endl;

    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}