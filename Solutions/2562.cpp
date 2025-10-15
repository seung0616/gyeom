#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int M = 0;
  int idx;

  for(int i = 0; i < 9; i++)
  {
    int n;
    cin >> n;

    if(n > M)
    {
      M = n;
      idx = i;
    }
  }

  cout << M << '\n' << idx + 1;
  
  return 0;
}