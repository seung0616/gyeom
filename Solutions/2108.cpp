#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  vector<int> v(N);
  int sum = 0;
  unordered_map<int, int> m;

  for(int i = 0; i < N; i++)
  {
    cin >> v[i];

    sum += v[i];
    m[v[i]]++;
  }

  sort(v.begin(), v.end());

  int k = round(sum / (double)N); 

  if(k == -0) cout << 0 << '\n';
  else cout << k << '\n';

  cout << v[N / 2] << '\n';

  int M = -1;
  vector<int> v2;

  for(auto elem : m)
  {
    if(elem.second > M)
    {
      M = elem.second;
    }
  }

  for(auto elem : m)
  {
    if(M == elem.second)
    {
      v2.push_back(elem.first);
    }
  }

  if(v2.size() == 1)
  {
    cout << v2[0] << '\n';
  }
  else
  {
    sort(v2.begin(), v2.end());
    cout << v2[1] << '\n';
  }

  cout << v.back() - v[0];

  return 0;
}