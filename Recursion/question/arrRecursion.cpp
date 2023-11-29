#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[] , int n , int i){ // use this int& i to see differecnde
    if (i>=n)
    {
        return;
    }

    // cout<<arr[i]<<" ";

    //****************
    // printArr(arr , n , i++); // infinite time 3 will print as it is post-increment



    // printArr(arr , n , ++i); // correct ********* importatnt 


    // int num1 = i+1;

    // printArr(arr , n , num1); // correct 
    printArr(arr , n , i+1); // correct 

    cout<<i<<" index -> value is : "; // *******important

    cout<<arr[i]<<endl; //// *8888 important dry run this all important 
    
}

void printAnotherWay(int arr[] , int n){

    if(n==0){
        return;
    }


    cout<<arr[0]<<" ";

    printAnotherWay(arr+1 , n-1);


}

int main()
{
    
    // traverse a array using recursion 

    int arr[5] = {3,4,5,6,7};

    int n = 5;
    int i = 0;

    printArr(arr , n , i);

    // printAnotherWay(arr , n);
    

    return 0;

}