#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int map[100][100] = {};

  int n;
  cin >> n;

  while(n--)
  {
    int a, b;
    cin >> a >> b;

    for(int i = a; i < a + 10; i++)
    {
      for(int j = b; j < b + 10; j++)
      {
        map[i][j] = 1;
      }
    }
  }

  int S = 0;

  for(int i = 0; i < 100; i++)
  {
    for(int j = 0; j < 100; j++)
    {
      S += map[i][j];
    }
  }

  cout << S;

  return 0;
}