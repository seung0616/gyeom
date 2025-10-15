#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  bool num[30];

  for(int i = 0; i < 28; i++)
  {
    int n;
    cin >> n;

    num[n - 1] = true;
  }

  for(int i = 0; i < 30; i++)
  {
    if(!num[i]) cout << i + 1 << '\n';
  }

  return 0;
}