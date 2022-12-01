// https://leetcode.com/problems/ransom-note/?envType=study-plan&id=data-structure-i

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size() > magazine.size())
            return false;
        
        unordered_map<char, int> mag;
        for(int i=0; i<magazine.size(); i++){
            mag[magazine[i]]++;
        }
        
        for(int j=0; j<ransomNote.size(); j++){
            if(mag.find(ransomNote[j]) != mag.end() and mag[ransomNote[j]]>0){
                mag[ransomNote[j]]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};