// https://leetcode.com/problems/intersection-of-two-arrays-ii/?envType=study-plan&id=data-structure-i

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int, int> m;
        
        for(int i=0; i<nums1.size(); i++){
            m[nums1[i]]++;
        }
        
        for(int i=0; i<nums2.size(); i++){
            auto it = m.find(nums2[i]);
            if(it != m.end() and it->second>0){
                ans.push_back(nums2[i]);
                it->second--;
            }
        }
        return ans;
    }
};