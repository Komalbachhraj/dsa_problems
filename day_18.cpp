Q1.
  sol:
class Solution {
public:
    bool isAnagram(string s, string t) {
      sort(s.begin(),s.end());
      sort(t.begin(),t.end());
      return (s==t);  
    }
};
Q2.
  sol:
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
      string s1=str[0];
      int ans_length=s1.size();
      for(int i=1;i<str.size();i++)
      {
        int j=0;
        while(j<s1.size() && j<str[i].size() && s1[j]==str[i][j])
        {
          j++;
        }
        if(j<ans_length)
        {
           ans_length=j;
        }
      }
      string ans=s1.substr(0,ans_length);
       return ans;
    }
};
approach 2:
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
    sort(str.begin(),str.end());
    int i=0;
    string ans;
    while(i<str[0].size() && i<str[str.size()-1].size())
    {
        if(str[0][i]==str[str.size()-1][i]) ans.push_back(str[0][i]);
        else return ans;
        i++;
    }
    return ans;
    }
};
