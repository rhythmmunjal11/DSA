#include<bits/stdc++.h>
using namespace std;

bool isPalidrome(char arr[]){
    int i = 0;
    int j = strlen(arr)-1;

    while (i<=j)
    {
        if(arr[i] != arr[j]){
            return false;
        }

        else{
            i++;
            j--;
        }
    }

    return true;
    
}

int main()
{
    char arr[20];
    cin>>arr;

    cout<<isPalidrome(arr)<<" ";

    return 0;

}