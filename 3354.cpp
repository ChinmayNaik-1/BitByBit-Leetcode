class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int ans=0, temp=0;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        for(int i=0; i<nums.size(); i++)
        {
            temp+=nums[i];
            if(nums[i]==0)
            {
                if(2*temp==sum) ans+=2;
                else if(abs(2*temp-sum)==1) ans++;
            }  
        }
        return ans;
    }
};
