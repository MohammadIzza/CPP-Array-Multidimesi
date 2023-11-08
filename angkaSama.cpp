#include <iostream>
using namespace std;

int main()
{
    int angka[5] = {1, 2, 1, 4, 5};
    // mencari apakah angka input ada di dalam array
    int n;
    cout << " masukkan angka " << endl;
    cin >> n ;
    for (int i = 0; i < 5; i++)
    {
        if (angka[i] != n)
        {
            if (angka[i] == angka[4])
            {
                cout << "angak tidak ada di dalam array" << endl;
            }
        }
        else {
        cout << "angka ada di dalam array" << endl ;
        break; // gunakan break untuk menghentikan proses
    }
    }
    return 0;
}