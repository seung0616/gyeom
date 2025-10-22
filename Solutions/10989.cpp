#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N; 
  cin >> N;

  int buffer[10001] = {};

  for(int i = 0; i < N; i++)
  {
    int n;
    cin >> n;

    buffer[n]++;
  }

  for(int i = 0; i < 10001; i++)
  {
    if(buffer[i] == 0) continue;

    for(int j = 0; j < buffer[i]; j++)
    {
      cout << i << '\n';
    }
  }

  return 0;
}