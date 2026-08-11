class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> umap;
        umap[']'] = '[';
        umap[')'] = '(';
        umap['}'] = '{';

        for(auto ch: s){
            if(ch == '(' || ch == '{' || ch == '['){
                stack.push(ch);
            }
            else{
                if(stack.empty())
                    return false;
                
                char temp = stack.top();
                stack.pop();

                if(temp != umap[ch])
                    return false;
            }
        }

        if(!stack.empty())
            return false;
        
        return true;
    }
};
