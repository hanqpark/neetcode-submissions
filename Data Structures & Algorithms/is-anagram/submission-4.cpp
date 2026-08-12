class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        std::array<int, 26> anagram{};

        for (int i = 0; i < s.size(); ++i) {
            ++anagram[s[i]-'a'];
            --anagram[t[i]-'a']; 
        }

        for (const auto& i : anagram) {
            if (i != 0)
                return false;
        }

        return true;
    }
};
