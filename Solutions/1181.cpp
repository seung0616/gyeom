#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool compare(string a, string b)
{
  int alen = a.length();
  int blen = b.length();

  if(alen == blen) return a < b;
  else return alen < blen;
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  vector<string> words;
  unordered_map<string, bool> isExist;

  for(int i = 0; i < N; i++)
  {
    string s;
    cin >> s;

    if(isExist[s]) continue;
    
    words.push_back(s);
    isExist[s] = true;
  }

  sort(words.begin(), words.end(), compare);

  for(string word : words)
  {
    cout << word << '\n';
  }

  return 0;
}