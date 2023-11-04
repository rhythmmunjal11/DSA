#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<long long int> trees , long long int m , long long int mid){

    long long int woodCount = 0;

    for(int i = 0 ; i < trees.size() ; i++){
        if(trees[i] > mid){
            woodCount+= trees[i] - mid;
        }
    }

    return woodCount >= m;

}


long long int maxSawBladeHeight(vector<long long int> trees , long long int m){


    int s = 0;
    int e = *max_element(trees.begin() , trees.end());
    long long int ans = -1;

    while (s<=e)
    {
        long long int mid = s + (e-s)/2;
        

        if(isPossible(trees , m , mid)){
            s = mid + 1;
            ans = mid;
        }

        else{
            e = mid - 1;
        }
    }

    return ans;
    

}

int main()
{
    long long int n , m;
    cin >> n >> m;

    vector<long long int>trees;

    for(int i = 0 ; i < n ; i++){
        long long int height;
        cin>>height;

        trees.push_back(height);
    }

    cout<<maxSawBladeHeight(trees , m);

    return 0;

}