#include <iostream>
#include <stack>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  stack<int> st;

  while(N--)
  {
    int n;
    cin >> n;

    if(n == 1)
    {
      int X;
      cin >> X;

      st.push(X);
    }
    else if(n == 2)
    {
      if(st.empty())
      {
        cout << -1 << '\n';
      }
      else
      {
        cout << st.top() << '\n';
        st.pop();
      }
    }
    else if(n == 3)
    {
      cout << st.size() << '\n';
    }
    else if(n == 4)
    {
      if(st.empty())
      {
        cout << 1 << '\n';
      }
      else
      {
        cout << 0 << '\n';
      }
    }
    else if(n == 5)
    {
      if(st.empty())
      {
        cout << -1 << '\n';
      }
      else
      {
        cout << st.top() << '\n';
      }
    }
  }

  return 0;
}