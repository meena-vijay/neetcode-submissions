class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(auto str: strs){
            // cout << str << endl;
            encoded += to_string(str.length()) + '#' + str;
            // cout << encoded << endl;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        // cout << s << endl;
        vector<string> strs;
        int i = 0;
        while(i < s.length()){
            if(s[i] >= '0' && s[i] <= '9'){
                // cout << "hello" << endl;
                string len = "";
                while(s[i] != '#'){
                    len += s[i];
                    i++;
                }
                i++;
                int length = stoi(len);
                string temp = s.substr(i, length);
                strs.push_back(temp);
                i = i + length;
            }
            else
                i++;
        }
        return strs;
    }
};
