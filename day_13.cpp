Q1.
  sol:
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int l = 0;
    int h = n-1;
    int ans1 = -1,ans2 = -1;
    while(l<=h){
        int mid = l + (h-l)/2;
        if(a[mid] == x) return {a[mid],a[mid]};
        else if( a[mid]<x){
        l = mid+1;
        ans1 = a[mid];
               
        }
        else{
            h =mid-1;
            ans2 = a[mid];
        }
       }
       return {ans1,ans2};
}
TC=0(logN)
SC=0(1)
Q3.
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
        if (nums[i] <= nums[mid]) {
                if (nums[i] <= target && target < nums[mid]) {
                    j = mid - 1;
                } else {
                    i = mid + 1;
                }
            } else {
                if (nums[mid] < target && target <= nums[j]) {
                    i = mid + 1;
                } else {
                    j= mid - 1;
                }
            }
        }
       return -1; 
    }
};
TC=0(logN)
SC=0(1)
Q3.
  sol:
class Solution {
public:
    int findMin(vector<int>& nums) {
       int n=nums.size();
       if(n==1 || nums[0]<nums[n-1])
       {
        return nums[0];
       }
       int ans=INT_MAX; 
       int i=0;
       n=n-1;
       while(i<=n)
       {
        int mid=(i+n)/2;
        if(nums[mid]<nums[n])
        {
            ans=min(ans,nums[mid]);
            n=mid-1;
        }
        else{
            ans=min(ans,nums[mid]);
            i=mid+1;
        }
       }
       return ans;
    }
};
