class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};

        for (char c : s) {
            if (mapping.find(c) == mapping.end()) {
                stack.push(c);
            } else if (!stack.empty() && mapping[c] == stack.top()) {
                stack.pop();
            } else {
                return false;
            }
        }

        return stack.empty();        
    }
};

var isValid = function(s) {
    let stack = [];
    let mapping = new Map([[')', '('], [']', '['], ['}', '{']]);

    for (let c of s) {
        if (!mapping.has(c)) {
            stack.push(c);
        } else if (stack.length > 0 && mapping.get(c) === stack[stack.length - 1]) {
            stack.pop();
        } else {
            return false;
        }
    }

    return stack.length === 0;
};