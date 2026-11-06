#include <iostream>
using namespace std;
class directory
{
protected:
    string personname;
    string dateofbirth;
public:
    void setPersonInfo(string name, string age)
    {
        personname = name;
        dateofbirth = age;
    }
    void displayInfo1()
    {
         cout << "Name is" << personname << endl;
         cout << "Date Of Birth is" << dateofbirth << endl;
    }
};
class nationaldirectory : public directory
{
protected:
    int personAge;
    string personCity;
public:
    void setPersonAge(int age)
    {
        personAge = age;
    }
    void setPersonCity(string city)
    {
        personCity = city;
    }
    void displayInfo2()
    {
        cout << "Age is" << personAge << endl;
        cout << "City is" << personCity << endl;
    }
};
class LocalDirectory : public nationaldirectory
{
protected:
    string personAddress;
    string personTelNo;
    string personLocalArea;
    double zipCode;
public:
    void setPersonAddress(string add)
    {
        personAddress = add;
    }
    void setPersonTelNo(string tel)
    {
        personTelNo = tel;
    }
    void setPersonLocalArea(string area)
    {
        personLocalArea = area;
    }
    void setPersonZipcode(double zc)
    {
        zipCode = zc;
    }
    void displayInfo3()
    {
        cout << "Address is"<< personAddress << endl;
        cout << "Phone number is" << personTelNo << endl;
        cout << "Local area is" << personLocalArea << endl;
        cout << "Post code is" << zipCode << endl;
    }

};
class Profession : public LocalDirectory
{
protected:
    string personProfession;
    string personInstitution;
    string personGrade;
    double personSalary;
public:
    void setPersonProfession(string prof)
    {
        personProfession = prof;
    }
    void setPersonInstitution(string inst)
    {
        personInstitution = inst;
    }
    void setPersonGrade(string Pgrade)
    {
        personGrade = Pgrade;
    }
    void setPersonSalary(double S)
    {
        personSalary = S;
    }
    void displayInfo4()
    {
        cout << "Profession is"<< personProfession << endl;
        cout << "Organization is" << personInstitution << endl;
        cout << "Pay grade is" << personGrade << endl;
        cout << "Salary is" << personSalary << endl;
    }

};
int main()
{
    Profession person;
    person.setPersonInfo("Pitresio"," 22-4-1987");
    person.setPersonAge( 56);
    person.setPersonCity("Tokiyo");
    person.setPersonAddress(" 34,");
    person.setPersonTelNo(" 88****56");
    person.setPersonLocalArea(" Luknaf Street");
    person.setPersonZipcode( 2100);
    person.setPersonProfession(" President");
    person.setPersonInstitution(" Labor Party");
    person.setPersonGrade(" Senior");
    person.setPersonSalary( 55000);
    person.displayInfo1();
    person.displayInfo2();
    person.displayInfo3();
    person.displayInfo4();
    return 0;
}
