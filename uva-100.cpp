#include <cstdio>
#include <algorithm>
#define long long LL

using namespace std;

int main ()
{
    int i, j;

    while ( scanf ("%d %d", &i, &j) != EOF ) {

        int temp_i = i;
        int temp_j = j;

        if ( i > j ) swap (i, j);

        int m = 0;
        int cycle_length;

        while ( i <= j ) {
            unsigned int n = i;
            cycle_length = 1;

            while ( n != 1 ) {
                if ( n % 2 == 1 ) n = 3 * n + 1;
                else n /= 2;
                cycle_length++;
            }

            if ( cycle_length > m)
                m = cycle_length;

            i++;
        }

        printf ("%d %d %d\n", temp_i, temp_j, m);
    }

    return 0;
}
