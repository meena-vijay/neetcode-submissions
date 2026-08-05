class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        
        unordered_map<char, int> smap, tmap;

        for(auto ch: s){
            smap[ch]++;
        }
        for(auto ch: t){
            tmap[ch]++;
        }

        for(auto ch: s){
            if(smap[ch] != tmap[ch])
                return false;
        }
        return true;
    }
};
