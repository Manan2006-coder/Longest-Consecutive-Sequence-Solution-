class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            map<char,int>m;
            for(int i=0;i<9;i++){
                for(int j=0;j<9;j++){
                    if(board[i][j]!='.'){
                        m[board[i][j]]++;
                    }
                    if(m[board[i][j]]>1){
                        return false;
                    }
                }
                m.clear();
            }
    
            for(int j=0;j<9;j++){
                for(int i=0;i<9;i++){
                    if(board[i][j]!='.'){
                        m[board[i][j]]++;
                    }
                    if(m[board[i][j]]>1){
                        return false;
                    }
                }
                m.clear();
            }
        for(int i=0;i<9;i=i+3){
            for(int j=0;j<9;j=j+3){
          for(int p=i;p<i+3;p++){
                for(int q=j;q<j+3;q++){
                    if(board[p][q]!='.'){
                        m[board[p][q]]++;
                    }
                    if(m[board[p][q]]>1){
                        return false;
                    }
                }
               
            }
             m.clear();
            }
        }
    
      return true;
        }
    };