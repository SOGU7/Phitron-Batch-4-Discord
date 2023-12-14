#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    //scanf("%d",&n);
    cin>>n;
    // if(n == 5)
    //     cout<<"It is five";
    // else
    //     cout<<"It is not five";

    //(condition)?("true hole ki operation") :("false hole ki operation")
    (n > 0 || n%5 == 0) ? cout<<"It is five":cout<<"It is not five";

    return 0;
}