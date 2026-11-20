 # include <iostream>
    # include <iostream>
    #include <cmath>
    using namespace std;

    int main()
{
    int choice;

    cout << "Press + for addition" << endl;
    cout << "Press - for Subtraction" << endl;
    cout << "Press * for Multiplication" << endl;
    cout << "Press / for division" << endl;
    cout << "Press % for remiander" << endl;
    cout << "Press for round" << endl;
    cout << "Press L for log" << endl;
    cout << "Press ^ for power" << endl;



    char oper;
    float num1, num2;
    while(oper!='#')
    {
        cout <<"Use # to exit"<<endl;
        cin >> oper;

       char cc;
       cin>>cc;
    switch (cc)

{


    case '+':



            cout << "Enter two operans: "<<endl;
            cin >> num1 >> num2;
            cout << num1+num2<<endl;
            break;

    case '-':



            cout << "Enter two operands: "<<endl;
            cin >> num1 >> num2;
            cout << num1-num2<<endl;
            break;



    case '*':
    cout << "Enter two operands: "<<endl;
    cin >> num1 >> num2;
    cout << num1*num2<<endl;
    break;

    case '/':
    cout << "Enter two operands: "<<endl;
    cin >> num1 >> num2;
    cout << num1/num2<<endl;
    break;


    break;
    case '%':
    cout << "Enter two operands: "<<endl;
    cin >> num1 >> num2;
    cout << (int)num1/(int)num2<<endl;
    break;



    case 'sq':
    cout << "Enter one operands: "<<endl;
    cin >> num1 ;
    cout << (num1)<<endl;
    break;

    case 'R':
    cout << "Enter one operands: "<<endl;
    cin >> num1 ;
    cout << round(num1)<<endl;
    break;


    case 'L':
    cout << "Enter one operands: "<<endl;
    cin >> num1 ;
    cout << (num1)<<endl;
    break;

    cout << "Enter two operands: "<<endl;
    cin >> num1 >> num2;
    cout << pow(num1, num2)<<endl;
    break;


    default :
    cout << "Error operator is not correct"<<endl;
    break;
        }
    }
    return 0;

}
