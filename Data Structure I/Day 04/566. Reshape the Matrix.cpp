// https://leetcode.com/problems/reshape-the-matrix/?envType=study-plan&id=data-structure-i

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans(r, vector<int>(c));
        int row=0;
        int col=0;
        
        if(mat.size()*mat[0].size() != r*c){
            return mat;
        }
        
        for(int i=0;i<mat.size();i++){
            for(int j=0; j<mat[0].size(); j++){
                ans[row][col] = mat[i][j];
                col++;
                if(col == c){
                    row++;
                    col=0;
                }
            }
        }
        return ans;
    }
};