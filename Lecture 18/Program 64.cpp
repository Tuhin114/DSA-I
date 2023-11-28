// CodeStudio Insertion Sort
// https://www.codingninjas.com/studio/problems/insertion-sort_3155179?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM

// #include <bits/stdc++.h>
// void insertionSort(int n, vector<int> &arr)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;
//         for (; j >= 0; j--)
//         {
//             if (arr[j] > temp)
//             {
//                 // Shift
//                 arr[j + 1] = arr[j];
//             }
//             else
//             {
//                 // Stop
//                 break;
//             }
//         }
//         arr[j + 1] = temp;
//     }
// }