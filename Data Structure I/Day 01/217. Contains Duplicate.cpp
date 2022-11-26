// https://leetcode.com/problems/contains-duplicate/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto& a:nums){
            m[a]++;
        }
        
        for(auto x:m){
            if(x.second>=2){
                return true;
            }
        }
        return false;
    }
};