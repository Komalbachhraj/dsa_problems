Q1.
  sol:
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> v1(256,-1),v2(256,-1);
        for (int i = 0; i < s.length(); i++) {
            if (v1[s[i]] == -1 && v2[t[i]] == -1) {
                v1[s[i]] = t[i];
                v2[t[i]] = s[i];
            } else {
                if (v1[s[i]] != t[i] || v2[t[i]] != s[i]) {
                    return false;
                }
            }
        }
        return true;
    }
};
TC=0(N)
SC is constant 
Approach: assuming two different array to store the mapping pair ascii values 
Q2.
sol:
class Solution {
public:
    // Function to remove outermost parentheses of every primitive string in the
    // decomposition of s
    string removeOuterParentheses(string s) {
        string result;   // To store the final result
        int balance = 0; // To keep track of the balance of parentheses

        // Iterate through each character in the string
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                // If balance is greater than 0, it means this '(' is not an
                // outermost parenthesis
                if (balance > 0) {
                    result += s[i]; // Add the character to the result
                }
                balance++; // Increase the balance for '('
            } else {
                balance--; // Decrease the balance for ')'
                // If balance is greater than 0, it means this ')' is not an
                // outermost parenthesis
                if (balance > 0) {
                    result += s[i]; // Add the character to the result
                }
            }
        }
        return result; // Return the final result after removing outermost
                       // parentheses
    }
};
