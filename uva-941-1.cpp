#include<bits/stdc++.h>

#define Inf 2147483647
#define Pi acos(-1.0)
#define N 10000 + 10
#define LL long long
#define F(i, n) for( int i = (0); i < (n); i++ )
#define Fs(i, sz) for( size_t i = 0; i < sz.size (); i++ )
#define Set(a, s) memset(a, s, sizeof (a))
inline LL Power(int b, int p) { LL r = 1; for ( int i = 1; i <= p; i++ ) r *= b; return r; }

using namespace std;

LL fact(int len) {
    if (len == 0 || len == 1) return 1;
    LL ret = 1;
    for ( int i = 2; i <= len; i++ ) {
        ret *= i;
    }
    return ret;
}

string recur(string inp, int len, LL target) {
    if (len == 1) return inp;
    LL unit = fact(len - 1);
    int extractedCharPos = (int) ((target - 1) / unit);
    char extractedChar = inp [extractedCharPos];
    inp.erase(inp.begin() + extractedCharPos);
    return extractedChar + recur(inp, len - 1, target % unit == 0 ? unit : target % unit);
}

int main ()
{
    int testCases;

    scanf ("%d", &testCases);

    while (testCases--) {
        string input;
        LL target;

        cin >> input >> target;

        sort(input.begin(), input.end());

        cout << recur(input, (int) input.size(), target  + 1) << endl;

    }


    return 0;
}
