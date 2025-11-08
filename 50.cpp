class Solution {
public:
    double myPow(double x, int n) {
        if(x==0) return 0;
        else if (x==1) return 1;
        else if (x==-1)
        {
            if(n%2) return -1;
            else return 1;
        }

        if(n<0) x=1/x;

        long int m=labs(n);
        double ans=1;

        while(m)
        {
            if(m&1)
            {
                ans*=x;
            }

            x*=x;
            m>>=1;
            
        }
        
        return ans;
        
    }
};
