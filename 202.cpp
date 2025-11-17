class Solution {
    long long getSqr(int n ){
        long long sum = 0; 
        while(n){
            int dig = n%10; 
            sum+=(dig*dig); 
            n = n/10; 
        }
        return sum ; 
    }
public:
    bool isHappy(int n) {
        int slow = n , fast = getSqr(n); 

        while(true){
            if(slow==1 || fast==1 )return true; 
            slow = getSqr(slow); 
            fast = getSqr(getSqr(fast)); 
            if(slow==fast) return false ;
        }
        return false; 
    }
};
