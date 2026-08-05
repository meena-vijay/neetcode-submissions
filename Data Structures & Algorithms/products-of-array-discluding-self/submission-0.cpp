class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int product = 1;
        vector<int> before(n);
        for(int i=0; i<nums.size(); i++){
            before[i] = product;
            product = product * nums[i];
        }

        vector<int> after(n);
        product = 1;
        for(int i=n-1; i>=0; i--){
            after[i] = product;
            product = product * nums[i];
        }

        vector<int> ans(n);
        for(int i=0; i<n; i++){
            ans[i] = before[i] * after[i];
        }

        return ans;
    }
};
