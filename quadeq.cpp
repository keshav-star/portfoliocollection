// Author:keshav
// lang:C++

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, a, n;
    cin >> n;
    // int count = 0;
    for (int x = 1; x < n; x++)
    {
        for (int y = 1; y < n; y++)
        {
            a = x * x + 5 * x * y + 3 * y * y;
            int b = sqrt(a);
            if (__gcd(x, y) == 1)
            {
                if ((x + y) < n)
                {
                    if (b * b == a)
                        cout << x << " " << y << " " << a << endl;
                }
            }
        }
    }
    // cout<<count;
    return 0;
}