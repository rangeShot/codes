// problem link: https://www.spoj.com/problems/MST/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
struct edges{
    ll weight;
    ll source;
    ll dest;
};
 
bool acWeight(edges a, edges b){
    return a.weight<b.weight;
}
vector<ll> parent;
 
ll get_id(ll node){
    if(node!=parent[node]){
        ll temp=get_id(parent[node]);
        parent[node]=temp;
        return temp;
    }
    return node;
}
 
void merge(ll node_1, ll node_2){
    ll id_1=get_id(node_1);
    ll id_2=get_id(node_2);
    if( id_1 != id_2 ){
        parent[id_2] = id_1;
    }
    return;
}
 
signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll no_of_nodes, no_of_edges;
    cin>> no_of_nodes >> no_of_edges;
    for(ll i=0;i<no_of_nodes;i++)parent.push_back(i);
    vector< edges > v(no_of_edges);
    for(ll i=0;i<no_of_edges;i++){
        cin>>v[i].source >> v[i].dest >> v[i].weight;
        v[i].source--;
        v[i].dest--;
    }
    sort(v.begin(),v.end(),acWeight);
    ll total_weight=0;
    for(auto i:v){
        ll id_1 = get_id( i.source );
        ll id_2 = get_id( i.dest );
        if(id_1 != id_2){
            merge( i.source, i.dest );
            total_weight += i.weight;
        }
    }
    
    cout << total_weight << endl;
    
    return 0;
} 
