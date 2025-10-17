#include <iostream>
#include <vector>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int M = -1;
  int row;
  int col;

  for(int i = 0; i < 9; i++)
  {
    for(int j = 0; j < 9; j++)
    {
      int n;
      cin >> n;

      if(n > M)
      {
        row = i;
        col = j;
        M = n;
      }
    }
  }

  cout << M << '\n' << row + 1 << ' ' << col + 1;

  return 0;
}