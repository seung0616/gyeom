#include <iostream>
#include <vector>
using namespace std;

struct Node
{
  int row, col;
};

vector<vector<int>> map(9, vector<int>(9, 0));
vector<vector<int>> row(9, vector<int>(10, 0));
vector<vector<int>> col(9, vector<int>(10, 0));
vector<vector<int>> box(9, vector<int>(10, 0));
vector<Node> blank;
bool check = false;

int boxNum(int row, int col)
{
  if(row < 0 || col < 0 || row >= 9 || col >= 9) return -1;

  if(row < 3 && col < 3) return 0;
  else if(row < 3 && col >= 3 && col < 6) return 1;
  else if(row < 3 && col >= 6) return 2;
  else if(row >= 3 && row < 6 && col < 3) return 3;
  else if(row >= 3 && row < 6 && col >= 3 && col < 6) return 4;
  else if(row >= 3 && row < 6 && col >= 6) return 5;
  else if(row >= 6 && col < 3) return 6;
  else if(row >= 6 && col >= 3 && col < 6) return 7;
  else if(row >= 6 && col >= 6) return 8;
  else return -1;
}

void sudoku(int cur)
{
  if(check) return;
  
  if(cur == blank.size())
  {
    for(int i = 0; i < 9; i++)
    {
      for(int j = 0; j < 9; j++)
      {
        cout << map[i][j] << ' ';
      }
      cout << '\n';
    }

    check = true;
    return;
  }

  int r = blank[cur].row;
  int c = blank[cur].col;
  int b = boxNum(blank[cur].row, blank[cur].col);

  for(int n = 1; n <= 9; n++)
  {
    if(row[r][n] || col[c][n] || box[b][n]) continue;
    
    row[r][n] = 1;
    col[c][n] = 1;
    box[b][n] = 1;
    map[r][c] = n;
    sudoku(cur + 1);
    map[r][c] = 0;
    box[b][n] = 0;
    col[c][n] = 0;
    row[r][n] = 0;
  }
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  for(int i = 0; i < 9; i++)
  {
    for(int j = 0; j < 9; j++)
    {
      int n;
      cin >> n;

      map[i][j] = n;

      if(n != 0)
      {
        row[i][n] = 1;
        col[j][n] = 1;
        box[boxNum(i, j)][n] = 1;
      }
    }
  }

  for(int i = 0; i < 9; i++)
  {
    for(int j = 0; j < 9; j++)
    {
      if(map[i][j] == 0)
      {
        blank.push_back({i, j});
      }
    }
  }

  sudoku(0);

  return 0;
}