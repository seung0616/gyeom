#include <iostream>
#include <deque>
using namespace std;

struct Node
{
  int idx;
  int num;
};

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  deque<Node> dq;

  for(int i = 1; i <= N; i++)
  {
    int n;
    cin >> n;

    dq.push_back({i, n});
  }

  while(!dq.empty())
  {
    Node cur = dq.front();
    dq.pop_front();

    cout << cur.idx << ' ';

    if(cur.num < 0)
    {
      for(int i = 0; i < cur.num * -1; i++)
      {
        dq.push_front(dq.back());
        dq.pop_back();
      }
    }
    else
    {
      for(int i = 0; i < cur.num - 1; i++)
      {
        dq.push_back(dq.front());
        dq.pop_front();
      }
    }
  }
  
  return 0;
}