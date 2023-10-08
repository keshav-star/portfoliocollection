//Author:keshav 
//lang:C++ 
 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec(10,0);

    int arr[]={0,2,5,3,6,3,1,5,7,7,8,4,5,6,7,8,9,5,3,5,7,8,4,5,4};

    for (int i = 0; i < 25; i++) vec[arr[i]]++;

    for(auto i:vec) cout<<i<<"\t";

    int minimum=0,maximum=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]>maximum) maximum=i;
        if(vec[i]<minimum) minimum = i;
    }
    cout<<"\nThe element occurred minimum times is:"<<minimum;
    cout<<"\nThe element occurred maximum times is:"<<maximum;
    
    return 0;
}