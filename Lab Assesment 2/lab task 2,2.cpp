#include <iostream>
using namespace std;

class Mobile
{
    string OwnerName;
    int Number;
    int Balance;
    string OSName;
    bool LockStatus;


public:
    Mobile()
    {
        Balance=0;
    }
    Mobile(int a)
    {
        Balance=a;
    }
    ~Mobile() {}
    void setDetails(string A,int B,string D,bool E)
    {

        OwnerName=A;
        Number=B;
        OSName=D;
        LockStatus=E;


    }
    void ShowInfo()
    {

        cout<<"Mobile Owner Name :"<<OwnerName<<endl;
        cout<<"Mobile Number :"<<Number<<endl;
        cout<<"Mobile Balance :"<<Balance<<endl;
        cout<<"Mobile OSName :"<<OSName<<endl;
        cout<<"Mobile LockStatus :"<<LockStatus<<endl;
    }
    int Recharge(int a)
    {

        Balance+=a;
        return a;
    }
    double CallSomeone(int timeDuration)
    {
        int M=(timeDuration*0.5);
        Balance-=M;
        return M;
    }

};
int main()
{
    Mobile cus1,cus2;
    cus1.setDetails("wahid",01376476,"olive",false);
    cus1.Recharge(500);
    cus1.CallSomeone(150);
    cus1.ShowInfo();



    return 0;

}
