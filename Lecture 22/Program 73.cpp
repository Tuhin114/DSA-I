// CodeStudio - Check If The String Is A Palindrome
// https://www.codingninjas.com/studio/problems/check-if-the-string-is-a-palindrome_1062633?interviewProblemRedirection=true

// #include <bits/stdc++.h>
// bool checkPalindrome(string ss)
// {
//     string s;
//     for(int i = 0 ;i<ss.size();i++){
//         if(isalpha(ss[i])||isdigit(ss[i]))s+=ss[i];
//     }
//     transform(s.begin(),s.end(),s.begin(),::tolower);
//     string sss = s;
//     reverse(s.begin(),s.end());
//     if(sss == s)return true;
//     else return false;
// }