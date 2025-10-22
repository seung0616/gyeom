/*체스판은 왼쪽위가 흰색인 체스판과 왼쪽 위가 검정색인 체스판 두가지 밖에 없다.
  왼쪽위가 흰색일때는 몇개를 바꿔야하는지 검은색일때는 몇개를 바꿔야 하는지 센 후에 최솟값을 구한다.*/
#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<vector<char>> chessboard;
int m = 65;

int counting(int row, int col)
{
  int cnt1 = 0, cnt2 = 0;

  for(int i = row; i < row + 8; i++)
  {
    for(int j = col; j < col + 8; j++)
    {
      if((i + j) % 2 == 0)
      {
        if(chessboard[i][j] == 'B') cnt1++;
        if(chessboard[i][j] == 'W') cnt2++;
      }
      else
      {
        if(chessboard[i][j] == 'B') cnt2++;
        if(chessboard[i][j] == 'W') cnt1++;
      }
    }
  }

  return min(cnt1, cnt2);
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> N >> M;

  chessboard.resize(N, vector<char>(M));

  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < M; j++)
    {
      cin >> chessboard[i][j];
    }
  }

  for(int i = 0; i < N - 7; i++)
  {
    for(int j = 0; j < M - 7; j++)
    {
      m = min(counting(i, j), m);
    }
  }

  cout << m;

  return 0;
}