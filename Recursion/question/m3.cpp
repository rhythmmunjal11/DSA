#include<bits/stdc++.h>
using namespace std;

void findMax(int arr[] , int n , int i , int& maxi){ // ********** here value of maxi is pass by reference so that's why the final value of maxi will be effected in main() fucntion ke maxi pr

    cout<<i<<endl;

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

    // int newi = ++i;  same as i=i+1
    // int newi = i++;      // infinte times  0 printing as the value of i is overwritign to 0 
    // int newi = i+1;

    // baaki recursion will handle 
    findMax(arr , n , ++i , maxi); //correct
    // findMax(arr , n , newi , maxi);

    cout<<i<<endl;

    

    
    
    

}


int main()
{
    int arr[5] = {10,40,60,30,20};

    int maxi = INT_MIN;
    
   
    int n = 5;
    int i = 0;

    cout<<"value of i in main() "<<i<<endl;

    findMax(arr , n , i , maxi);
    
    cout<<"value of i in main() after findMax function  "<<i<<endl;


    cout<<"maximum value of maxi is : "<<maxi<<endl;
    

    return 0;

}



