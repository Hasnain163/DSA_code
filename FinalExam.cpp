#include<bits/stdc++.h> 
using namespace std; 
class Graph{ 
    int v; 
    list<pair<int,double>> *adj; 
    public: 
     Graph(int V){ 
        this->v = V; 
        adj = new list<pair<int,double>>[V]; 
    } 
 
    void addEdge(int u,int v,double p){ 
      adj[u].push_back(make_pair(v,p)); 
      adj[v].push_back(make_pair(u,p)); 
    } 
 
    void succPath(int s){ 
        priority_queue<pair<double,int>> pq; 
        int path[v]={0}; 
        vector<double> prob(v,0.0); 
        pq.push(make_pair(1.0,s)); 
        prob[s]=1.0; 
        while(!pq.empty()){ 
            int u = pq.top().second; 
            pq.pop(); 
            
            for(auto &neibhor : adj[u]){ 
                int v = neibhor.first; 
                double w = neibhor.second; 
 
                if(prob[v]<prob[u]*w){ 
                    path[v]=v; 
                    prob[v]=prob[u]*w; 
                    pq.push(make_pair(prob[v],v)); 
                } 
            } 
 
        } 
        for(int i=1;i<v;i++){ 
            cout<<"path "<< path[i-1]<< " to "<< path[i] 
<<endl; 
        } 
        cout << "0 island to 2 island highest success probality "<<prob[2] << endl; 
 
    } 
}; 
 
int main(){ 
    int V = 3; 
 
    Graph g(V); 
    g.addEdge(0,1,0.5); 
    g.addEdge(1,2,0.5); 
    g.addEdge(0,2,0.2); 
    g.succPath(0); 
    
return 0; 
} 