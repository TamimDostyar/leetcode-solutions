class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = (int)board.size();
        int row = 0;

        while (row < n) {
            int col = 0;
            int sizeOfEachColoum = board[row].size();
            while (col < sizeOfEachColoum) {
                bool noDuplicate = !isDuplicate(board[row]);
                bool cols_validation = colsValidation(board, col);
                bool subBox = boxValidation(board, row, col);

                if (!noDuplicate || !cols_validation || !subBox) {
                    return false;
                }
                col++;
            }
            row++;
        }
        return true;
    }
    bool valid(char data){
        if (data == '.') {
            return true;
        }
        int numb = data - '0';
        return numb >= 1 && numb <= 9;
    }
    bool isDuplicate(vector<char> data){
        vector<int> d;
        for (int i = 0; i < data.size(); i++) {
            if (data[i] == '.') {
                continue;
            }
            int num = data[i] - '0';
            if (find(d.begin(), d.end(), num) != d.end()) {
                return true;
            }
            d.push_back(num);
        }
        return false;
    }
    bool colsValidation(vector<vector<char>>& grid, int col){
        vector<char> column;
        for (int row = 0; row < grid.size(); row++) {
            if (!valid(grid[row][col])) {
                return false; 
            }
            column.push_back(grid[row][col]);
        }
        bool duplicate = isDuplicate(column);
        return !duplicate;
    }

    bool boxValidation(vector<vector<char>>& grid, int row, int col) {
        vector<char> box;

        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;

        for (int r = startRow; r < startRow + 3; r++) {
            for (int c = startCol; c < startCol + 3; c++) {
                box.push_back(grid[r][c]);
            }
        }

        return !isDuplicate(box);
    }
};
