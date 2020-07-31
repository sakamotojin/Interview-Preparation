/*

https://binarysearch.io/problems/List-Partitioning

Given a list of strings strs, containing the strings "red", "green" and "blue",
partition the list so that the red come before green, which come before blue.

Input  ["green", "blue", "red", "red"]
Output ["red", "red", "green", "blue"]

Excepeted Time Complexity    -->  O(n)
Excepeted Space Complexity   -->  O(1)

*/

class Solution {
  public:
  vector<string> solve(vector<string>& strs) {
    int n = strs.size();
    int l = 0 ;
    vector<string> pr = {"red" , "green" , "blue"} ;
    for(auto &i : pr){
      int j = l ;
      while(j < n){
        if(strs[j]==i){
          swap(strs[j], strs[l]);
          l++;
        }
        j++;
      }
    }
    return strs ;
  }
};
