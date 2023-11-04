#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>cooksRanks , int nP , int mid){

    int currPar = 0; // initial cooked prata count

    for(int i = 0 ; i < cooksRanks.size() ; i++){
        int R = cooksRanks[i] , j = 1;
        int timeTaken = 0;

        while (true)
        {
            if(timeTaken + R*j <= mid){
                currPar++;
                timeTaken+= R*j;
                j++;
            }

            else{
                break;
            }
        }

        if(currPar >= nP){
            return true;
        }
        


    }

    return false;



}


int minTimeToCompleteOrder(vector<int>cooksRanks , int nP){

    int s = 0;
    int maxEle = *max_element(cooksRanks.begin() , cooksRanks.end());

    int e = maxEle * (nP * (nP + 1)/2);

    int ans = -1;

    while (s<=e)
    {
        int mid = s + (e-s)/2;

        if(isPossible(cooksRanks , nP , mid)){
            ans = mid;
            e = mid - 1;
        }

        else{
            s = mid +  1;
        }


    }

    return ans;
    


}


int main()
{
    
    int t; cin>>t;

    while (t--)
    {
        int nP , nC;
        cin>>nP>>nC;

        vector<int>cooksRanks;

        while (nC--)
        {
            int R ; cin >> R;
            cooksRanks.push_back(R);
        }


        cout<<minTimeToCompleteOrder(cooksRanks , nP);
        



    }
    
    



    return 0;

}