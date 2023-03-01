
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,i,sum;

    for(i=0;i<t;i++)
    {
        cin>>n;
        getchar();

        if(n<=2){cout<<0<<"\n";}
        else{
            if(n%2==0)
            {
                sum=(n/2)-1;
            }
            else
                sum=n/2;


            cout<<sum<<"\n";
        }
    }


    return 0;
}

