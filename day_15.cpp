Q1.// search a 2d mtarix
  sol:
  
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int max_row=matrix.size()-1;
        int min_col=0;
        int max_col=matrix[0].size()-1;
        int j=max_col;
        while(i<=max_row && j>=0)
        {
            int a=matrix[i][j];
            if(a==target)
            {
                return true;
            }
            if(a>target)
            {
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};
Q2.
  sol:
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int j=matrix[0].size()-1;
        int i=0;
        while(i<matrix.size() && j>=0)
        {
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]>target) j--;
            else i++;
        }
        return false;
    }
};
