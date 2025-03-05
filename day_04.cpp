Q1.
  sol:
class Solution {
public:
    int distinctIntegers(int n) {
        if(n==1) return 1;
        return n-1;
    }
};
Q2.
  sol:
class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        sort(a.begin(),a.end());
        if(m==a.size())
        return a[a.size()-1]-a[0];
        int count=INT_MAX;
        int i=0;
        while(i<=a.size()-m)
        {
            count=min(count,a[i+m-1]-a[i]);
            i++;
        }
        return count;
    }
};
