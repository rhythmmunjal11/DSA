#include<bits/stdc++.h>
using namespace std;

void merge(int* arr , int s , int e){

    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e-mid;

    int* left = new int[len1];
    int* right = new int[len2];

    int k = s;

    for(int i = 0 ; i < len1 ; i++){
        left[i] = arr[k];
        k++;
    }

    // k = mid + 1;

    for(int i = 0 ; i < len2 ; i++){
        right[i] = arr[k];
        k++;
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while (leftIndex < len1 && rightIndex < len2)
    {
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex++] = left[leftIndex++];
        }

        else{
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }


    while (leftIndex < len1)
    {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    while (rightIndex < len2)
    {
        arr[mainArrayIndex++] = right[rightIndex++];
    }
    
    

}


void mergeSort(int* arr , int s , int e){

    // base case
    if(s>=e){
        return;
    }

    int mid = s + (e-s)/2;

    //left part
    mergeSort(arr , s , mid);

    // right part
    mergeSort(arr , mid + 1 , e );


    // merge
    merge(arr , s , e );


}



int main()
{
    // int arr[15];

    // for(int i = 0 ; i < 5 ; i++){
    //     cin>>arr[i];
    // }

    // cout<<sizeof(arr)/sizeof(arr[0]);


    // vector<int>arr;


    // for(int i = 0 ; i < 5 ; i++){
    //     cin>>arr[i];
    // }

    // cout<<arr.size();


    int arr[6] = {5,2,3,1,9,4};
    // int arr[6] = {30,2,4,5,16,4};

    int s = 0;
    int e = 5;

    mergeSort(arr ,s , e);


    for(int i = 0 ; i <= e ; i++){
        cout<<arr[i]<<" ";
    }


    return 0;

}