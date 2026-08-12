class Solution {
public:

    string encode(vector<string>& strs) {
        string answer;
        for (const string& str: strs) {
            answer += str;
            answer += "-";
        }
        return answer;
    }

    vector<string> decode(string s) {
        string str;
        stringstream ss(s);
        vector<string> answer;

        while (getline(ss, str, '-')) answer.push_back(str);

        return answer;
    }
};
