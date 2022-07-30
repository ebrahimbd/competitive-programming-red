#include<bits/stdc++.h>
#define ll   long long

#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

const int N=1e5+10;
vector <int>g[N];

void insert_graph(vector <int> g[], int edge){
    for(int i=0; i<edge; i++){
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
}

void print_graph(vector <int> g[], int vertex){
    cout<<endl<<endl;
    for(int i=1; i<=vertex; i++){
        cout<<"["<<i<<"]";
        for(int j=0; j<size(g[i]); j++){
            cout<<"->["<<g[i][j]<<"]";
        }cout<<endl;
    }
}

bool vis[N];

void dfs(int vertex){
    if (vis[vertex]){
        cout<<"visit node "<<vertex <<" is true so return "<<"parent node"<<endl;
        return;
    }
    vis[vertex]=true;
    for(int child : g[vertex]){
    cout<<"visit node-"<<vertex<<"-child->"<<child<<"<-node  so call  "<<"dfs("<<child<<")"<<endl;
        dfs(child);
    }
}

int main(){
    fastread();
    int vertex, edge;
    cin>>vertex>>edge;
    insert_graph(g, edge);
    print_graph(g, vertex);
    cout<<endl;
    dfs(1); 
    cout<<endl; 

    return 0;
}
