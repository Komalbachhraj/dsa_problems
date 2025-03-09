Q1.
  sol:
lass Solution {
public:
    int minSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int minSum = INT_MAX;
        bool found = false;

        for (int k = l; k <= r; ++k) {
            int sum = 0;
            for (int i = 0; i < n; ++i) {
                sum += nums[i];
                if (i >= k - 1) {
                    if (sum > 0) {
                        minSum = min(minSum, sum);
                        found = true;
                    }
                    sum -= nums[i - k + 1];
                }
            }
        }

        return found ? minSum : -1;
    }
};
Q2.
  sol:
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0) {
            return true;
        }
        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == flowerbed.size()-1 || flowerbed[i+1] == 0)) {
                flowerbed[i] = 1;
                n--;
                if (n == 0) {
                    return true;
                }
            }
        }
        return false;
    }
    //     int count1=0;
    //     int count2=0;
    //     for(int i=0;i<flowerbed.size();i++)
    //     {
    //        if(flowerbed[i]==1)
    //        count1++;
    //        else
    //        count2++;
    //     }
    //     count1=count1+n;
    //     return (flowerbed.size()>=2*count1-1);
    //  }
};
TC=0(n)
SC=0(1)
  
