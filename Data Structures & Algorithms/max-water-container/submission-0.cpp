class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int mvol = 0;
        while(left < right){
            int vol = (right - left) * min(heights[left], heights[right]);
            mvol = max(mvol, vol);

            if(heights[left] <= heights[right])
                left++;
            else
                right--;
        }
        return mvol;
    }
};
