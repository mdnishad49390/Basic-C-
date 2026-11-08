#include <iostream>
using namespace std;

class Workers
{
private:
    string name;
    int id = 0;

public:
    float payment;
    void set_info(string name, float payment)
    {
        id++;
        this->name = name;
        this->payment = payment;
    }

    void showinfo()
    {
        cout << "Employee id : " << id << endl;
        cout << "Employee name : " << name << endl;
        cout << "Basic Payment : " << payment << " Tk only" << endl;
    }
};
class Labor : public Workers
{
public:
    int Exhour;
    int fpayment;

    void totalincome(int Exhour)
    {
        showinfo();
        this->Exhour = Exhour;
        fpayment = payment + (Exhour * 200);
        cout << "Net income of workker is " << fpayment << " TK only" << endl;
    }
};
class Supplier : public Workers
{
public:
    float dpercentage = 5;
    float fpayment;
    int delayhour;

    void totalincome(int delayhour)
    {
        this->delayhour = delayhour;
        showinfo();
        fpayment = payment - (delayhour * dpercentage);
        cout << "Net income of vendor is " << fpayment << " Tk only";
    }
};
int main()
{
    Labor l1;
    l1.set_info("Nishad", 20000);
    l1.totalincome(5);
    Supplier s1;
    s1.set_info("Sadhin", 25000);
    s1.totalincome(5);
}





