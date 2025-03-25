Q1.
  sol:
class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt1=0;
        int cnt = 0;
        int n = s.length();
        for(auto& it:s){
            if(it=='(') cnt1++;
            else if(cnt1>0 && it==')') cnt1--;
            else{
                cnt++;
            }
        }
        return (cnt+cnt1);
    }
};
Approach 2:
class Solution {
public:
    int minAddToMakeValid(string s) {
        // int count=0;
        // for(int i=0;i<s.size();i++)
        // {
        //     if(s[i]=='(') count++;
        //     else count--;
        // }
        // return abs(count);
        // stack<char> st;
        // for(int i=0;i<s.size();i++)
        // {
        //     if(st.empty() || s[i]=='(') st.push(s[i]);
        //     else{
        //         if(st.top()!='(') st.push(s[i]);
        //         else st.pop();
        //     }
        // }
        // return st.size();
        stack<char> S;
        int c = 0;
        for (char i : s) {
            if (i == '(') S.push(i);
            else {
                if (S.empty()) c++;
                else S.pop();
            }
        }
        return c + S.size();
    }
};
Q2.
  sol:
class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);
            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;

                int maxi = *max_element(freq.begin(), freq.end());
                int mini = INT_MAX;
                
                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) mini = min(mini, freq[k]);
                }
                
                ans += (maxi - mini);
            }
        }
        return ans;
    }
};
