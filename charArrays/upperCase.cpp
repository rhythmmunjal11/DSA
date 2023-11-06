#include<bits/stdc++.h>
using namespace std;

void convertToUpper(char arr[]){
    int n = strlen(arr);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 'a'  && arr[i] <= 'z' && arr[i] != ' ')
        {
            arr[i] = arr[i] - 'a' + 'A';
        }
        
    }
    
}

int main()
{
    char arr[40];
    cin.getline(arr , 60);

    convertToUpper(arr);

    cout<<arr;
    

    return 0;

}