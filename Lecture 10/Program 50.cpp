// CodeStudio Sort 0 1 2
// https://www.codingninjas.com/studio/problems/sort-0-1-2_631055?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1&leftPanelTabValue=PROBLEM

// #include <bits/stdc++.h>
// void sort012(int *arr, int n)
// {
//     {

//         int s = 0;
//         int mid = 0;
//         int e = n - 1;

//         while (mid <= e)
//         {

//             if (arr[mid] == 0)
//             {

//                 swap(arr[s], arr[mid]);
//                 s++;
//                 mid++;
//             }

//             else if (arr[mid] == 1)
//             {
//                 mid++;
//             }

//             else
//             {
//                 swap(arr[mid], arr[e]);
//                 e--;
//             }
//         }
//     }