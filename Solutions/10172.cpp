/*문자열을 출력 할 때 \는 \\로, '는 \'로, "는 \"로 출력을 해야한다.*/
#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cout << '|' << '\\' << "_/|\n";
  cout << "|q p|   /}\n";
  cout << "( 0 )" << '\"' << '\"' << '\"' << '\\' << '\n';
  cout << '|' << '\"' << '^' << '\"' << "`    |\n";
  cout << "||_/=" << '\\' << '\\' << "__|";

  return 0;
}