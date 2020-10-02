#include<iostream>
using namespace std;

template<typename T>
T les(T x, T y)
{
    return (x<y)?x:y;
}

template<typename T>
T grt(T x, T y)
{
    return (x>y)?x:y;
}

int main()
{
    int i,l;
    cout<<" Enter two numbers: ";
    cin>>i>>l;
    cout << " The greater number is: " << grt<int>(i,l)<< endl;
    cout << les<int>(3, 7) << endl;
    cout << grt<double>(45.0, 7.0) << endl;
    cout << les<char>('a', 'z') << endl;
    cout << grt<int>(67,10) << endl;
    return 0;
}
