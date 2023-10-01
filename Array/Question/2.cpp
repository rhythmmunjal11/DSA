#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// union of duplicates   ******************** /////

int main()
{
    
    vector<int>arr{1,2,4,6,8,10};
    vector<int>brr{3,4,5,6};
    vector<int>ans;

    cout<<sizeof(ans)<<endl;;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        

        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                brr[j] = INT_MIN;
            }   
            
        }
        
    }


    for (int  i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }

    // for (int i = 0; i < brr.size(); i++)
    // {
    //     cout<<brr[i]<<" ";
    // }
    
    
    for (int j = 0; j < brr.size(); j++)
    {
        if (brr[j] != INT_MIN)
        {
            ans.push_back(brr[j]);
        }
        
    }

    cout<<sizeof(ans)<<endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

    
    
    


 
    return 0;

}