Q1.
  sol:
class Solution {
public:
    int maxDepth(string s) {
        int count=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('){
                count++;
                ans=max(ans,count);
            }
            else if(s[i]==')') count--;
        }
        return ans;
    }
};
TC=0(N)
SC=0(1)
Q2.
  sol:
class Solution {
public:
    int priority(char ch)
    {
        if(ch=='I') return 1;
        if(ch=='V') return 5;
        if(ch=='X') return 10;
        if(ch=='L') return 50;
        if(ch=='C') return 100;
        if(ch=='D') return 500;
         return 1000;
    }
    int romanToInt(string s) {
        int x=0;
        if(s.size()==1) return priority(s[0]);
        for(int i=0;i<s.size()-1;i++)
        {
           if(priority(s[i])<priority(s[i+1])) x-=priority(s[i]);
           else x+=priority(s[i]);
        }
        if(s.size()>1) x+=priority(s[s.size()-1]);
        return x;
    }
};
approach: whenever the value of a char is less then its next one it will be considered as negative
TC=0(N)
SC=0(1)
