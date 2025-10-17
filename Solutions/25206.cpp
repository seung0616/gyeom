#include <iostream>
#include <string>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  double sumCredits = 0;
  double sum = 0;

  for(int i = 0; i < 20; i++)
  {
    string name, grade;
    double credit, gradePoint;

    cin >> name >> credit >> grade;

    if(grade == "A+") gradePoint = 45;
    else if(grade == "A0") gradePoint = 40;
    else if(grade == "B+") gradePoint = 35;
    else if(grade == "B0") gradePoint = 30;
    else if(grade == "C+") gradePoint = 25;
    else if(grade == "C0") gradePoint = 20;
    else if(grade == "D+") gradePoint = 15;
    else if(grade == "D0") gradePoint = 10;
    else if(grade == "F") gradePoint = 0;
    else if(grade == "P") continue;

    sumCredits += credit;
    sum += credit * gradePoint;
  }

  cout << sum / sumCredits / 10;

  return 0;
}