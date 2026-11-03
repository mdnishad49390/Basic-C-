#include <iostream>
using namespace std;

void primeInRange(int R)
{
    int L=1;
    int flag;

    for (int i = L; i <= R; i++) {

        if (i == 1 || i == 0)
            continue;

        flag = 1;

        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            cout << i << " ";
    }
}

int main()
{


    primeInRange(25);

    return 0;
}
