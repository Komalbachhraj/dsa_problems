Q1.
  sol:
class Solution {
  public:
    int isvow(char ch){
        if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ){
            return 1;
        }
        else{
            return 0;
        }
    }
    int isGoodorBad(string S) {
        int n=S.length();
        int countv=0,countc=0;
        for(int i=0;i<n;i++){
            if(S[i]=='?'){
                countv++;
                countc++;
            }
            else if(isvow(S[i])){
                countc=0;
                countv++;
            }
            else{
                countv=0;
                countc++;
                }
            if(countv>5 || countc>3){
                return 0;
            }
            }
        return 1;    
    }
};
Q2.
  sol:
class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        int i=0;
        int n1=nums1.size();
        int j=0;
        int n2=nums2.size();
        while(i<n1 && j<n2)
        {
            if(nums1[i][0]<nums2[j][0])
            {
                ans.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i][0]==nums2[j][0])
            {
                nums1[i][1]+=nums2[j][1];
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n1)
        {
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<n2)
        {
            ans.push_back(nums2[j]);
            j++;
        }
        return ans;
    }
};
