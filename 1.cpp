class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> temp;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            int x = target - nums[i];
            if(temp.find(x)!=temp.end())
            {
                return {i,temp[x]};
            }
            temp[nums[i]]=i;
        }
        return {-1,-1};

    }
};
