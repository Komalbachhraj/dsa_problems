Q1.
  sol:
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//        vector<int> v(2,-1);
//        for(int i=0;i<nums.size();i++)
//       {
//         for(int j=i+1;j<nums.size();j++)
//         {
//             if(nums[i]+nums[j]==target)
//             {
//                 v[0]=i;
//                 v[1]=j;
//                 break;
//             }
//         }
//       }
//       cout<<"["<<v[0]<<","<<v[1]<<"]"; 
//       return v;
//     }
// };
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // No solution found
    }
};
SC=0(1)
TC=0(N*N) actually depends upon input

Q2.
  sol:
/ class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         vector<int> v(3,0);
//         for(int i=0;i<nums.size();i++)
//         {
//             v[nums[i]]++;
//         }
//         int j=0;
//         for(int i=0;i<3;i++)
//         {
//             while(v[i]>0 && j<nums.size())
//             {
//                 nums[j]=i;
//                 v[i]--;
//                 j++;
//             }
//         }
//     }
// };
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
APPROACH:using three pointers
TC=0(N)
SC=0(1)
 // class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         vector<int> v(3,0);
//         for(int i=0;i<nums.size();i++)
//         {
//             v[nums[i]]++;
//         }
//         int j=0;
//         for(int i=0;i<3;i++)
//         {
//             while(v[i]>0 && j<nums.size())
//             {
//                 nums[j]=i;
//                 v[i]--;
//                 j++;
//             }
//         }
//     }
// };
approach: using an extra array of size 3 and storing the freq of 0,1,2 and updating the values in original array according to the frequency
TC=0(2*N)
SC=0(1) 
Q3.
sol:
class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        int i=0;
        int j=i+1;
        int n=arr.size();
        int sum=0;
        int maxi=INT_MIN;
        while(j<n)
        {
            sum=arr[i]+arr[j];
            maxi=max(sum,maxi);
            i++;
            j++;
        }
        return maxi;
        
    }
};
TC=0(n)
SC=0(1)
