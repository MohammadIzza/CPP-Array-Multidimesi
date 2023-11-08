#include <iostream>
using namespace std;

// menentukan angka duplikat pertama

int main()
{
    int arr[10] = {1, 3, 4, 5, 7, 4, 7, 8, 9, 9};
    int  i, j, angka_found = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
               angka_found = arr[i];
                break;
            }
        }
        if (angka_found > 0 ){
            break;
        }
    }
    cout << " found " << angka_found ; 
    return 0;
}