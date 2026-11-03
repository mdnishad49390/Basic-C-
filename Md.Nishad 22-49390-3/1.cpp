#include <iostream>

using namespace std;
int fact (int n){
int factorial=1;
for (int i=2; i<=n; i++){
    factorial=factorial*i;
}

return factorial;
}
int main(){
int n;
cout<<"Enter a number:";
cin>>n;
int ans=fact(n);
cout<<"the factorial of "<< n <<" is "<<ans<<endl;
int r;
    cout<<"Enter n value:";
    cin>>n;
    cout<<"Enter r value:";
    cin>>r;
    int nCr=fact(n)/(fact(n-r)*fact(r));
    cout<<"The combination or nCr is:"<<nCr<<endl;
    int nPr=fact(n)/(fact(n-r));
    cout<<"The permutation or nPr is:"<<nPr<<endl;

}
