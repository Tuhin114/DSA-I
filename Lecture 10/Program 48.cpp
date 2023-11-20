// CodeStudio-Intersection Of Two Sorted Arrays
// https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM

// #include <bits/stdc++.h>
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	vector<int>ans;

// 	for(int i = 0; i<n;i++){
// 		int element = arr1[i];

// 		for(int j=0;j<m;j++){
// 			if(element == arr2[j]){
// 				ans.push_back(element);
// 				arr2[j] = -2;
// 				break;
// 			}
// 		}
// 	}
// 	return ans;
// }

// More Optimized solution
#include <bits/stdc++.h>
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	int i = 0, j=0;
// 	vector<int>ans;

// 	while(i<n && j<m){

// 		if(arr1[i] == arr2[j]){
// 			ans.push_back(arr1[i]);
// 			i++;
// 			j++;
// 		}
// 		else if(arr1[i]<arr2[j]){
// 			i++;
// 		}
// 		else{
// 			j++;
// 		}
// 	}
// 	return ans;
// }