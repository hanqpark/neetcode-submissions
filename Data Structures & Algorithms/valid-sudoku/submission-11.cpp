class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            for (int i = 0; i < 9; ++i) {
                vector<int> col(9, 0);
                vector<int> row(9, 0);
                for (int j = 0; j < 9;  ++j) {
                    char ch = board[i][j];
                    if (ch != '.') {
                        int idx = ch - '0';
                        if (col[idx-1] == 0) {
                            col[idx-1]++;
                        } else {
                            return false;
                        }
                    }
                    ch = board[j][i];
                    if (ch != '.') {
                        int idx = ch - '0';
                        if (row[idx-1] == 0) {
                            row[idx-1]++;
                        } else {
                            return false;
                        }
                    }
                }
            }
    
            for (int i = 0; i < 9; i += 3) {
                for (int j = 0; j < 9; j += 3) {
                    vector<int> box(9, 0);
                    for (int x = 0; x < 3; ++x) {
                        for (int y = 0; y < 3; ++y) {
                            char ch = board[i+x][j+y];
                            if (ch != '.') {
                                int idx = ch - '0';
                                if (box[idx-1] == 0) {
                                    box[idx-1]++;
                                } else {
                                    return false;
                                }
                            }
                        }
                    }

                }
            }
    
            return true;
        }
    };
