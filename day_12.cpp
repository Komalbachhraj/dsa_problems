Q1.
  sol:
class Solution {
public:
    int search(vector<int>& nums, int target) {
      int i=0;
      int j=nums.size()-1;
      while(i<=j)
      {
        int mid=i+(j-i)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        if(nums[mid]>target)
        {
            j=mid-1;
        }
        else{
            i=mid+1;
        }
      }
      return -1;  
    }
};
TC=0(logN)
SC=0(1)
Q2.
  sol:
  class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0;
        vector<int> v(2,-1);
        int j=nums.size()-1;
        while(i<=j)
        {
           if(nums[i]==target && nums[j]==target)
           {
            v[0]=i;
            v[1]=j;
            return v;
           }
           else if(nums[i]==target && nums[j]!=target)
           {
            v[0]=i;
            j--;
           }
            else if(nums[j]==target && nums[i]!=target)
           {
            v[1]=j;
            i++;
           }
           else{
            i++;
            j--;
           }
        }
        return v;
    }
};
Approach: starting travesing the arrasy from both sides to find first and last occurence
TC=0(N)
SC=0(1)
Q3.
  sol:
class Solution {
public:
    int searchInsert(vector<int>& num,int target)
    {
        int i=0;
        int j=num.size()-1;
        int ans=j+1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(num[mid]>=target)
            {
                ans=min(ans,mid);
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return ans;
    }
};
TC=0(N)
SC=0(1)
  
  
