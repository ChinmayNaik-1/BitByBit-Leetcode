class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        unordered_map<int,int> sf, pf;
        vector<int> ans;

        for(int i=0; i<nums.size(); i++)
        {
            sf[nums[i]]++;
        }

        for(int i=0; i<nums.size(); i++)
        {
            pf[nums[i]]++;
            sf[nums[i]]--;
            if(sf[nums[i]]==0)
            {
                sf.erase(nums[i]);
            }
            ans.push_back(pf.size()-sf.size());
        }
        return ans;
    }
};
