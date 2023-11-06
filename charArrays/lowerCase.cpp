#include<bits/stdc++.h>
using namespace std;

void convertToLower(char arr[]){
    int n = strlen(arr);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 'A'  && arr[i] <= 'Z' )
        {
            arr[i] = arr[i] - 'A' + 'a';
        }
        
    }
    
}

int main()
{
    char arr[40];
    cin.getline(arr , 60);

    convertToLower(arr);

    cout<<arr;
    

    return 0;

}