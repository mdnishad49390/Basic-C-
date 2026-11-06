#include <iostream>

using namespace std;
class person{
private:
    string name;
    int age;
    string gender;
    public: void setinfo(string na,int ag,string gen)
    {name=na;
    age=ag;
    gender=gen;
    }
    void showinfo()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Age is "<<age<<endl;
        cout<<"Gender is "<<gender<<endl;
    }
};
class student: public person{
protected:
    double cgpa;
    string studentid;

public:
    student(double cgpa,string studentid);
    string department;
    void showinfo()//double cgpa,string studentid,string department)
    {cout<<"CGPA is "<<cgpa<<endl;
    cout<<"Student ID is "<<studentid<<endl;
    cout<<"Department is "<<department<<endl;
    }
    };
    class scholarship:public student
    {
    private:
        double percent;
    public:
        scholarship(double cgpa);
        bool eligible()
        {
        if (cgpa>=3.75)
        {
            return true;
        }
        return false;

        }
    };
    class teacher: public person
    {
    private:
        int salary;
        string employeeid;
        string faculty;
    public:
        void setemployeeid(int we,string are,string bang)
        {
            salary=we;
            employeeid=are;
            faculty=bang;
        }
        void showinfo()
        {
            cout<<"Faculty is "<<faculty<<endl;
            cout<<"Employee ID is "<<employeeid<<endl;
            cout<<"Faculty is "<<faculty<<endl;
        }
    };
    class teachingassistance:public student,public teacher
    {   public:
        int classhour;
        void showinfo()
        {
            cout<<"Class Hour is "<<classhour<<endl;
        }
    };
    class officer:public person
    {
    private:
        int workinghour;
        int overtime;
    public:
        officer(int workinghour);
        ~officer();
        double payment(int cost=1500)
        {
            return (cost*8)+(overtime*2000);
        }
    };



int main()
{
    person p101;
    p101.setinfo("Rony",66,"Male");
    p101.showinfo();
    cout<<endl;
    student s101;
    s101.showinfo(3.75,"22-**-","CSE");
    s101.setinfo("Habib",39,"Male")
    s101.showinfo();
    cout<<endl;
    scholarship s202(3.89,"22-**-","IPE",40.1);
    s202.setinfo("Biplop",45,"Male");
    s202.showinfo();
    teacher t101;
    t101.setinfo("Sallam",67,"Male")
   // t101.
   t101.setemployeeid("22-**-")
   t101.showinfo();
   cout<<endl;
   teachingassistance ta101;
   ta101.classhour=45;
    ta101.showinfo();
   officer f101;
   f101.setinfo("Zayed",45,"Male")
   f101.showinfo();

    return 0;
}
