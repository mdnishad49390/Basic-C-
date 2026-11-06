#include<iostream>
using namespace std;
class Order{
int orderID;
string deliveryLocation;
double discPercentage;
double price;
public:
Order(int Or_id,string delLoc,double discPerc,double Price)
{
 orderID=Or_id;
 deliveryLocation=delLoc;
 discPercentage=discPerc;
 price=Price;
}
double Get_discPercentage()
{
 return discPercentage;
}
void Set_discPercentage(double dPer)
{
 discPercentage=dPer;
}
string getDeliveryLocation()
{
return deliveryLocation;

}
void setDeliveryLocation(string dLoc)
{
  deliveryLocation=dLoc;
}
void showOrderDetails()
{  double deliveryCharge=50;
   cout<<"Order Details : "<<endl;
   cout<<"Order ID : "<<orderID<<endl;
   cout<<"Delivery Location : "<<deliveryLocation<<endl;
   cout<<"Order Price : "<<price<<endl;
   cout<<"Discount Percentage (%):"<<discPercentage<<endl;
   cout<<"Delivery Charge : "<<deliveryCharge<<endl;
   double totalPayble=price*((100-discPercentage)/100)+deliveryCharge;
   cout<<"Total Payable: "<<totalPayble<<endl ;

}
};
int main()
{
Order order1(006527462471,"su",30,500);
order1.showOrderDetails();
return 0;
}
