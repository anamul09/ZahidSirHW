#include<iostream>
using namespace std;
int n;

void  Fuction_one()
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

        cout<<"\t1.If you wish to change \n\t2.no\n";
        cin>>n;
        if(n==1)
        {
            cout<<"It napa before and after dinner and breakfast.\n";
        }
        else
        {
            cout<<"continue as before";

        }
    }
    void  second_display()
    {

        cout<<"\t1.If you wish to modify \n\t2.You don't want to modify.\n";

        cout<<"\t1.If you wish to modify \n\t2.no\n";

        cin>>n;
        if(n==1)
        {
            cout<<"If you sick please contact with doctor.\n";
        }
        else
        {
            cout << "You will suffer in the long run.";
        }
    }
    void  third_display()
    {
        cout<<"\t1.If you wish to change \n\t2.no\n";
        cin>>n;
        if(n==1)
        {
            cout << "Change the formularity\n";
            cout << "Take new Formular as:\n";
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
                cout << "DayQuil take 2 times\n";
            }
            else if (n == 3)
            {
                cout << "NyQuil take 3 times before eating breakfast, dinner and launch.\n";
            }
        }
        else
        {
            cout<<"Nothing";

        }
    }
    int main()
    {
        cout << "\t\t\t\tA Prescription history : \n\n";
        char ch;
        do
        {
            cout<<"Enter your option"<<endl;
            cout<<"\t\t1.Current Medication\n";
            cout<<"\t\t2.New Medication\n";
            cout<<"\t\t3.Formulary\n";
            cin>>n;
            if(n==1)
            {
                Fuction_one();

            }
            if(n==2)
            {
                second_display();

            }
            if(n==3)
            {
                third_display();

            }
            cout << "\n\n\t\t\t\t\tDo you want to continue?" << endl;
            cout << " Enter 'y' or 'n'\n";
            cin >> ch;
        }
        while(ch != 'n');
    }
