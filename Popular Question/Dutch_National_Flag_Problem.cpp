/*

Problem Link -- > https://binarysearch.io/problems/List-Partitioning

Given a list of strings strs, containing the strings "red", "green" and "blue", 
partition the list so that the red come before green, which come before blue.

Input   ["green", "blue", "red", "red"]
Output  ["red", "red", "green", "blue"]

Excepted Time Complexity  -- > O(n)
Excepted Space Complexity -- > O(1)
*/

// My First Soluton 

class Solution
{
public:
    vector<string> solve(vector<string> &strs)
    {
        int n = strs.size();
        int l = 0;
        vector<string> pr = {"red", "green", "blue"};
        for (auto &i : pr)
        {
            int j = l;
            while (j < n)
            {
                if (strs[j] == i)
                {
                    swap(strs[j], strs[l]);
                    l++;
                }
                j++;
            }
        }
        return strs;
    }
};


// A little Better Approach

class Solution
{
public:
    vector<string> solve(vector<string> &strs)
    {
        int r = 0 , g = 0 , b = strs.size() - 1;

        
        return strs;
    }
};
