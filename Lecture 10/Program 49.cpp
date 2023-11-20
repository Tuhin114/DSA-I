// CodeStudio-Pair Sum
// https://www.codingninjas.com/studio/problems/pair-sum_697295?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1&count=25&page=1&search=&sort_entity=order&sort_order=ASC&attempt_status=COMPLETED&leftPanelTabValue=PROBLEM

// #include <bits/stdc++.h>

// vector<vector<int>> pairSum(vector<int> &arr, int s){
//    vector<vector<int>>ans;
//    int j = 0;
//    for(int i = 0;i<arr.size();i++){
//       for(int j = i + 1; j < arr.size(); j++){
//       if(arr[i] + arr[j] == s){
//          vector<int>temp;
//          temp.push_back(min(arr[i],arr[j]));
//          temp.push_back(max(arr[i],arr[j]));
//          ans.push_back(temp);
//       }
//    }
//    }
//    sort(ans.begin(),ans.end());
//    return ans;
// }