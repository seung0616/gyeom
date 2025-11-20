#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> diag1;
vector<int> diag2;
vector<int> col;
int cnt = 0;

void NQueen(int row)
{
  if(row == N)
  {
    cnt++;
    return;
  }

  for(int i = 0; i < N; i++)
  {
    if(diag1[row + i] || diag2[i - row + N - 1] || col[i]) continue;

    diag1[row + i]++;
    diag2[i - row + N - 1]++;
    col[i]++;
    NQueen(row + 1);
    col[i]--;
    diag2[i - row + N - 1]--;
    diag1[row + i]--;
  }
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> N;

  diag1.resize(2 * N - 1, 0);
  diag2.resize(2 * N - 1, 0);
  col.resize(N, 0);

  NQueen(0);

  cout << cnt;

  return 0;
}