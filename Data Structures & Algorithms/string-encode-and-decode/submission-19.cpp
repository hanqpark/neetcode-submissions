class Solution {
public:

    string encode(vector<string>& strs) {
        string answer{};
        for (const auto& str: strs) {
            answer += to_string(str.size());
            answer += '#';
            answer += str;
        }

        return answer;
    }

    vector<string> decode(string s) {
        int size = 0;
        string size_s;
        vector<string> v;

        while (size < s.size()) {
            if (s[size] != '#') {
                size_s += s[size++];
                continue;
            }

            int x = std::stoi(size_s);
            string a = s.substr(size+1, x);
            v.emplace_back(a);
            size += x+1;

            size_s.clear();
        }

        return v;
    }
};
