#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> result;

void dfs(int level, int cur)
{
  if(level == M)
  {
    for(int r : result)
    {
      cout << r << ' ';
    }
    cout << '\n';
    return;
  }

  for(int i = cur; i <= N; i++)
  {
    result[level] = i;
    dfs(level + 1, i);
    result[level] = 0;
  }
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> N >> M;  

  result.resize(M, 0);

  dfs(0, 1);

  return 0;
}