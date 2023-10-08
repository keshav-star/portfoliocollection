// Author:keshav
// lang:C++

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    bool palindrome=true;
    int i=0,j=s.length()-1;
    while(i<j)
    {
        if(s[i]!=s[j]) {
            palindrome = false;
            break;
        }
        i++;
        j--;
    }
    palindrome?cout<<"yes":cout<<"no";
    return 0;
}