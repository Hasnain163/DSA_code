#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> ipair;
class Graph{

    int V;
    list<ipair> *adj; //same list<pair<int,int>> *adj;
   
    public:
          Graph(int V);  // constructor

          void addedge(int u,int v,int w);
          void shortestPath(int s);


};

// constructor 

Graph::Graph(int V){
    this->V =V;
    adj = new list<ipair>[V];
}

void Graph::addedge(int u,int v,int w){
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w)); // for undirected graph like 'a to b also b to a' 
  
}

void Graph:: shortestPath(int s){

 priority_queue<ipair,vector<ipair>,greater<ipair>> pq; // for min heap and for double (pair) value like {0,0}, {0,1}etc

 vector<int> dis(V,INT_MAX);

 pq.push(make_pair(0,s));
 dis[s] = 0;

 while(!pq.empty()){
    int u = pq.top().second; // taken node from queue 
    pq.pop();

    for(auto &neighbor : adj[u]){   // node er edjacent node
        int v= neighbor.first;          // adj list a (node/vertex, weight)
        int w = neighbor.second;

      // relexation part
        if(dis[v]> dis[u]+w){
            dis[v]= dis[u]+w;
            pq.push(make_pair(dis[v],v));// queue modhe pair(distnace,node/vertex)
        }

    }
 }

 cout << "Shortest Path from source to destination :" << endl ;

 for(int i =0 ; i<V ;i++){
    cout<< i <<" " << dis[i] << endl ;
 }
  

}
int main(){
    int V = 9;
    Graph g(V); 
    g.addedge(0,1,4);// (source,destination, weight)
    g.addedge(0,7,8);
    g.addedge(1,2,8);
    g.addedge(1,7,11);
    g.addedge(2,3,7);
    g.addedge(2,8,2);
    g.addedge(2,5,4);
    g.addedge(3,4,9);
    g.addedge(3,5,14);
    g.addedge(4,5,10);
    g.addedge(5,6,2);
    g.addedge(6,7,1);
    g.addedge(6,8,6);
    g.addedge(7,8,7);

    g.shortestPath(0);


}