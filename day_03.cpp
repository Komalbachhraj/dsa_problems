Q1.
  sol:
  class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
       for(int i=0;i<image.size();i++)
       {
        for(int j=0;j<image[0].size();j++)
        {
            if(image[i][j]==0)
            image[i][j]=1;
            else
            image[i][j]=0;
        }
       }
      //  flipping image 1<->0 and 0<->1
       for(int i=0;i<image.size();i++)
       {
        int j=0;
        int k=image[i].size()-1;
        while(j<k)
        {
            swap(image[i][j],image[i][k]);
            k--;
            j++;
        }
       }
      // INVERT THE IMAGE
       return image; 
    }
};
