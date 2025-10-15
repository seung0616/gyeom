#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, X;
  cin >> N >> X;

  for(int i = 0; i < N; i++)
  {
    int n;
    cin >> n;

    if(n < X) cout << n << ' ';
  }

  return 0;
}