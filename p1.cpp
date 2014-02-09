#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long nChoosek( long long n, long long k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    long long result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

int main() {
    long long n, r, a, b, ans;
    int t, i;
    for (i=0; i<t; i++){
        cin >> a >> b;
        n = a+b-2;
        r = a-1;
        ans = nChoosek( n, r );
        cout << ans << endl;
    }
    return 0;
}

