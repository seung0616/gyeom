#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  int mx = 0;
  int mn = 1000001;

  for(int i = 0; i < n; i++)
  {
    int k;
    cin >> k;

    mx = max(mx, k);
    mn = min(mn, k);
  }

  cout << mx * mn;

  return 0;
}