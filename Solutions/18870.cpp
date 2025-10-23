/*lower_bound를 사용함
  지정한 범위에서 특정 요소가 몇번째에 처음 존재하는지 그 iterator를 반환하는 함수*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  unordered_map<int, bool> m;
  vector<int> X;
  vector<int> X2;

  for(int i = 0; i < N; i++)
  {
    int n;
    cin >> n;

    if(m[n]) continue;;
    
    X.push_back(n);
    X2.push_back(n);
  }

  sort(X.begin(),X.end());

  for(int x : X2)
  {
    cout << lower_bound(X.begin(), X.end(), x) - X.begin() << ' ';
  }

  return 0;
}