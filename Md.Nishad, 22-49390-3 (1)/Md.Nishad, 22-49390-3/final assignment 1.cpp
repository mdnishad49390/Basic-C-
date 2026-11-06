#include <iostream>
using namespace std;
class employee{
 public:
int id;
char name[20];
int employee_payment = 0;
int vendor_payment;
int employee_hrs = 0;
int vendor_delay = 0;
int sal = 0;
 int sal1 = 0;
void showinfo()  //employee function
{
cout<<"Enter employee's name : ";
cin>>name;
cout<<"Enter employee's id : ";
cin>>id;
cout<<"Enter employee's salary : ";
cin>>employee_payment;
 cout<<"Enter employee's working hours : ";
cin>>employee_hrs;
cout<<"Enter vendor salary : " ;
cin>>vendor_payment;
 cout<<"Enter vendor delivery delay : ";
cin>>vendor_delay;
cout<<endl;
cout<<"**************"<<endl;
cout<<"Employee's name : "<<name<<endl;
cout<<"Employee's id :" <<id<<endl;

   if(employee_hrs>8)
   {
       sal = employee_payment + 200;
       cout<<"Employee Extra Hour Pay with salary : "<<sal<<"TK"<<endl;
   }
  else
  {
       cout<<"Employee salary : " <<employee_payment<<"TK"<<endl;
  }
}
};
class vendor : public employee{
    public:
    void total_income()
    {
         if(vendor_delay>8)
   {
       sal1 = ((vendor_payment*100)/vendor_payment);
       cout<<"The vendor salary deducted percentage due to delay in delivery : "<<sal1<<"TK"<<endl;
   }
  else
  {
      cout<<"Vendor salary : "<<vendor_payment<<"TK"<<endl;
  }
    }
};

int main()
{
    vendor v1;
    v1.showinfo();
    v1.total_income();
    return 0;
}
