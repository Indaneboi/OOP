#include<iostream>
using namespace std;
int kthsmall(int *a,int *b,int m,int n,int k)
{
    int c=0,sm=a[0],i=0,j=0;
    while(c<=k&&i<m&&j<n)
    {
        c++;
        if(sm<a[i])
        {
            sm=a[i];
            i++;
        }
        if(sm<b[j])
        {
            sm=b[j];
            j++;
        }
    }
    while(c<=k&&i<m)
    {
        c++;
        if(sm<a[i])
        {
            sm=a[i];
            i++;
        }
    }
    while(c<=k&&j<n)
    {
        c++;
        if(sm<b[j])
        {
            sm=b[j];
            j++;
        }
    }
    return(sm);
}
int main()
{
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8,10,12};
    cout<<kthsmall(a,b,5,6,3);
    return(0);
}
