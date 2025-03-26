Q1.
  sol:
// class Solution {
// public:
//     bool check(string ans)
//     {
//         int i=0;
//         int j=ans.size()-1;
//         while(i<=j)
//         {
//             if(ans[i]!=ans[j]) return false;
//             i++;
//             j--;
//         }
//         return true;
//     }
//     string shortestPalindrome(string s) {
//         if(s.size()<=1 ) return s;
//         int i=s.size()-1;
//         int j=s.size();
//         string ans=s.substr(i,j-i);
//         if(check(s)) return s;
//         while(i>0 && check(ans+s)==false)
//         {
//             ans=s.substr(i,j-i);
//             reverse(ans.begin(),ans.end());
//             i--;
//         }
//         return ans+s;
//     }
// };
class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size();    
        int i = 0;
        int j = n - 1; 
        while (j >= 0) {
            if (s[i] == s[j]) {
                i++;
            }
            j--;
        }
        string remain = s.substr(i); 
        if( remain.size()==0 ) return s; 
        string rev_remain = remain;
        reverse(rev_remain.begin(), rev_remain.end());
        return rev_remain + shortestPalindrome(s.substr(0, i)) + remain;
    }
};
Q2.
  sol:
class Solution {
public:
    
    bool check(string &a, string &b)
    {
        int m=a.size();
        int n=b.size(); 
        for(int i=0;i<=m-n;i++)
        {
            int j;
            for(j=0;j<n;j++){
                if(a[i+j]!=b[j])
                    break;
            }
            if(j==n)
                return true;
        }
        return false;
    }
    
    int repeatedStringMatch(string a, string b) 
    {
        int m=a.size();
        int n=b.size();
        
        int ans=1;
        string tmp=a;
        while(a.size() < b.size()){
            a += tmp;
            ans++;
        }
        
        if(check(a,b)){
            return ans;
        }
        a += tmp;
        if(check(a,b)){
            return ans+1;
        }
        return -1;
    }
};
