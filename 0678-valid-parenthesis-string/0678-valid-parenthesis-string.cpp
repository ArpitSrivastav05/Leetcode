class Solution {
public:
    bool checkValidString(string s) {
        int low = 0;  // minimum possible open brackets
        int high = 0; // maximum possible open brackets

        for (char c : s) {
            if (c == '(') {
                low++;
                high++;
            } else if (c == ')') {
                if (low > 0) low--;  // one possible '(' matched
                high--;              // must reduce max too
            } else if (c == '*') {
                if (low > 0) low--;  // treat '*' as ')'
                high++;              // treat '*' as '('
            }

            // If high < 0, too many ')' → invalid
            if (high < 0) return false;
        }

        // At the end, low must be 0 (all opens matched)
        return low == 0;
    }
};
