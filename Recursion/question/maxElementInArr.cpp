#include<bits/stdc++.h>
using namespace std;

void findMax(int arr[] , int n , int& i , int& maxi){ // ********** here value of maxi is pass by reference so that's why the final value of maxi will be effected in main() fucntion ke maxi pr

    // base case
    if (i>=n) 
    {
        return;
    }

// 1 case solve karo
    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }


    // baaki recursion will handle 
    int newi = i+1;
    // i = i + 1;         we can't do that if int& i , we have to store it in another variable
    findMax(arr , n , newi , maxi);
    
    

}



void findMin(int arr[] , int n , int i , int& mini){ // ********** here value of mini is pass by reference so that's why the final value of mini will be effected in main() fucntion ke mini pr

    // base case
    if (i>=n)
    {
        return;
    }

// 1 case solve karo
    if (arr[i] < mini)
    {
        mini = arr[i];
    }

    // or  

    // mini = min(mini , arr[i]);


    // baaki recursion will handle 
    findMin(arr , n , i+1 , mini);
    
    

}




int main()
{
    int arr[5] = {10,40,60,30,20};

    int maxi = INT_MIN;
    int mini = INT_MAX;
    int n = 5;
    int i = 0;

    findMax(arr , n , i , maxi);
    // findMin(arr , n, i , mini);

    cout<<"maximum value of maxi is : "<<maxi<<endl;
    // cout<<"minimum value of mini is : "<<mini<<endl;

    return 0;

}