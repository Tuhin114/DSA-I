// CodeStudio -- Search In Rotated Sorted Array
// https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM

// Approach 1
//  int getPivot(vector<int>& arr, int n)
//  {
//      int s = 0;
//      int e = n - 1;
//      int mid = s + (e - s) / 2;

//     while (s < e)
//     {
//         if (arr[mid] >= arr[0])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return s;
// }

// int binarySearch(vector<int>& arr, int s,int e, int key)
// {
//     int start = s;
//     int end = e;
//     int mid = start + (end - start) / 2;

//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }

//         // Go to right part
//         if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         // Go to left prt
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return -1;
// }
// int search(vector<int>& arr, int n, int k)
// {//BS on 2nd Line
//    int pivot = getPivot(arr,n);
//    if( k>=arr[pivot] && k <= arr[n-1])
//    {
//        return binarySearch(arr, pivot, n-1, k);
//    }
//    else
//    {  //BS on 1st Line
//        return binarySearch(arr, 0, pivot-1, k);
//    }
// }

// Approach 2
