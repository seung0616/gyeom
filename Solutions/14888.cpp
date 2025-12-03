#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> A;
vector<int> op(4, 0);
long long int mx = -1000000001;
long long int mn = 1000000001;

void dfs(int level, long long int result)
{
  if(level == N)
  {
    mx = max(mx, result);
    mn = min(mn, result);

    return;
  }

  for(int i = 0; i < 4; i++)
  {
    if(op[i] == 0) continue;

    if(i == 0)
    {
      op[i]--;
      dfs(level + 1, result + A[level]);
      op[i]++;
    }
    else if(i == 1)
    {
      op[i]--;
      dfs(level + 1, result - A[level]);
      op[i]++;
    }
    else if(i == 2)
    {
      op[i]--;
      dfs(level + 1, result * A[level]);
      op[i]++;
    }
    else if(i == 3)
    {
      op[i]--;
      dfs(level + 1, result / A[level]);
      op[i]++;
    }
  }
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> N;

  A.resize(N);

  for(int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  for(int i = 0; i < 4; i++)
  {
    cin >> op[i];
  }

  dfs(1, A[0]);

  cout << mx << '\n' << mn;

  return 0;
}