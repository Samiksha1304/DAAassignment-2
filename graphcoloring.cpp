#include<bits/stdc++.h>

using namespace std;

int i,j,v,e;
vector<vector<int>> graph;
vector<int> color;

void graphColoring()
{
    color[0] = 0;

    for(i=1;i<v;i++)
    {
        color[i] = -1;
    }
    bool unused[v];

    for(i=0;i<v;i++)
    {
        unused[i]=0;
    }
    for(i=1;i<v;i++)
    {
        for(j=0;j<graph[i].size();j++)
        {
            if(color[graph[i][j]] != -1)
            {
                unused[color[graph[i][j]]] = true;
            }
        }
        int c;
        for(c=0;c<v;c++)
        {
            if(unused[c] == false)
            {
                break;
            }
        }
        color[i] = c;

        for(j=0;j<graph[i].size();j++)
        {
             if(color[graph[i][j]] != -1)
             {
                 unused[color[graph[i][j]]] = false;
             }
        }
    }
}

int main()
{
    cout<<"\n::::::::::::::Graph coloring:::::::::::::::\n\n";

    cout<<"Enter the number of Vertices : ";
    cin>>v;
    cout<<"Enter the number of Edges : ";
    cin>>e;
    cout<<"\n";


    //resize function will adjust the size of vectors according to the input

    graph.resize(v);
    color.resize(v);

    int x,y;
    for(i=0;i<e;i++)
    {
        cout<<"\nEnter the vertices connected to edge no. "<<i+1<<" :";
        cin>>x>>y;
        x--;
        y--;

        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    graphColoring();

    cout<<"\n";
    for(i=0;i<v;i++)
    {
        cout<<"Vertex "<<i+1<<" is coloured with "<<color[i]+1<<"\n";
    }
}
