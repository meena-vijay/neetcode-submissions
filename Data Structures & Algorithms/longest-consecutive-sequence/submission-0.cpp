class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> umap;
        for(auto num: nums){
            umap[num] = true;
        }

        int max_len = 0;
        int len = 0;
        for(int i=0; i<nums.size(); i++){
            if(umap[nums[i]-1])
                continue;
            
            int temp = nums[i];
            len = 0;
            while(umap[temp]){
                len++;
                max_len = max(len, max_len);
                temp++;
            }
        }
        return max_len;
    }
};
