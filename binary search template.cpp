#include<iostream>
using namespace std;

template <class T>
void bS(T a[], int p)
{
    for (int i=0;i<p-1;i++)
        for (int j=p-1;i<j;j--)
            if (a[j]<a[j-1])
              swap(a[j],a[j-1]);
}

int biSea(int arr[], int l, int h)
{
   if (h>=l)
   {
        int m=l+(h - l)/2;
        if ((arr[m]==1)&&(arr[m-1]==0))
            return m;
        if (arr[m]==1)
            return biSea(arr, l, m-1);
        else if (arr[m]==0)
            return biSea(arr, m+1, h);
   }
   return -1;
}

int main()
{
    int i,j,c1=0,c2=0,k,n;
    cout<<"Enter length of array: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
      cout<<"Enter elements (0,1): "<<endl;
      cin>>j;
      if((j==0)||(j==1))
        {
          a[i]=j;
        }
      else
        {
         cout<<"Enter valid input "<<endl;
         i--;
        }
    }
    bS(a,n);
    cout<<"Sorted array: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    k = biSea(a,0,n-1);
    cout<<"no. of 0s: "<<k;
    return 0;
}
