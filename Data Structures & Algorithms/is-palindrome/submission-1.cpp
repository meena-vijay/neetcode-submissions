class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto ch: s){
            if(isalnum(ch)){
                str += tolower(ch);
            }
        }

        string temp = str;
        cout << "temp: " << temp << endl;
        reverse(temp.begin(), temp.end());
        cout << "temp: " << temp << endl;
        return str == temp;
    }
};
