#include <iostream>
using namespace std;

int main()
{
    int si, arr[] = {1, 29, 5, 3, -89, 6};
    si = sizeof(si);
    int temp = arr[0];
    for (int i = 0; i < si; i++)
    {

        if (temp < arr[i])
        {
            temp = arr[i];
        }
    }
    cout << temp;
}