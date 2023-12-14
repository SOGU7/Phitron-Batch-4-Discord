#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max({a,b,c})<<endl;
    cout<<min(a,b)<<endl;
    cout<<min({a,b,c})<<endl;

    swap(a,b);

    cout<<a<<" "<<b;
    return 0;
}