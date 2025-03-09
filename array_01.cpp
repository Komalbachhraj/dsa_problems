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
Approch:using two pointer approach.first find the first zero element and then move all the zeroes to the end of the array by swap it with non zero elements.

TC=0(N);
SC=0(1);

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
TC=0(N)
SC=0(1)
