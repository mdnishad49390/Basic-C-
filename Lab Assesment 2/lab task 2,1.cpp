#include <iostream>
using namespace std;

class Account
{
    string AccountName;
    string AccountNo;
    int Balance;
    string AccountType;
public:
    void setAccountDetails(string A,string B,string C)
    {
        AccountName=A;
        AccountNo=B;
        AccountType=C;
    }

    Account()
    {
        Balance=0;
    }
    ~Account() {}
    Account(int a)
    {
        Balance=a;
    }
    int deposit;
    int withdraw;
    int Deposit(int numd)
    {
        deposit=numd;
        Balance+=deposit;
        return deposit;
    }
    int Withdraw(int numw)
    {
        withdraw=numw;
        Balance-=withdraw;
        return withdraw;
    }
	Account transferBalance(int tbalance,Account *A2)
	{
	    if (Balance > tbalance)
	    {
	        Balance -= tbalance;
	        (*A2).Balance += tbalance;
	    }
	    else
	    {
	        cout<<endl
	            <<"Sorry! Transfer failed! Reason: Insufficient Balance."
	            <<endl;
	    }
	    return *A2;
	};
    void AccountDetails()
    {
        cout<<"Account Name :"<<AccountName<<endl;
        cout<<"Account NO :"<<AccountNo<<endl;
        cout<<"Balance :"<<Balance<<endl;
        cout<<"Account Type :"<<AccountType<<endl;

    }

};

int main()
{
    Account A1;
    int tbalance;

    A1.setAccountDetails("Tarek","27546561","VIP");
    A1.Deposit(2000);
    A1.Withdraw(1000);
    A1.AccountDetails();
    cout<<endl;
    Account A2(1000);
    A2.setAccountDetails("Sazzad","20237660","SUPER-VIP");
    A2.Deposit(3000);
    A2.Withdraw(1000);
    A2.AccountDetails();



    cout<<"Enter total amount which you want to transfer : ";
    cin>>tbalance;
	A2 = A1.transferBalance(tbalance,&A2);
	A2.AccountDetails();
	A1.AccountDetails();





    return 0;

}
