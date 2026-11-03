#include <iostream>

using namespace std;

int gcd(int a, int b){
while(b!=0){
    int remainder=a%b;
    a=b;
    b=remainder;
}

return a;
}
int main(){

int a,b;
cout<<"Enter two nonnegative integer values:";
cin>>a>>b;
cout<<" The gcd of " <<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;

cout<<" The lcm of " <<a<<" and "<<b<<" is "<<a*b/gcd(a,b)<<endl;

return 0;

}
