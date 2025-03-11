Q1.
  sol:
// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//        int i=0;
//        vector<int> v1,v2;
//        while(i<nums.size())
//        {
//         if(nums[i]>0)
//         {
//             v1.push_back(nums[i]);
//         }
//         else{
//             v2.push_back(nums[i]);
//         }
//         i++;
//        }
//        i=0;
//        int j=0;
//        while(i<v1.size() && i<v2.size())
//        {
//         nums[j++]=v1[i];
//         nums[j++]=v2[i];
//         i++;
//        }
//        while(i<v1.size())
//        {
//         nums[j++]=v1[i++];
//        }
//         while(i<v2.size())
//        {
//         nums[j++]=v2[i++];
//        }
//        return nums;
//     }
// };
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v1,v2,ans;
        
        for(int i =0;i<nums.size();i++){
            if(nums[i]>0)v1.push_back(nums[i]);
            else v2.push_back(nums[i]);
        }
        int ind1=0,ind2=0;
        

        while(ind2<nums.size()/2){
            ans.push_back(v1[ind1]);
            ind1++;
            ans.push_back(v2[ind2]);
            ind2++;
        }
        return ans;
    }
};
TC=0(2*N);
SC=0(N)
APPROACH: consider two extra vectors to store the negative and positive numbers seperately then store these values alternate in the ans;
Q2.
  sol:
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 1;
        while (i > 0 && nums[i-1] >= nums[i]) {
            i--;
        }
        
        if (i == 0) {
            reverse(nums.begin(), nums.end());
            return;
        }
        
        int j = nums.size() - 1;
        while (j >= i && nums[j] <= nums[i-1]) {
            j--;
        }
        
        swap(nums[i-1], nums[j]);
        reverse(nums.begin() + i, nums.end());        
    }
};
Q3.
  sol:
// class Solution {
// public:
//     int maximum(vector<int> arr,int i)
//     {
//         int max1=arr[i];
//         i=i+1;
//         while(i<arr.size())
//         {
//             if(max1<arr[i])
//             max1=arr[i];
//             i++;
//         }
//         return max1;
//     }
//     int maxProfit(vector<int>& prices) {
//         int profit=0;
//        for(int i=0;i<prices.size()-1;i++)
//        { 
//            profit=max(profit,maximum(prices,i+1)-prices[i]);
//        }
//        return profit; 
//     }
// };
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};
TC=0(N)
SC=0(1)
