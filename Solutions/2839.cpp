/*동적계획법을 이용함
  무게가 i일때는 i-3일 때 최소 개수 + 1 또는 i - 5일 때 최소 개수 + 1이다.*/
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

  if(d[N] >= 5001) cout << -1;
  else cout << d[N];

  return 0;
}