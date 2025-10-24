#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  unordered_set<string> neverHeards;
  vector<string> unknowns;

  for(int i = 0; i < N; i++)
  {
    string name;
    cin >> name;

    neverHeards.insert(name);
  }

  for(int i = 0; i < M; i++)
  {
    string name;
    cin >> name;

    if(neverHeards.count(name))
    {
      unknowns.push_back(name);
    }
  }

  sort(unknowns.begin(), unknowns.end());

  cout << unknowns.size() << '\n';

  for(string unknown : unknowns)
  {
    cout << unknown << '\n';
  }

  return 0;
}