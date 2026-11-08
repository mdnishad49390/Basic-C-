#include <iostream>
using namespace std;

class CustomerDetails
{

protected:
    string cusName = "name";
    string cusTelNum = "0000000";
    string cusNationalId = "000000000";

public:
    CustomerDetails() {}
    ~CustomerDetails() {}
    void setCusName(string name)
    {
        cusName = name;
    }
    void setCusTelNum(string num)
    {
        cusTelNum = num;
    }
    void setCusID(string id)
    {
        cusNationalId = id;
    }
    void displayCusDetails()
    {
        cout << "Customer's name: " << cusName << endl
             << "Customer's Phone: " << cusTelNum << endl
             << "Customer's ID no: " << cusNationalId << endl;
    }
};

class JourneyDetails
{

protected:
    string travelDate = "00/00/1900";
    string travelTo = "Bangladesh";
    string travelFrom = "Bangladesh";
    int distance = 0;

public:
    JourneyDetails() {}
    ~JourneyDetails() {}
    string setTravelDate(string date)
    {
        travelDate = date;
        return travelDate;
    }
    string setTravelTo(string trTo)
    {
        travelTo = trTo;
        return travelTo;
    }
    string setTravelFrom(string tfFr)
    {
        travelFrom = tfFr;
        return travelFrom;
    }
    int setDistance(int d)
    {
        distance = d;
        return distance;
    }
    void showJourneyDetails()
    {
        cout << "Journey Date: " << travelDate << endl
             << "Journey to: " << travelTo << endl
             << "Journey From: " << travelFrom << endl
             << "Journey Distance: " << distance << " km" << endl;
    }
};

class TicketIssue : public JourneyDetails, public CustomerDetails
{

protected:
    float ticketPrice = 0.00;
    float chrg = 0.00;

public:
    TicketIssue() {}
    ~TicketIssue() {}

    void printTicket()
    {
        if (distance <= 100 && distance >= 0)
        {
            chrg = 20 / 100.0;
        }
        else if (distance < 200 && distance > 100)
        {
            chrg = 10 / 100.0;
        }
        else
        {
            chrg = 0.00;
        }
        ticketPrice = 5.5 * distance;

        cout << "Per kilometer price = 5.5 taka" << endl
             << "Price before charge applied" << endl
             << ticketPrice << " taka" << endl
             << "After " << chrg << " % charge" << endl
             << ticketPrice + (ticketPrice * chrg) << " taka" << endl
             << "*****End of Ticket*****" << endl;
    }
};

int main()
{
    TicketIssue cus1, cus2;
    cus1.setCusName("Robin");
    cus1.setCusTelNum("015*****98");
    cus1.setCusID("197823456789");
    cus1.setTravelDate("07/02/2018");
    cus1.setTravelTo("Rangpur");
    cus1.setTravelFrom("Dhaka");
    cus1.setDistance(99);
    cus1.displayCusDetails();
    cus1.showJourneyDetails();
    cus1.printTicket();
    cout << endl;
    cus2.setCusName("Arif");
    cus2.setCusTelNum("017******898");
    cus2.setCusID("19782346789");
    cus2.setTravelDate("03/12/2019");
    cus2.setTravelTo("Rajshahi");
    cus2.setTravelFrom("Dhaka");
    cus2.setDistance(145);
    cus2.displayCusDetails();
    cus2.showJourneyDetails();
    cus2.printTicket();

    return 0;
}
