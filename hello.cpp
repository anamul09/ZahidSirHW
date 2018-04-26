#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c;
    cout<<"1.Current medication.\n2.New medication\n3.Formulary";
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            first();
        }
        else if(i==2)
        {
            second();
        }
        else
        {
            third();
        }

    }



}
