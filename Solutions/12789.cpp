#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  queue<int> q;
  stack<int> st;

  for(int i = 0; i < N; i++)
  {
    int n;
    cin >> n;

    q.push(n);
  }

  int n = 1;
  int flag = 0;

  while(!q.empty() || !st.empty())
  {
    if(!q.empty() && !st.empty())
    {
      if(q.front() == n)
      {
        q.pop();
        n++;
      }
      else if(st.top() == n)
      {
        st.pop();
        n++;
      }
      else
      {
        st.push(q.front());
        q.pop();
      }
    }
    else if(st.empty())
    {
      if(q.front() == n) 
      {
        q.pop();
        n++;
      }
      else
      {
        st.push(q.front());
        q.pop();
      }
    }
    else if(q.empty())
    {
      if(st.top() == n) 
      {
        st.pop();
        n++;
      }
      else
      {
        flag = 1;
        break;
      }
    }
  }

  if(flag == 1) cout << "Sad\n";
  else cout << "Nice\n";
  
  return 0;
}