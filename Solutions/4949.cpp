#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  while(true)
  {
    string s;
    getline(cin, s);

    if(s == ".") break;

    stack<char> st;

    int flag = 0;

    for(char c : s)
    {
      if(c == '(')
      {
        st.push(c);
      }
      else if(c == ')')
      {
        if(st.empty())
        {
          flag = 1;
          break;
        }
        else
        {
          if(st.top() == '(')
          {
            st.pop();
          }
          else
          {
            flag = 1;
            break;
          }
        }
      }
      else if(c == '[')
      {
        st.push(c);
      }
      else if(c == ']')
      {
        if(st.empty())
        {
          flag = 1;
          break;
        }
        else
        {
          if(st.top() == '[')
          {
            st.pop();
          }
          else
          {
            flag = 1;
            break;
          }
        }
      }
    }    

    if(!st.empty()) flag = 1;

    if(flag == 1) cout << "no\n";
    else cout << "yes\n";
  }
  
  return 0;
}