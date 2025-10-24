/*함수에 매개변수로 수정이 필요없는 컨테이너를 넘길때는 const &로 넘기기*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int BinarySearch(const vector<int>& v, int toFind, int start, int end)
{
  while(start <= end)
  {
    int middle = (start + end) / 2;

    if(v[middle] == toFind)
    {
      return 1;
    }
    else if(v[middle] < toFind)
    {
      start = middle + 1;
      continue;
    }
    else
    {
      end = middle - 1;
      continue;;
    }
  }

  return 0;
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  vector<int> cards(N);

  for(int i = 0; i < N; i++)
  {
    cin >> cards[i];
  }

  sort(cards.begin(), cards.end());

  int M; 
  cin >> M;

  for(int i = 0; i < M; i++)
  {
    int n;
    cin >> n;

    cout << BinarySearch(cards, n, 0, N - 1) << ' ';
  }

  return 0;
}