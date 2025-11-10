#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

unordered_map<string, int> m;

bool compare(string a, string b)
{
  if(m[a] == m[b])
  {
    if(a.length() == b.length())
    {
      return a < b;
    }
    else
    {
      return a.length() > b.length();
    }
  }
  else
  {
    return m[a] > m[b];
  }
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  vector<string> words;

  for(int i = 0; i < N; i++)
  {
    string s;
    cin >> s;

    if(s.length() >= M && m[s] == 0)
    {
      words.push_back(s);
    }

    m[s]++;
  }

  sort(words.begin(), words.end(), compare);

  for(string word : words)
  {
    cout << word << '\n';
  }

  return 0;
}