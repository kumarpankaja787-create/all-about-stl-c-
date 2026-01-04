#include<bits/stdc++.h>
using namespace std;
void printvecpair(vector<pair<int,int> > &v) { //a function to print vector as refrence not copying it
    cout << "Size : " << v.size()<< endl;  // O(1)

    for(int i=0;i<v.size();i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }

    cout << "\n";
}
void printvecvec(vector<vector<int> > &v) { //a function to print vector as refrence not copying it
    cout << "Row : " << v.size()<< endl;  // O(1)
    cout << "Col : " << v[0].size()<< endl;

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";
}
int main(){
    vector<pair<int ,int>> v;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x>>y;
        v.push_back({x,y}); // or v.push_back(make_pair(x,y));
    }
    printvecpair(v); 

    // 2d array or say vector
    vector<vector<int>> k;
    int row,col;
    cin >> row>> col;
    for(int i=0;i<row;i++){
        vector<int> temp;
        for(int j=0;j<col;j++){
            int l;
            cin>> l;
            temp.push_back(l);
        }   
        k.push_back(temp);
    } 
    printvecvec(k);
}