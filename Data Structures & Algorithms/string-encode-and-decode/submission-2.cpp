class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(auto str: strs){
            int len = str.length();
            encoded += to_string(len);
            encoded += '#';
            encoded += str;
        }
        cout << "encoded: " << encoded << endl;
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i=0;
        while(i < s.length()){
            string lt = "";
            while(s[i] != '#'){
                lt += s[i];
                i++;
            }
            cout << "lt: " << lt << endl;
            int len = stoi(lt);
            cout << "len: " << len << endl;
            string temp = "";
            int j = i+1;
            int count = 1;
            while(count <= len){
                temp += s[j];
                j++;
                count++;
            }

            decoded.push_back(temp);
            i = j;
        }
        return decoded;
    }
};
