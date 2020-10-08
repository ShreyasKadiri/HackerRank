/*
You are given an N * M board containing O’s and X’s. An O denotes empty space while an X denotes that a lego block is placed at that location.

Two lego blocks are connected if they share an edge (must be adjacent horizontally or vertically, diagonals don’t count). A group of connected lego blocks which 
cannot be further extended by including any other connected lego block is called a lego wall.

Return the number of lego walls on the board.


*/

void solve(vector<string> &board, int i, int j)
{
 int rows = board.size();
 int cols = board[0].size();
 
    if(i >= rows || i<0 || j>=cols || j < 0) return;
 
    if(board[i][j] == 'X')
    {
        board[i][j] = 'O';
        solve(board,i,j+1);
        solve(board,i,j-1);
        solve(board,i-1,j);
        solve(board,i+1,j);
    }
    return;
}
 
// Complete the numberOfWalls function below.
int numberOfWalls(vector<string> board)
{
    int ans = 0;
    int rows = board.size();
    int cols = board[0].size();
    for(int i = 0 ;i < rows; ++i)
    {
      for (int j = 0; j < cols; ++j)
      {
        if (board[i][j] == 'X')
        {
          ans += 1;
          solve(board, i, j);
        }
    }
    return ans;
    }
