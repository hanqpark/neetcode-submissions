class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> ana;
        unordered_map<char, int> gram;

        for (const auto& c: s) {
            ana[c]++;
        }

        for (const auto& c: t) {
            gram[c]++;
        }

        if (ana == gram) 
            return true;
        else
            return false;
    }
};
