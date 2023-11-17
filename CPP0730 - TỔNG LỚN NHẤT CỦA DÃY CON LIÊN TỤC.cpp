#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void TestCase()
{
    int n;
    scanf("%d", &n);
    int isNegative = 1;
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        if (a[i] > 0)
            isNegative = 0;
    }

    if (isNegative) {
        int maxRes = a[0];
        for(int i = 1; i < n; i++)
        {
            if(a[i] > maxRes) maxRes = a[i];
        }
        // cout << *max_element(a, a + n) << endl;
        printf("%d\n", maxRes);
        return;
    }

    long long sum = 0;
    long long res = a[0];
    for (int i = 0; i < n; ++i) {
        if (sum + a[i] < 0)
            sum = 0;
        else {
            sum += a[i];
            res = fmax(res, sum);
        }
    }
    //cout << res << endl;
    printf("%lld\n", res);
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--) {
        TestCase();
    }
    return 0;
}