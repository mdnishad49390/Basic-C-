#include <iostream>

using namespace std;

class Father{
public:
    Father(){
        cout<<"constructor of father"<<endl;
    }
    ~Father(){
        cout<<"destructor of father"<<endl;
    }
};
class Mother : public Father{
public:
    Mother(){
        cout<<"constructor of Mother"<<endl;
    }
    ~Mother(){
        cout<<"destructor of Mother"<<endl;
    }
};
class Teacher: public Mother{
public:
    Teacher(){
        cout<<"constructor of Teacher"<<endl;
    }
    ~Teacher(){
        cout<<"destructor of Teacher"<<endl;
    }
};

class Students : public Teacher{

public:
    Students(){
        cout<<"we are in constructor"<<endl;
    }
    ~Students(){
        cout<<"We are in destructor"<<endl;
    }

};
int main()
{
    Students s1;
    Students s2;
    return 0;
}
