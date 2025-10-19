#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long int N;
  cin >> N;

  int num = 2;

  while(N > 0)
  {
    if(N == 1) break;

    if(N % num == 0)
    {
      cout << num << '\n';
      N /= num;
    }
    else
    {
      num++;
    }
  }

  return 0;
}