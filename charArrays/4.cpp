#include<bits/stdc++.h>
using namespace std;

void newString(char arr[]){

    // int n = strlen(arr);

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == ' ')
        {
            arr[i] = '@';
        }
        
    }

    
    
    
}

int main()
{
    char arr[100];
    cin.getline(arr , 50);

    newString(arr);

    cout<<arr;

    return 0;

}