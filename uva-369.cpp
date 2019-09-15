#include <iostream>
#include <iomanip>
using namespace std;
long double factorial (long double n)
{
    long double R= 1;
    for (long double i = 2; i <= n; i++)
    {
        R*= i;
    }
    return R;
}
int main ()
{
    long double m, n;
    while (cin >> m >> n&&m!=0&&n!=0)
    {
        long double R= (factorial(m))/(factorial(m-n)*factorial(n));
        cout << m << " things taken " << n << " at a time is " << fixed << setprecision(0) << R << " exactly." << endl;
    }
}
