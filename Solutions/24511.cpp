/*자료구조가 stack일때에는 그냥 원소가 통과하기 때문에 없는걸로 생각한다.
  queue일때는 원소가 push되고 pop되는것을 반복하다보면 결국 queue의 마지막 원소가 출력된다.*/
#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  deque<int> dq;
  vector<int> A;

  for(int i = 0; i < N; i++)
  {
    int a;
    cin >> a;

    A.push_back(a);
  }

  for(int i = 0; i < N; i++)
  {
    int b;
    cin >> b;

    if(A[i] == 0) dq.push_back(b);
  }

  int M;
  cin >> M;

  while(M--)
  {
    int n;
    cin >> n;

    dq.push_front(n);
    cout << dq.back() << ' ';
    dq.pop_back();
  }
  
  return 0;
}