#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  int M = -1000001;
  int m = 1000001;

  for(int i = 0; i < N; i++)
  {
    int n;
    cin >> n;

    M = max(M, n);
    m = min(m, n);
  }

  cout << m << ' ' << M;

  return 0;
}