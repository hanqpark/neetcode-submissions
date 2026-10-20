class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 1) return true;
        
        int l = 0;
        int r = s.size()-1;

        while (l <= r) {
            while (!IS_ALNUM(tolower(s[l]))) ++l;
            while (!IS_ALNUM(tolower(s[r]))) --r;

            if (tolower(s[l]) == tolower(s[r])) {
                ++l; --r;
            } else {
                return false;
            }
        }

        return true;
    }

private:
    bool IS_ALNUM(char al) {
        return (al >= 'a' && al <= 'z') || (al >= '0' && al <= '9');
    }
};
