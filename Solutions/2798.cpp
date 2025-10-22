#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> cards;
int result = -1;

void blackJack(int level, int current, int sum)
{
  if(level == 3)
  {
    result = max(result, sum);
    return;
  }

  for(int i = current + 1; i < N; i++)
  {
    if(sum + cards[i] > M) continue;

    blackJack(level + 1, i, sum + cards[i]);
  }
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
    
  cin >> N >> M;

  for(int i = 0; i < N; i++)
  {
    int n;
    cin >> n;

    cards.push_back(n);
  }

  blackJack(0, 0, 0);

  cout << result;

  return 0;
}