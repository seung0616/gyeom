#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  unordered_map<int, int> um;

  for(int i = 0; i < N; i++)
  {
    int n;
    cin >> n;

    um[n]++;
  }

  int v;
  cin >> v;

  cout << um[v];

  return 0;
}