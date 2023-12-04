// GeeksForGeeks Maximum Occuring Character
// https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

//  Given a string str of lowercase alphabets. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

// class Solution
// {
//     public:
//     //Function to find the maximum occurring character in a string.
//     char getMaxOccuringChar(string str)
//     {
//         int arr[26] = {0};
//         //Create an array of count of characters
//         for(int i=0; i<str.length(); i++){
//             char ch = str[i];
//             //lowercase
//             int number = 0;
//             if(ch >= 'a' && ch<= 'z'){
//                 number = ch-'a';
//             }//Uppercase
//             else{
//                 number = ch-'A';
//             }
//             arr[number]++;
//         }
//         int maxi = -1, ans = 0;
//         for(int i=0; i<26; i++){
//             if(maxi<arr[i]){
//                 ans = i;
//                 maxi = arr[i];
//             }
//         }
//         char finalAns = 'a'+ans;
//         return finalAns;
//     }

// };