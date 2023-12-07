// Codestudio  Print Like A Wave
// https://www.codingninjas.com/studio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6&leftPanelTabValue=PROBLEM

// #include <bits/stdc++.h>
// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     vector<int>ans;

//     for(int col=0; col<mCols; col++){
//         if(col&1){
//             //odd Index -> Bottom to top

//             for(int row=nRows-1; row>=0; row--){
//                 // cout<<arr[row][col]<<" ";
//                 ans.push_back(arr[row][col]);
//             }
//         }
//         else{
//             //0 or even index -> top to bottom
//             for(int row=0; row<nRows; row++){
//                 // cout<< arr[row][col]<<" ";
//                 ans.push_back(arr[row][col]);
//             }
//         }
//     }
//     return ans;
// }