#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> visited;
vector<int> result;

void dfs(int level)
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

  for(int i = 1; i <= N; i++)
  {
    if(visited[i]) continue;

    visited[i] = 1;
    result[level] = i;
    dfs(level + 1);
    result[level] = 0;
    visited[i] = 0;
  }
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> N >> M;

  visited.resize(N + 1, 0);
  result.resize(M, 0);

  dfs(0);

  return 0;
}