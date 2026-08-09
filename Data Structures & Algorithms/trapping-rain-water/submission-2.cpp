class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> lh, rh;

        int mh = 0;
        for(int i=0; i<height.size(); i++){
            lh.push_back(mh);
            mh = max(height[i], mh);
        }

        // for(int i=0; i<height.size(); i++){
        //     cout << "mlh: " << lh[i] << " ";
        // }
        // cout << endl;

        mh = 0;
        for(int i=height.size()-1; i>= 0; i--){
            rh.push_back(mh);
            mh = max(height[i], mh);
        }

        reverse(rh.begin(), rh.end());

        // for(int i=0; i<height.size(); i++){
        //     cout << "mrh: " << rh[i] << " ";
        // }
        // cout << endl;

        int water = 0;
        for(int i=0; i<height.size(); i++){
            int temp = min(lh[i], rh[i]) - height[i];
            if(temp > 0)
                water += temp;
        }

        return water;
    }
};
