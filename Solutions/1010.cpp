#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T;
  cin >> T;

  while(T--)
  {
    int N, M;
    cin >> N >> M;

    int result = 1;

    for(int i = 0; i < N; i++)
    {
      result *= (M - i);
      result /= (i + 1);
    }

    cout << result << '\n';
  }

  return 0;
}