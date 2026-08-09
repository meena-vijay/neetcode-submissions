class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> umap;
        int len = 0;
        int mlen = 0;
        int i = 0, j = 0;
        while(j < s.length()){
            if(umap[s[j]] < 1){
                umap[s[j]]++;
                len++;
                j++;
                mlen = max(len, mlen);
            }
            else{
                while(umap[s[j]] == 1){
                    umap[s[i]]--;
                    i++;
                    len--;
                }
            }
        }

        return mlen;
    }
};
