#include <iostream>
using namespace std;

template <class T>
void bS(T a[], int p)
{
    for (int i = 0; i < p - 1; i++)
        for (int j = p - 1; i < j; j--)
            if (a[j] < a[j - 1])
              swap(a[j], a[j - 1]);
}

int main()
{
    int i,j,n;
    cout<<" Enter length of array: ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bS(a, n);

    cout << " Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

  return 0;
}
