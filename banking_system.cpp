#include <iostream>
using namespace std;
/*Create a class to present a Bank Account .Include the following memeber  Data members -name of depositor,-account number,-types of account,- Blance amount in the account member function -to assign initial values to deposite an amount to withdraw an amount after checking the blance ,-to display name and blance .write a main function with menu option to tect the program .*/
/*The branch is main to the unicorn branch is like create a new branch (uSER dEFINED BRANCH)*/
class Bank_Account
{
    string Name;
    double ACnumber;
    string Typeaccount;
    double Balance = 1000;

public:
    void accAssinge()
    {
        cout << "Enter you name:=" ;
        cin >> Name;
        cout << "\n Enter your Account number=" ;
        cin >> ACnumber;
        cout << "\nEnter your account type=";
        cin >> Typeaccount;
         cout << "\n Inatial Balanace is 1000 Rs:"<<endl;
    }
     void Deposite()
     {
         int amount;
         cout << "Enter your deposite amount" << endl;
         cin >> amount;
         Balance += amount;
         cout << "\n Total balance :" << Balance<<"Rs" << endl;
//     }
//     void Withdraw()
//     {
//         int with1;
//         cout << "Enter your Withdraw amount" << endl;
//         cin >> with1;
//         if (Balance > with1 && Balance>500)
//         {

//             Balance -= with1;
//             cout << "Your abilable balance is:" << Balance<<"Rs" << endl;
//         }
//         else
//         {
//             cout << "Not avalable Enough amount" << endl;
//         }
//     }
    void display()
    {
        cout << "\n\n============================";
        cout << "\n Account number. :" << ACnumber;
        cout << "\n Name. : " << Name;
        cout << "\n Typeaccount of Acoun:" << Typeaccount;
        cout << "\n your total amount.:" << Balance<<"Rs";
    }
};

int main()
{
    Bank_Account b;
    int ch;
    cout << "\n Welcmome to SBI" << endl;
    while (1)
    {
        cout << "\n================================" << endl;
        cout << "Main manu" << endl;
        cout<<"==================================="<<endl;
        cout << "1. Account Detailas 1." << endl;
        cout << "2.Do you want to deposite Enter 2. :" << endl;
        cout << "3.Do you want to withdraw Enter 3 :" << endl;
        cout << "4.Do you want to rescipt your amout Enter 4:" << endl;
        cout << "5.exit Enter 5" << endl;
        cout << "\n \n Enter your option:-";
        cin >> ch;
        switch (ch)
        {
        case 1:
            b.accAssinge();
            break;
        case 2:
            b.Deposite();
            break;
        case 3:
            b.Withdraw();
            break;
        case 4:
            b.display();
            break;
        case 5:
            exit(1);
        }
    }
    return 0;
}
