#include<iostream>
#include<queue>
#include<list>
#include<map>
using namespace std;
class graph
{
private:
    int v;
    list<int>*l;
public:
    graph(int v)
    {
        int V=v;
        l=new list<int>[V];
    }
    void add(int a,int b)
    {
        l[a].push_back(b);
        l[b].push_back(a);
    }
    void print()
    {
        for(int i=0;i<v;i++)
        {
            cout<<i<<"->";
            for(int ver:l[i])
            {
                cout<<ver<<",";
            }
            cout<<endl;
        }
    }
};
int main()
{
    graph g(5);
    g.add(0,1);
    g.add(0,4);
    g.add(4,3);
    g.add(1,2);
    g.add(1,4);
    g.add(2,3);
    g.add(1,3);
    g.print();

}
