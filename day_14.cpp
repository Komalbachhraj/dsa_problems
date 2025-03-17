Q1.
  sol:
class Solution {
private:
    long long check(vector<int>& piles, int h, int val, int n){
        long long total=0;
        for(int i=0;i<n;i++){
            total+=ceil((double)piles[i]/(double)val);
        }
        return total;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1, right=*max_element(piles.begin(), piles.end()), n=piles.size();
        while(left<=right){
            int mid=(left+right)/2;
            long long val=check(piles, h, mid, n);
            if(val<=h){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};
TC=0(nlogn)
SC=0(1)
Q2.
  sol:
// class Solution {
// public:
//     int smallestDivisor(vector<int>& nums, int threshold) {
//        int ans=INT_MAX;
//        int i=1;
//        while(ans>threshold)
//        {
//           int count=0;
//           for(int j=0;j<nums.size();j++)
//           {
//             if(nums[j]%i==0) count+=nums[j]/i;
//             else  count+=nums[j]/i+1;
//           }
//           ans=min(ans,count);
//           i++;
//        } 
//        return i-1;
//     }
// };
SC=0(1)
TC DEPENDS ON INPUT
class Solution {
    private:
    int check(vector<int>& nums,int mid,int threshold){
        int Totalsum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%mid == 0) Totalsum+=(nums[i]/mid);
            else Totalsum+=(nums[i]/mid)+1;
            if(Totalsum>threshold) break;
        }
        return Totalsum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=nums[0];
        for(int i=1;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        int low=1,high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            int val = check(nums,mid,threshold);
            if(val<=threshold){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};
APPROCH:binary search
SC=0(1)
TC=0(NlogM)
q3.
  sol:
class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        ll l = 1, r = 1e14, res = 0;
        while (l <= r) {
            ll mid = (l + r) / 2, k = 0;
            for (int rank : ranks) {
                k += sqrt(mid / rank);
                if (k >= cars) break;  // Early stopping
            }
            if (k >= cars) {
                res = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return res;
    }
};
