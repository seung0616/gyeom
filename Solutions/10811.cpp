#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  vector<int> baskets(N);

  for(int i = 0; i < N; i++)
  {
    baskets[i] = i + 1;
  }

  while(M--)
  {
    int i, j;
    cin >> i >> j;

    reverse(baskets.begin() + i - 1, baskets.begin() + j);
  }

  for(int basket : baskets)
  {
    cout << basket << ' ';
  }

  return 0;
}