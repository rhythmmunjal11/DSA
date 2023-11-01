
// class Solution 
// {
//     public:
    
    
//     int isPossible(int A[] , int mid , int n , int M){
//         int cnt = 1;
//         int sum = 0;
        
//         for(int i = 0 ; i < n; i++){
//             if(A[i] > mid){
//                 return false;
//             }
            
//             if(sum + A[i] > mid){
//                 cnt++;
//                 sum = A[i];
                
//                 if(cnt > M){
//                     return false;
//                 }
//             }
            
//             else{
//                 sum+=A[i];
//             }
            
//         }
        
//         return true;
//     }
    
    
//     //Function to find minimum number of pages.
//     int findPages(int A[], int N, int M) 
//     {
//         //code here
//         if(M > N){
//             return -1;
//         }
        
//         int start = 0;
//         int end = accumulate(A , A+N , 0);
        
//         int ans = -1;
        
//         while(start <= end){
            
//             int mid = (start + end)>>1;
            
//             if(isPossible(A , mid , N ,M )){
//                 ans = mid;
//                 end = mid - 1;
//             }
            
//             else {
//                 start = mid + 1;
//             }
//         }
        
//         return ans;
//     }
// };