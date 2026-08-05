class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        for(auto num: nums){
            umap[num]++;
        }

        vector<pair<int, int>> freq;
        for(auto it = umap.begin(); it != umap.end(); it++){
            pair<int, int> pr = {it->second, it->first};
            cout <<"pair: " << it->second << " " << it->first << endl;
            freq.push_back(pr);
        }

        sort(freq.begin(), freq.end());
        int n = freq.size();
        vector<int> ans;
        for(int i=n-1; i>=n-k; i--){
            cout << "ele: " << freq[i].second << endl;
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};
