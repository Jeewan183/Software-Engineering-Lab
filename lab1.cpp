#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class sem_reg
{
    public:
    int user_id;
    string password;

    void registration()
    {
        do
        {
            cout<<"\tREGISTRATION";
            cout<<"\nEnter User ID: ";
            cin>>user_id;
            cout<<"Enter Password: ";
            cin>>password;
            if(password.length() >= 8)
            {
                cout<<"\nRegistration Complete\n";
                login();
            }
            else
            {
                cout<<"Password must be greater than 8 letters\n";
            }
        } while (password.length() < 8);
        

    }

    void login()
    {
        int id;
        string pass;
        char ch;
        do
        {
            cout<<"\n\tLOGIN PAGE";

            cout<<"\nEnter UserId: ";
            cin>>id;
            cout<<"Enter password: ";
            cin>>pass;
            if(id == user_id && pass == password)
            {
                cout<<"\nLogged In Successfully!!";
                break;
            }
            else
            {
                cout<<"\nInvalid UserId or Password";
                cout<<"\nDo you want to try again? (Yes=Y,No=N): ";
                cin>>ch;
            }
        } while (ch == 'Y');
    }


    void registration_form()
    {
        int x,n;
        string sub;
        string name,dept,course,email,contact;
        vector<string> subjects;
        cout<<"\n\n\tREGISTRATION FORM"; 
            cout<<"\nEnter name: ";
            cin>>name;
            cout<<"Enter dept: ";
            cin>>dept;
            cout<<"Enter course: ";
            cin>>course;
            cout<<"Enter email: ";
            cin>>email;
            cout<<"Enter contact: ";
            cin>>contact;
            cout<<"Enter number of subjects: ";
            cin>>n;
            for(int i=0;i<n;i++)
            {
                cout<<"Enter subject "<<(i+1)<<": ";
                cin>>sub;
                subjects.push_back(sub);
            }
    }

    void payment()
    {
        cout<<"\n\tPAYMENT";
        int fee_amount = 200000;
        cout<<"\nTotal Dues: "<<fee_amount;
        int Amount_Paid;
        cout<<"\nEnter the amount of fee you paid : ";
        cin>>Amount_Paid;
        
        if(Amount_Paid == fee_amount) 
        {
            cout<<"Registration Successful !!!"<<endl;
        }
        else
        {
            cout<<"Pay the remaining amount: "<<(fee_amount-Amount_Paid);
        }
    }

    void logout()
    {
        char ch;
        cout<<"\n\nDo you want to logout: (Yes:Y, No:N): ";
        cin>>ch;
        if(ch == 'Y')
        {
            cout<<"Logout Successfully";
        }
    }
};

int main()
{
    sem_reg ob;
    ob.registration();
    ob.registration_form();
    ob.payment();
    ob.logout();
}