// LeetCode - 88. Merge Sorted Array

// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.Merge nums1 and nums2 into a single array sorted in non - decreasing order.The final sorted array should not be returned by the function,but instead be stored inside the array nums1.To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored.nums2 has a length of n.

// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {

//     int i = 0, j = 0;
//     int k = 0;
//     while( i<n && j<m) {
//         if(arr1[i] < arr2[j]){
//             arr3[k++] = arr1[i++];
//         }
//         else{
//             arr3[k++] = arr2[j++];
//         }
//     }

//     //copy first array k element ko
//     while(i<n) {
//         arr3[k++] = arr1[i++];
//     }

//     //copy kardo second array k remaining element ko
//     while(j<m) {
//         arr2[k++] = arr2[j++];
//     }
// }

// void print(int ans[], int n) {
//     for(int i=0; i<n; i++) {
//         cout<< ans[i] <<" ";
//     }
//     cout << endl;
// }

// int main() {

//     int arr1[5] = {1,3,5,7,9};
//     int arr2[3] = {2,4,6};

//     int arr3[8] = {0};

//     merge(arr1, 5, arr2, 3, arr3);

//     print(arr3, 8);

//     return 0;
// }

// Time Limit exceeds
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = m - 1;
//         int j = n - 1;
//         int k = m + n - 1;

//         // Merge nums1 and nums2 from the end
//         while (i >= 0 && j >= 0) {
//             if (nums1[i] > nums2[j]) {
//                 nums1[k--] = nums1[i--];
//             } else {
//                 nums1[k--] = nums2[j--];
//             }
//         }

//         // If there are remaining elements in nums2, copy them into nums1
//         while (j >= 0) {
//             nums1[k--] = nums2[j--];
//         }
//     }
// };
