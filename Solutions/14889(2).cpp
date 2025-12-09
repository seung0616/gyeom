#include <iostream>
#include <vector>
using namespace std;

int N;
vector<vector<int>> S;
vector<int> team;
int mn = 999999;

void getDiff()
{
  int start = 0, link = 0;

  for(int i = 0; i < N; i++)
  {
    for(int j = i + 1; j < N; j++)
    {
      if(team[i] && team[j])
      {
        start += S[i][j] + S[j][i];
      }
      else if(!team[i] && !team[j])
      {
        link += S[i][j] + S[j][i];
      }
    }
  }

  mn = min(mn, abs(start - link));
}

void dfs(int level, int cur)
{
  if(level == N / 2)
  {
    getDiff();
    return;
  }

  for(int i = cur; i < N; i++)
  {
    team[i] = 1;
    dfs(level + 1, i + 1);
    team[i] = 0;
  }
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> N;

  S.resize(N, vector<int>(N));
  team.resize(N, 0);

  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < N; j++)
    {
      cin >> S[i][j];
    }
  }

  dfs(0, 0);

  cout << mn;

  return 0;
}