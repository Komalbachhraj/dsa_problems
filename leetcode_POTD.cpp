Q1.
  sol:
class Solution {
public:
   bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int> v(2,-1);
        if(right-left<2)
        {
            return v;
        }
        vector<int> v1;
        int i=left;
        while(i<right)
        {
            if(isPrime(i))
            {
                v1.push_back(i);
            }
            i++;
        }
        if(isPrime(right))
        {
            v1.push_back(right);
        }
        if(v1.size()<2)
        {
           return v; 
        }
        if(v1.size()==2)
        {
            return v1;
        }
        int min=INT_MAX;
        int x,y;
        for(int i=0;i<v1.size()-1;i++)
        {
            int a=v1[i+1]-v1[i];
            if(min>a)
            {
                min=a;
                x=v1[i];
                y=v1[i+1];
            }
        }
        v[0]=x;
        v[1]=y;
        return v;
    }
};
