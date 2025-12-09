#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<vector<int>> S;
vector<int> teamStart;
vector<int> teamLink;
vector<int> comb1;
vector<int> comb2;
int mn = 9999999;
int teamStartAbility = 0;
int teamLinkAbility = 0;

void getAbility(int level, int cur, int k) //팀에서 2명씩 뽑아서 능력치를 더해준다
{
  if(level == 2)
  {
    if(k == 1)
    {
      teamStartAbility += S[comb1[0]][comb1[1]] + S[comb1[1]][comb1[0]];
    }
    else if(k == 2)
    {
      teamLinkAbility += S[comb2[0]][comb2[1]] + S[comb2[1]][comb2[0]];
    }
    return;
  }

  for(int i = cur; i < N / 2; i++)
  {
    if(k == 1)
    {
      comb1.push_back(teamStart[i]);
      getAbility(level + 1, i + 1, k);
      comb1.pop_back();
    }
    else if(k == 2)
    {
      comb2.push_back(teamLink[i]);
      getAbility(level + 1, i + 1, k);
      comb2.pop_back();
    }
  }
}

void makeTeam(int level, int cur) //팀을 뽑는다
{
  if(level == N / 2)
  {
    teamLink.clear();

    for(int i = 0; i < N; i++)
    {
      if(find(teamStart.begin(), teamStart.end(), i) == teamStart.end())
      {
        teamLink.push_back(i);
      }
    }

    teamStartAbility = 0;
    teamLinkAbility = 0;

    getAbility(0, 0, 1);
    getAbility(0, 0, 2);

    int diff = abs(teamStartAbility - teamLinkAbility);
    mn = min(mn, diff);

    return;
  }

  for(int i = cur; i < N; i++)
  {
    teamStart.push_back(i);
    makeTeam(level + 1, i + 1);
    teamStart.pop_back();
  }
}



int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> N;

  S.resize(N, vector<int>(N));

  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < N; j++)
    {
      cin >> S[i][j];
    }
  }

  makeTeam(0, 0);

  cout << mn;

  return 0;
}