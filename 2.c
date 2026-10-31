#include <iostream>
using namespace std;

int largest(int arr[], int n)
{

    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}
int smallest(int arr[], int n)
{

    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];

    return min;
}
double average(int arr[], int n)
{
    int sum = 0;


    return (double)sum / n;
}

int search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main()
{
    int i, n, x;
    int arr[100];

    cout << "Enter total number of elements(1 to 100): ";
    cin >> n;
    cout << endl;

    for (i = 0; i < n; ++i)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "Largest in given array is " << largest(arr, n) << endl;

    cout << "Smallest in given array is " << smallest(arr, n) << endl;
    cout << "Average value in given array is " << average(arr, n) << endl;

    cout << "Enter a number to search in the array : ";
    cin >> x;

    int result = search(arr, n, x);
    (result == -1) ? cout << "Element is not present in array" << endl : cout << "Element is present at index " << result << endl;

    return 0;
}
