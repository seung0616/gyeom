#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  unordered_set<string> words;

  for(int i = 0; i < N; i++)
  {
    string s;
    cin >> s;

    words.insert(s);
  }

  int cnt = 0;

  for(int i = 0; i < M; i++)
  {
    string s;
    cin >> s;

    cnt += words.count(s);
  }

  cout << cnt;

  return 0;
}