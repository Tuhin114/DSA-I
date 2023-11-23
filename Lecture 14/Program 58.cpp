// CodeStudio - Binary Search
// www.codingninjas.com/studio/problems/binary-search_972?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM
// int binarySearch(vector<int> &arr, int s, int e, int k)
// {

//     if (s > e)
//     {
//         return -1;
//     }

//     int mid = s + (e - s) / 2;

//     if (arr[mid] == k)
//     {
//         return mid;
//     }

//     if (arr[mid] < k)
//     {
//         return binarySearch(arr, mid + 1, e, k);
//     }

//     else
//     {
//         return binarySearch(arr, s, mid - 1, k);
//     }
// }

// int search(vector<int> &nums, int target)
// {
//     int n = nums.size();
//     binarySearch(nums, 0, n - 1, target);
// }