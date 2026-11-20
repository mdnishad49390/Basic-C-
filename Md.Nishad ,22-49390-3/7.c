
#include <iostream>

using namespace std;

int main()

{
  int x=2,y,z=4,a;
  y=(++x + ++x + ++x);
  cout<<"the sum of y is :"<<y<<endl;
  a=(--z + x++ - --x);
  cout<<"the sum of a is :"<<a<<endl;

    return 0;
}
