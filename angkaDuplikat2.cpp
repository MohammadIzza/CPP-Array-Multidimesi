#include <iostream>
using namespace std;

// menentukan angka duplikat pertama

int main()
{
    int angka[10] = {1, 3, 4, 5, 7, 4, 7, 8, 9, 9};
    int grup[10];
    for ( int i = 0 ; i < 10 ; i ++){
        grup[angka[i]] = 0;
    }
    for (int i = 0 ; i < 10 ; i ++){
        grup[angka[i]] += 1 ;

    }
    for ( int i = 0 ; i < 10 ; i ++){
        if (grup[angka[i]] > 1 )
        { 
            cout <<angka[i];
            break;
        }
    }

    return 0;
}