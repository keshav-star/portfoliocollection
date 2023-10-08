// Author:keshav
// lang:C++

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the number"<<endl;
    cin >> n;
    int number = n;
    string s = to_string(n);
    int len = s.length();
    int num = 0;
    while (n != 0)
    {
        num = num + pow(n % 10, len);
        // cout<<num<<endl;
        n = n / 10;
    }
    if (num == number)
        cout << "Given Number is Armstrong Number";
    else
        cout << "Given Number is not Armstrong Number";
    return 0;
}