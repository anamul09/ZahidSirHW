#include <bits/stdc++.h>        //header file
using namespace std;

int n;

///first Function
void  First_function()
{
    cout<<"\t1.If I want to change \n\t2.If I don't want to change.\n";
    cin>>n;
    if(n==1)
    {
        cout<<"It Seclo before dinner and breakfast.\n";
    }
    else
    {
        cout<<"Do the same things.";
    }
}
///Second Function
void  second_function()
{
    cout<<"\t1.If you wish to modify \n\t2.You don't want to modify.\n";
    cin>>n;
    if(n==1)
    {
        cout<<"If you ill early contact with doctor.\n";
    }
    else
    {
        cout << "You will suffer in the long run.";
    }
}
///Third Function
void  third_function()
{
    cout<<"\t1.If you wish to change \n\t2.no change\n";
    cin>>n;
    if(n==1)
    {
        cout << "\tChange the Formularity\n";
        cout << "\tTake new Formular as:\n";
        cout << "\t\t1.Sudfed\n";
        cout << "\t\t2.DayQuil\n";
        cout << "\t\t3.NyQuil\n";
        cin >> n;
        if(n == 1)
        {
            cout << "Take this medicine for  cold\n";
        }
        else if (n == 2)
        {
            cout << "DayQuil take 2 times in a day.\n";
        }
        else if (n == 3)
        {
            cout << "NyQuil take 3 times before eating breakfast,  after dinner and before launch.\n";
        }
    }
    else
    {
        cout<<"Nothing";

    }
}

///Main Function
int main()
{
    cout << "\t\t\t\tA prescribing medication story \n\n";
    char ch;
    do
    {
        cout<<"Enter your option"<<endl;
        cout<<"\t\t1.Current Medication\n";
        cout<<"\t\t2.New Medication\n";
        cout<<"\t\t3.Formulary\n";
        cin>>n;
        switch(n)
        {
        case 1:
            First_function();
            break;
        case 2:
            second_function();
            break;
        case 3:
            third_function();
            break;
        }
        cout << "\n\n\t\t\t\t\tDo you want to continue?" << endl;
        cout << " \n Enter 'y' or 'n'\n";
        cin >> ch;
    }while(ch != 'n');

    return 0;
}
