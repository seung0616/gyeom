#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T;
  cin >> T;

  long long int p[101] = {};

  p[1] = p[2] = p[3] = 1;
  p[4] = p[5] = 2;

  while(T--)
  {
    int N;
    cin >> N;

    p[1] = p[2] = p[3] = 1;
    p[4] = p[5] = 2;

    for(int i = 6; i <= N; i++)
    {
      p[i] = p[i - 1] + p[i - 5];
    }

    cout << p[N] << '\n';
  }

  return 0;
}