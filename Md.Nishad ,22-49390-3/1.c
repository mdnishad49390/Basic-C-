#include <iostream>

using namespace std;

int main()
{



     int a,b,c;
cout<< "Enter 1st number - ";
cin>>a;
cout<< "Enter 2nd number - ";
cin>>b;
cout<< "Enter 3rd number - ";
cin>>c;


if(a<b && a<c)

{

cout <<"Smallest Number is " <<a<<endl;

 if ( a % 2 == 0)
    cout << a << " is even"<<endl;
  else
    cout << a << " is odd"<<endl;

}

else if(b<a && b<c)

{

cout <<"Smallest Number is " <<b<<endl;
 if ( b % 2 == 0)
    cout << b << " is even"<<endl;
  else
    cout << b << " is odd"<<endl;

}

else

{
    cout<<"Smallest Number is "<<c<<endl;
     if ( c % 2 == 0)
    cout << c << " is even"<<endl;
  else
    cout << c << " is odd"<<endl;

}


if(a>b && a>c)

{

cout <<"Largest Number is " <<a<<endl;
 if ( a % 2 == 0)
    cout << a << " is even"<<endl;
  else
    cout << a << " is odd"<<endl;

}

else if(b>a && b>c)

{

cout <<"Largest Number is " <<b<<endl;
 if ( b % 2 == 0)
    cout << b << " is even"<<endl;
  else
    cout << b << " is odd"<<endl;

}

else

{
    cout<<"Largest Number is "<<c<<endl;
     if ( c % 2 == 0)
    cout << c << " is even"<<endl;
  else
    cout << c << " is odd"<<endl;

}
  return 0;
}
