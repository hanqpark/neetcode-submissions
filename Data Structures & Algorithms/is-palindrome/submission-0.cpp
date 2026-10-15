class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;

        while (l < r) {
            char lc = std::tolower(s[l]);
            if (lc < 'a' || lc > 'z') {
                ++l;
                continue;
            }

            char rc = std::tolower(s[r]);
            if (rc < 'a' || rc > 'z') {
                --r;
                continue;
            }

            if (lc != rc) {
                return false;
            }
            
            ++l;
            --r;
        }

        return true;
    }
};
