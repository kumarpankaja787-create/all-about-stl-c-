#include<bits/stdc++.h>
using namespace std;
void print2(multiset<int> &m){
    for(auto v:m){
        cout << v << "  ";
    }
    cout << endl;
}
void print1(unordered_set<int> &m){
    for(auto v:m){
        cout << v << "  ";
    }
    cout << endl;
}
void print(set<int> &m){
    for(auto v:m){
        cout << v << "  ";
    }
    cout << endl;
}
int main(){
    // sets basically map without value only key  all things were same 
    set<int> k; // O(log(n))  // sorted order 
    k.insert(2);
    k.insert(5);
    k.insert(3);
    auto it = k.find(5);  // O(log(n)) 
    if(it!=k.end()){
        cout <<*it <<endl;

        k.erase(it);
    }
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int b; cin >> b;
        k.insert(b);
    }
    print(k);

    unordered_set<int> l; // bass yha order matter nhi krta o(1)
    for(int i=0;i<n;i++){
        int b;cin >>b;
        l.insert(b);
    }
    print1(l);


    multiset<int> o; // sorted order but allow to take repeated input;
    for(int i=0;i<n;i++){
        int b;cin>> b;
        o.insert(b); // O(log(n))
    } 
    // baki sari chije same hai
    print2(o);

}
