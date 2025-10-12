#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  if(n % 4 == 0 && (n % 100 != 0 || n % 400 == 0))
    cout << 1;
  else
    cout << 0;

  return 0;
}