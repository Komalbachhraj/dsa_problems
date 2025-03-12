Q1.
  sol:
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                row[j] = result[i - 1][j - 1] + result[i - 1][j];
            }
            result.push_back(row);
        }
        return result;
    }
};
Q2.
  sol:
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
           int j=i+1;
           while(j<matrix[0].size())
           {
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
            j++;
           }
        }
        for(int i=0;i<matrix.size();i++)
        {
            int j=0;
            int k=matrix[0].size()-1;
            while(j<k)
            {
                int temp=matrix[i][k];
                matrix[i][k]=matrix[i][j];
                matrix[i][j]=temp;
                k--;
                j++;
            }
        }
    }
};
APPROAch: first take transpose and thr reverse each column
Q3.
  sol:
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
            // Traverse top row
            for (int j = left; j <= right; j++) {
                result.push_back(matrix[top][j]);
            }
            top++;

            // Traverse right column
            for (int i = top; i <= bottom; i++) {
                result.push_back(matrix[i][right]);
            }
            right--;

            // Traverse bottom row (if valid)
            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    result.push_back(matrix[bottom][j]);
                }
                bottom--;
            }

            // Traverse left column (if valid)
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return result;
    }
};
