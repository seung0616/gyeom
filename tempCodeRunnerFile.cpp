#include <iostream>
#include <vector>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  
  vector<int> d(N + 1, 5001);

  d[0] = 0;
  d[3] = 1;

  for(int i = 5; i <= N; i++)
  {
    d[i] = min(d[i - 3] + 1, d[i - 5] + 1);
  }

  if(d[N] == 5001) cout << -1;
  else cout << d[N];

  return 0;
}