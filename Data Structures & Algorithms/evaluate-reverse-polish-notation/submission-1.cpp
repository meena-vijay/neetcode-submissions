class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        for(auto tok: tokens){
            if(tok == "+"){
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                int c = a + b;
                stack.push(c);
            }
            else if(tok == "-"){
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                int c = b - a;
                stack.push(c);
            }
            else if(tok == "*"){
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                int c = a * b;
                stack.push(c);
            }
            else if(tok == "/"){
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                int c = b / a;
                stack.push(c);
            }
            else{
                int val = stoi(tok);
                stack.push(val);
            }
        }

        int res = stack.top();
        stack.pop();

        return res;
    }
};
