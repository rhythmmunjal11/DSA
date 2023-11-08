// class Solution {
// public:

//     int findMinDifference(vector<string>& timePoints) {

//         vector<int>Minutes;

//         for(int i = 0 ; i < timePoints.size() ; i++){
           
//            string curr = timePoints[i];

//             int hours = stoi(curr.substr(0,2));
//             int min = stoi(curr.substr(3,2));
//             int totalMinutes = hours*60 + min;

//             Minutes.push_back(totalMinutes);
//         }

//         sort(Minutes.begin() , Minutes.end());

//         int mini = INT_MAX;
//         for(int i = 0 ; i < Minutes.size()-1 ; i++){
//             int diff = Minutes[i+1] - Minutes[i];

//             mini = min(mini , diff);
//         }


//         // important *******************
//         int lastDiff1 = (Minutes[0] + 1440 ) - Minutes[Minutes.size()-1];
//         int lastDiff2 = Minutes[Minutes.size()-1] - Minutes[0];
//         int lastDiff = min(lastDiff1 , lastDiff2);
        
//         mini = min(mini , lastDiff);

//         return mini;
//     }

    
// };