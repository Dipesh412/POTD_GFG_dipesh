class Solution
{
    public:
        int maxSum(int n)
        {
             int x = n/2;
            int y = n/3;
            int z = n/4;
            if(x+y+z<=n) return n;
            return maxSum(x)  + maxSum(y) + maxSum(z);
        }
};
