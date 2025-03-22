Q1.
  sol:
class Solution {
public:
    static bool st(pair<char,int>& a,pair<char,int>& b)
    {
        if (a.second == b.second)  return a.first < b.first;
        return a.second > b.second;
    }
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char c:s) mp[c]++;
        vector<pair<char,int>> arr(mp.begin(),mp.end());
        sort(arr.begin(),arr.end(),st);
        string s1;
        for(auto& it:arr)
        {
            for(int i=0;i<it.second;i++) s1+=it.first;
        }
        return s1;
    }
};
Q2.
  sol:
class Solution {
public:
    int myAtoi(string s) 
    {
        int i=0;
        int sign=1;
        long ans=0;
        while(i<s.length() && s[i]==' ')
            i++;
        if(s[i]=='-')
        {
            sign=-1;
            i++;
        }
        else if(s[i]=='+')
            i++;
        while(i<s.length())
        {
            if(s[i]>='0' && s[i]<='9')
            {
                ans=ans*10+(s[i]-'0');
                if(ans>INT_MAX && sign==-1)
                    return INT_MIN;
                else if(ans>INT_MAX && sign==1)
                    return INT_MAX;
                i++;
            }
            else return ans*sign;
        }
        return (ans*sign);
    }
};
