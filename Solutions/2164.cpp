#include <iostream>
#include <queue>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  queue<int> cards;

  for(int i = 1; i <= N; i++)
  {
    cards.push(i);
  }

  while(!cards.empty())
  {
    if(cards.size() == 1) break;

    cards.pop();
    cards.push(cards.front());
    cards.pop();
  }

  cout << cards.front();
  
  return 0;
}