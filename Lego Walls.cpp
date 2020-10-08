
 int cols = board[0].size();
 
    if(i >= rows || i = cols || j < 0) return;
 
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
