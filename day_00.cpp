Q1.
  sol:
  class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i=0;
        int n=nums.size()-1;
        for(int i=0;i<=n;i++)
        {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};
Q2.
  sol:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_set<int> seen;
      for(int i=0;i<nums.size();i++)
      {
        if(seen.count(nums[i]))
        return true;
        else
        seen.insert(nums[i]);
      }
      return false;
    }
};
