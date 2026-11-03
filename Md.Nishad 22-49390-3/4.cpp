#include <iostream>

using namespace std;

void swap(){
int x,y;
int *a,*b;
a=&x;
b=&y;
x=x-y;
y=x+y;
x=y-x;
}
int main(){
int a,b;
cout<<"Enter a number of x:";
cin>>a;
cout<<"Enter a number of y:";
cin>>b;
cout<<"Before swapping x is:"<<a<<"and y is:"<<b<<endl;
swap(a,b);
cout<<"After swapping y is:"<<a<<"and y is:"<<b<<endl;
return 0 ;
}
