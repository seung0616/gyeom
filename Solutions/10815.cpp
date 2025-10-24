#include <iostream>
#include <unordered_set>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  unordered_set<int> cards;

  for(int i = 0; i < N; i++)
  {
    int n;
    cin >> n;

    cards.insert(n);
  }

  int M; 
  cin >> M;

  for(int i = 0; i < M; i++)
  {
    int n;
    cin >> n;

    if(cards.count(n)) cout << 1 << ' ';
    else cout << 0 << ' ';
  }

  return 0;
}