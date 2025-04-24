Q1.
  sol:
// class Solution {
// public:
//     bool exist(vector<vector<char>>& board, string word) {
//        vector<int> v(26,0);
//         int n=board.size();
//         int m=board[0].size();
//         for(int i=0;i<board.size();i++)
//         {
//             for(int j=0;j<board[i].size();j++)
//             {
//                 int a=(int) board[i][j];
//                 if(a>=65 && a<=90)
//                 v[board[i][j]-'A']++;
//                 if(a>=97 && a<=122)
//                 v[board[i][j]-'a']++;
//             }
//         }
//         int j=0;
//         while(j<word.size())
//         {
//             int a=(int) word[j];
//             if(a>=65 && a<=90){
//                 if(v[word[j]-'A']<=0) return false;
//                 v[word[j]-'A']--;
//             }
//             if(a>=97 && a<=122){
//                 if(v[word[j]-'a']<=0) return false;
//                 v[word[j]-'a']--;
//             } 
//             j++;
//         }
//         return true;
//     }
// };
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();

        function<bool(int, int, int)> dfs = [&](int r, int c, int index) -> bool {
            if (index == word.size()) return true;
            if (r < 0 || r >= rows || c < 0 || c >= cols || board[r][c] != word[index]) return false;

            char temp = board[r][c];
            board[r][c] = '*'; // Mark as visited

            bool found = dfs(r + 1, c, index + 1) ||
                         dfs(r - 1, c, index + 1) ||
                         dfs(r, c + 1, index + 1) ||
                         dfs(r, c - 1, index + 1);

            board[r][c] = temp; // Restore the cell
            return found;
        };

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (dfs(r, c, 0)) return true;
            }
        }
        return false;
    }
};
Q2.
  sol:
class Solution {
public:
    bool isPalindrome(string str)
    {
        int i=0;
        int j=str.size()-1;
        while(i<j)
        {
            if(str[i]!=str[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    void generate(vector<vector<string>>& ans,vector<string>&temp,string s,int idx){
        if(idx==s.size()) ans.push_back(temp);
        string curr="";
        for(int i=idx;i<s.size();i++)
        { 
            curr.push_back(s[i]);
            if(isPalindrome(curr))
            {
                temp.push_back(curr);
                generate(ans,temp,s,i+1);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string>temp;
        generate(ans,temp,s,0);
        return ans;
    }
};
