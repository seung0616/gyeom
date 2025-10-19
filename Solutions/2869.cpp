/*달팽이가 하루에 A-B씩 이동해서 어느날 V-B지점에 도달했다면 그날에는 이미 V에 도달했다는 뜻이다.
  따라서 V-B를 A-B로 나누어주고 나누어 떨어지지 않는다면 올림을 해준다.
  올림을 하는 이유는 V-B까지 도달하기 위해서 1.5일이 필요하다고 치면 1.5일이라는건 없기때문에
  올림을 해서 2일이 필요하다고 볼 수 있다.*/
#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long int A, B, V;
  cin >> A >> B >> V;

  long long int day = (V - B) / (A - B);
  
  if((V - B) % (A - B) != 0) day++;

  cout << day;

  return 0;
}