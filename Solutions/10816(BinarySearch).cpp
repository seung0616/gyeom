/*lower_bound와 upper_bound는 이진탐색을 이용한다.
  cards를 정렬 한 후에 이진탐색을 두번 해서 target이 있는 범위의 시작과 끝을 구해서 
  target의 개수를 구한다.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  vector<int> cards;

  for(int i = 0; i < N; i++)
  {
    int n;
    cin >> n;

    cards.push_back(n);
  }

  sort(cards.begin(), cards.end());

  int M;
  cin >> M;

  vector<int> targets;

  for(int i = 0; i < M; i++)
  {
    int n;
    cin >> n;
    
    targets.push_back(n);
  }

  for(int target : targets)
  {
    int cnt = upper_bound(cards.begin(), cards.end(), target) - lower_bound(cards.begin(), cards.end(), target);
    cout << cnt << ' ';
  }

  return 0;
}