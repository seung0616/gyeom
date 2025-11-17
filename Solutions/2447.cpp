#include <iostream>
#include <vector>
#include <string>
using namespace std;

void del(vector<string>& v, int x, int y, int size)
{
  if(size == 1) return;

  int k = size / 3;

  for(int i = x + k; i < x + k * 2; i++)
  {
    for(int j = y + k; j < y + k * 2; j++)
    {
      v[i][j] = ' ';
    }
  }

  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      del(v, x + k * i, y + k * j, k);
    }
  }
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  string s(N, '*');
  vector<string> v(N, s);

  del(v, 0, 0, N);

  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < N; j++)
    {
      cout << v[i][j];
    }
    cout << '\n';
  }

  return 0;
}