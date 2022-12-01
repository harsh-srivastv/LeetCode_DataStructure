// https://leetcode.com/problems/valid-anagram/?envType=study-plan&id=data-structure-i

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        
        unordered_map<char, int>tm;
        for(int i=0; i<t.size(); i++){
            tm[t[i]]++;
        }
        
        for(int j=0; j<s.size(); j++){
            if(tm.find(s[j]) != tm.end() and tm[s[j]]>0){
                tm[s[j]]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};