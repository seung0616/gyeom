#include <iostream>
#include <vector>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  vector<int> baskets(N, 0);

  while(M--)
  {
    int i, j, k;
    cin >> i >> j >> k;

    for(int x = i - 1; x <= j - 1; x++)
    {
      baskets[x] = k;
    }
  }

  for(auto b : baskets)
  {
    cout << b << ' ';
  }

  return 0;
}