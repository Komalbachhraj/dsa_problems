Q1.
  sol:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    //  vector<int> ans;
    int n=nums.size();
    int i=0;
    int j=-1;
    while(i<n)
   {
       if(nums[i]==0)
       {
           j=i;
           break;
        }
        i++;
    }
    if(j!=-1){
        while(i<n)
        {
            if(nums[i]!=0)
            {
             swap(nums[i],nums[j]);
              j++;
            }
            i++;
        }
    }
    }
};
TC=0(N)
SC=0(1)
APPROCH: USING TWO POINTER APPROACH
METHOP2:
 //  for(int i=0;i<n;i++)
    //  {
    //     if(nums[i]!=0)
    //     {
    //         ans.push_back(nums[i]);
    //     }
    //  }
    //  int i=0;
    //  while(i<ans.size())
    //  {
    //     nums[i]=ans[i];
    //     i++;
    //  }
    //  while(i<n)
    //  {
    //     nums[i]=0;
    //     i++;
    //  }
TC=0(N)
SC=0(N) IN WORST CASE
Q2.
  sol:
class Solution{
public:
void rotate(vector<int>&nums,int k){
int n=nums.size();
k%=n;
reverse(nums.begin(),nums.end());
reverse(nums.begin(),nums.begin()+k);
reverse(nums.begin()+k,nums.end());
}
};
TC:0(N)
SC=0(1)
  
