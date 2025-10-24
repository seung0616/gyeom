#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  vector<string> pokemons;
  unordered_map<string, int> pokemons2;

  for(int i = 0; i < N; i++)
  {
    string s;
    cin >> s;

    pokemons.push_back(s);
    pokemons2[s] = i + 1;
  }

  for(int i = 0; i < M; i++)
  {
    string s;
    cin >> s;

    if(isalpha(s[0]))
    {
      cout << pokemons2[s] << '\n';
    }
    else if(isdigit(s[0]))
    {
      cout << pokemons[stoi(s) - 1] << '\n';
    }
  }

  return 0;
}