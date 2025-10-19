#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  vector<long long int> d(N + 1, 0);
  d[0] = 4;
  
  for(int i = 1; i <= N; i++)
  {
    int k = sqrt(d[i - 1]);

    d[i] = (2 * k - 1) * (2 * k - 1);
  }

  cout << d[N];

  return 0;
}