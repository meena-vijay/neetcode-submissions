class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        for(int i=0; i<n; i++){
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            
            int target = 0 - nums[i];
            unordered_map<int, int> umap;

            for(int j=i+1; j<nums.size(); j++){
                int temp = target - nums[j];

                if(umap.count(temp) > 0){
                    vector<int> triplet;
                    triplet.push_back(nums[i]);
                    triplet.push_back(temp);
                    triplet.push_back(nums[j]);
                    sort(triplet.begin(), triplet.end());
                    ans.push_back(triplet);
                }
                else
                    umap[nums[j]] = j;
            }

        }

        set<vector<int>> sans (ans.begin(), ans.end());
        vector<vector<int>> triplets(sans.begin(), sans.end());
        return triplets;
    }
};
