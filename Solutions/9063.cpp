#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  int maxX = -10001, maxY = -10001, minX = 10001, minY = 10001;

  for(int i = 0; i < N; i++)
  {
    int x, y;
    cin >> x >> y;

    maxX = max(maxX, x);
    maxY = max(maxY, y);
    minX = min(minX, x);
    minY = min(minY, y);
  }

  cout << (maxX - minX) * (maxY - minY);

  return 0;
}