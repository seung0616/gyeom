#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  unordered_map<int, int> X;
  unordered_map<int, int> Y;

  for(int i = 0; i < 3; i++)
  {
    int x, y;
    cin >> x >> y;

    X[x]++;
    Y[y]++;
  }

  for(auto x : X)
  {
    if(x.second == 1)
    {
      cout << x.first << ' ';
      break;
    }
  }

  for(auto y : Y)
  {
    if(y.second == 1)
    {
      cout << y.first;
      break;
    }
  }

  return 0;
}