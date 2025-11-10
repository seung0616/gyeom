#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  long long int result = 1;

  for(int i = 1; i <= N; i++)
  {
    result *= i;
  } 

  cout << result;

  return 0;
}