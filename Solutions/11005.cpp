#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, B;
  cin >> N >> B;

  string result;

  while(N > 0)
  {
    int num = N % B;
    
    if(num < 10)
    {
      result.push_back(num + '0');
    }
    else
    {
      result.push_back(char(num + 55));
    }

    N /= B;
  }

  reverse(result.begin(), result.end());
  cout << result;

  return 0;
}