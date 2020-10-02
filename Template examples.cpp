#include<iostream>
using namespace std;

template <typename T>
T sum(T x, T y)
{
   return x+y;
}
template <typename T>
T sub(T x, T y)
{
   return x-y;
}
template <typename T>
T q(T x, T y)
{
   return x/y;
}
template <typename T>
T product(T x, T y)
{
   return x*y;
}
int main()
{
  cout << sum<int>(3, 7) << endl;
  cout << sub<double>(45.0, 7.0) << endl;
  cout << q<char>('1', '1') << endl;
  cout << product<int>(67,10) << endl;
  return 0;
}
