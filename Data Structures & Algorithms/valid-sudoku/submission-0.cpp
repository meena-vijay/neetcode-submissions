class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows = board.size();
        int cols = board[0].size();
    
        // Row Check
        for(int i=0; i<rows; i++){
            unordered_map<char, int> umap;
            for(int j=0; j<cols; j++){
                if(board[i][j] == '.')
                    continue;
                umap[board[i][j]]++;
                if(umap[board[i][j]] > 1)
                    return false;
            }
        }

        // Column Check
        for(int i=0; i<rows; i++){
            unordered_map<char, int> umap;
            for(int j=0; j<cols; j++){
                if(board[j][i] == '.')
                    continue;
                umap[board[j][i]]++;
                if(umap[board[j][i]] > 1)
                    return false;
            }
        }


        // 3x3 squar check
        for(int i=0; i<rows; i = i+3){
            for(int j=0; j<cols; j = j+3){
                unordered_map<char, int> umap;
                for(int k=0; k<3; k++){
                    for(int l=0; l<3; l++){
                        if(board[i+k][j+l] == '.')
                            continue;
                        umap[board[i+k][j+l]]++;
                        if(umap[board[i+k][j+l]] > 1)
                            return false;
                    }
                }
            }
        }

        return true;

    }
};
