class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=1, ele=nums[0], n=nums.size();
        for(int i=1; i<n; i++)
        {
            if(cnt==0)
            {
                cnt=1;
                ele=nums[i];
            }
            else if(ele==nums[i])
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        return ele;
    }
};
