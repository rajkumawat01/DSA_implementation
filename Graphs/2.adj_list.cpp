//This code will display linked list
/*
    linked list will represent for which
    vertices the edges exist wrt to head
    node which is ref vertex or vertex for
    which we are finding the vertices connected
*/

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void displayAdjList(list<int> adj_list[], int v)
{
    for(int i=0; i<v; i++)
    {
        cout << i << "---->" ;
        list<int> :: iterator it;
        for(it=adj_list[i].begin(); it!=adj_list[i].end(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}

void add_edge(list<int> adj_list[], int u, int v)
{
    adj_list[u].push_back(v);
    adj_list[v].push_back(u);
}

main(int argc, char* argv[])
{
    int v = 6;
    list<int> adj_list[v];
    add_edge(adj_list,0,4);
    add_edge(adj_list,0,3);
    add_edge(adj_list,1,2);
    add_edge(adj_list,1,4);
    add_edge(adj_list,1,5);
    add_edge(adj_list,2,3);
    add_edge(adj_list,2,5);
    add_edge(adj_list,5,3);
    add_edge(adj_list,5,4);
    displayAdjList(adj_list,v);
}
