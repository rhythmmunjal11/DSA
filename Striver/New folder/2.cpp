#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>arr{1,8,2,3,6};

    int key = 6;

    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;


    while (start<=end)
    {
        int element = arr[mid];

        if(element == key){
            cout<<mid<<endl;
            break;
        }

        else if(element > key){
            end = mid - 1;
        }

        else{
            start = mid + 1;
        }


        mid = start + (end - start)/2;



    }
    





    return 0;

}