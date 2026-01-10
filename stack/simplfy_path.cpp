q link - https://leetcode.com/problems/simplify-path/description/

var simplifyPath = function(path) {
    const components = path.split("/");
    const st = [];

    for (const comp of components) {
        if (comp === "" || comp === ".") {
            continue;
        }

        if (comp === "..") {
            if (st.length) {
                st.pop();
            }
        } else {
            st.push(comp);
        }
    }

    return "/" + st.join("/");    
};

class Solution {
public:
    string simplifyPath(string path) {
        const vector<string> components = split(path, '/');
        vector<string> st;

        for (const string& comp : components) {
            if (comp == "" || comp == ".") {
                continue;
            }

            if (comp == "..") {
                if (!st.empty()) {
                    st.pop_back();
                }
            } else {
                st.push_back(comp);
            }
        }

        return "/" + join(st, "/");
    }
};