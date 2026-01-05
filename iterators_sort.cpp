#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    
    for(int i=0;i<n;i++){
        cin>> v[i];
    }

    for(auto it: v ){
        cout << it << " ";
    }

    // it works similar like iterator menas it is an iterator
    // btt instead of declearing it understands automatically
}