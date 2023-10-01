// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {

//         vector<int>ans;
//         int row = matrix.size();
//         int col = matrix[0].size();


//         int startRow = 0;
//         int endCol = col-1;
//         int endRow = row-1;
//         int startCol = 0;

//         int count = 0;
//         int total_count = row*col;

//         while(count < total_count){

//             // print startRow
//             for(int i = startCol ; i<=endCol && count < total_count ; i++){
//                 ans.push_back(matrix[startRow][i]);
//                 count++;
//             }
//             startRow++;


//             // print endCol
//             for(int i = startRow ; i<=endRow && count < total_count ; i++){
//                 ans.push_back(matrix[i][endCol]);
//                 count++;
//             }
//             endCol--;


//             // endRow
//             for(int i = endCol ; i>=startCol && count < total_count ; i--){
//                 ans.push_back(matrix[endRow][i]);
//                 count++;
//             }
//             endRow--;


//             // print startCol
//             for(int i = endRow ; i>=startRow && count < total_count ; i--){
//                 ans.push_back(matrix[i][startCol]);
//                 count++;
//             }
//             startCol++;


//         }

//         return ans;




//     }
// };