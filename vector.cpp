#include<bits/stdc++.h>
using namespace std;
// agar  mai function me & nhi use krta hu to niche vector ki copy banegi O(n) jo  function me mai jo bhi v me change krunga wo main me nhi hoga q ki wo bass copy me change krega
// aur agar & use krte h toh function me vector kudh jaega mtlb ki jo bhi chnages vector me uske baad krenge wo sari chije main vector me reflect hogi 
void printvecstr(vector<string> &v){  // creating a function to print vector as refrence not copying it
    cout << "Size : " << v.size()<< endl;  // O(1)

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

    cout << "\n";
}
void printvec(vector<int> &v){  // creating a function to print vector as refrence not copying it
    cout << "Size : " << v.size()<< endl;  // O(1)

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

    cout << "\n";
}
int main(){
    vector<int> v; //  created vector
    int n; // declareing size
    cin>> n;

    for(int i=0;i<n;i++){
        int k;
        cin >>k;
        printvec(v);  // just to check vectors are dynamic or not and it shows dynamic 
        v.push_back(k); // O(1) it starts entering element in vector by pushing element from backward
    }
    printvec(v);

    vector<int > k(10);// it makes a vector of dynamic space but all element==0
    printvec(k);
    k.push_back(9); // it adds 9 to back and size got 11
    printvec(k);

    vector<int> z(10,3);  // it declares a vector with all entries ==3
    printvec(z);
    z.pop_back();  // it removes last value from vector
    printvec(z);

    // copying a vector
    vector<int> a=v; // it ceates a copy means a didnt alter vector v O(n)
    a.push_back(7); // only add 7 in back
    printvec(a);
    vector<string> q;
    int l;
    cin >> l;
    for(int i=0;i<l;i++){
        string s;
        cin >> s;
        q.push_back(s);
    }
    printvecstr(q);
}