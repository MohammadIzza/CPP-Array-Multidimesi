#include <iostream>
using namespace std;
// menentukan angka yang tidak ada dalam urutan array
int main()
{
    int arr[4] = {4, 3, 5, 1};
    int n= sizeof(arr)/sizeof(arr[0]);
    int max = n +1;
    int total = (max*(max+1))/2;
    for (int i = 0; i < n; i++)
    {
        total= total- arr[i];
    }
    cout << "angka yang hilang adalah = " << total<< endl;
    return 0;
}