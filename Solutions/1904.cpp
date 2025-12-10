#include <iostream>
#include <vector>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  vector<int> d(N + 1, 0);

  d[1] = 1;
  d[2] = 2;

  for(int i = 3; i <= N; i++)
  {
    d[i] = (d[i - 1] + d[i - 2]) % 15746;
  }

  cout << d[N];

  return 0;
}