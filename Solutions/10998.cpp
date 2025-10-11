#include <iostream>
using namespace std;

int main() 
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    double A, B;
    cin >> A >> B;
    
    cout.precision(10);
    cout << fixed;
    cout << A / B;

    return 0;
}