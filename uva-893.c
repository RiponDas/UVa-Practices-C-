#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <ctime>

#define Inf 2147483647
#define Pi acos(-1.0)
#define N 1000000
#define LL long long
#define F(i, n) for( int i = (0); i < (n); i++ )
#define Fs(i, sz) for( size_t i = 0; i < sz.size (); i++ )
#define Set(a, s) memset(a, s, sizeof (a))
inline LL Power(int b, int p) { LL r = 1; for ( int i = 1; i <= p; i++ ) r *= b; return r; }

using namespace std;

int dayInMonths [] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeapYear(int year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}


int countDays(int day, int month, int year) {

    int counter = 0;

    for ( int i = 1; i < year; i++ ) {
        counter += (isLeapYear(i) ? 366 : 365);
    }

    for ( int i = 1; i < month; i++ ) {
        counter += dayInMonths [i - 1];
    }

    counter += day;

    if (month > 2 && isLeapYear(year)) counter++;

    return counter;
}

void printOutput(int days) {

    int year = 1;
    int month = 1;

    while(days >= 365) {
        days -= (isLeapYear(year) ? 366 : 365);

        if (days <= 0) {
            days += (isLeapYear(year) ? 366 : 365);
            break;
        }

        year++;
    }

    if (days) {

        if (isLeapYear(year)) dayInMonths [1]++;

        while (days > dayInMonths [month - 1]) {
            days -= dayInMonths [month - 1];
            month++;
        }
    }

    printf ("%d %d %d\n", days, month, year);

}

int main ()
{
    int futureDays;
    int day;
    int month;
    int year;

    while (scanf ("%d %d %d %d", &futureDays, &day, &month, &year)) {
        if ( futureDays == 0 && day == 0 && month == 0 && year == 0 ) break;

        dayInMonths [1] = 28;

        int totalNumberOfDays = countDays(day, month, year);
//        printf ("days: %d\n", totalNumberOfDays);
        totalNumberOfDays += futureDays;
        printOutput(totalNumberOfDays);
    }

    return 0;
}
