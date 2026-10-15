class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int num;
        for (int i = 0; i < 9; ++i) {
            std::array<bool, 9> row{};
            std::array<bool, 9> col{};
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] != '.') {
                    num = board[i][j] - '1';
                    if (row[num]) {
                        return false;
                    } else {
                        row[num] = true;
                    }
                }
                if (board[j][i] != '.') {
                    num = board[j][i] - '1';
                    if (col[num]) {
                        return false;
                    } else {
                        col[num] = true;
                    }
                }
            }
        }

        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                std::array<bool, 9> box{};
                for (int x = 0; x < 3; ++x) {
                    for (int y = 0; y < 3; ++y) {
                        if (board[i+x][j+y] != '.') {
                            num = board[i+x][j+y] - '1';
                            if (box[num]) {
                                return false;
                            } else {
                                box[num] = true;
                            }
                        }
                    }
                }
            }
        }

        return true;
    }
};
