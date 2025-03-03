#include<bits/stdc++.h>
using namespace std;
void max_heap(){
    priority_queue<int>pq;
    pq.push(4);
    pq.push(7);
    pq.push(3);
    pq.push(6);
    pq.push(9);
    while(!pq.empty()){
        int q = pq.top();
        pq.pop();
        cout<< q << endl;
    }

}

void min_heap(){
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(4);
    pq.push(7);
    pq.push(3);
    pq.push(6);
    pq.push(9);
    while(!pq.empty()){
        int q = pq.top();
        pq.pop();
        cout<< q << endl;
    }
}

typedef pair<int,int> ipair;

// pair er first element er aspect a max heap hoi
void max_heap_pair(){
    priority_queue<ipair>pq;
    pq.push({4,0});
    pq.push({7,3});
    pq.push({3,2});
    pq.push({6,1});
    pq.push({9,8});
    while(!pq.empty()){
        int q = pq.top().first;
        int p = pq.top().second;
        pq.pop();
        cout<< q <<" "<<p << endl;
    }

}


// pair er first element er aspect a min heap hoi
void min_heap_pair(){
    // priority_queue<ipair,vector<ipair>,greater<ipair>>pq;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; // alternative apprach
    pq.push({4,0});
    pq.push({7,3});
    pq.push({3,2});
    pq.push({6,1});
    pq.push({9,8});
    while(!pq.empty()){
        int q = pq.top().first;
        int p = pq.top().second;
        pq.pop();
        cout<< q <<" "<<p << endl;
    }

}
int main(){
    cout<<"max heap: "<<endl;
    max_heap();
    cout<<"min heap: "<<endl;
    min_heap();
    cout<<"max heap pair: "<<endl;
    max_heap_pair();
     cout<<"min heap pair: "<<endl;
     min_heap_pair();

}