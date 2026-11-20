#include <iostream>

using namespace std;

int main()
{
    int age,month,days,hour,minutes,seconds;
  cout<<"enter the number of your age:"<<endl;
  cin>>age;
  month=age*12;
  cout<<"the age in month is :"<<month<<endl;
  days=age*365;
  cout<<"the age in days is:"<<days<<endl;
  hour=days*24;
  cout<<"the age in hour is :"<<hour<<endl;
  minutes=hour*60;
  cout<<"the age in minutes is:"<<minutes<<endl;
  seconds=minutes*60;
  cout<<"the age in seconds is :"<<seconds<<endl;
return 0;
}
