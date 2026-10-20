class Solution {
public:
    bool isPalindrome(string s) {
        string temp{};
        for (char ch: s) {
            char l = tolower(ch);
            if (l >= 'a' && l < 'z' || l >= '0' && l <= '9') {
                temp += l;
            }
        }

        for (int i = 0; i < temp.size(); ++i) {
            if (temp[i] != temp[temp.size()-i-1]) {
                return false;
            }
        }

        return true;
    }
};
