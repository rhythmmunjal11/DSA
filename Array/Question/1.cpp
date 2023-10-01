#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int>arr){
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
    
}

int main()
{
    int n;
    cin>>n;
    "Enter the number ";

    vector<int>arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }

    int uniqueElement = findUnique(arr);


    cout<<"Unique Element is : "<<uniqueElement<<endl;
    
 
    return 0;

}