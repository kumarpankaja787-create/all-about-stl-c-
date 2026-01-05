#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    
    for(int i=0;i<n;i++){
        cin>> v[i];
    }
    //.begin() means starting value .end() means ending value 
    // iterators are just like pointers

    vector<int> ::iterator it=v.begin();
    // cout << (*it) << endl; // it prints first element of vector


    for(int i=0;i<n;i++){ // methord 1
        cout << *(it+i) << endl;
    }

    // it=it+1  it moves to next location btt it++ it moves to next iterator

    for(it=v.begin();it!=v.end();it++){ // methord 2
        cout<< (*it) << " ";
    }

    
    // iterators jitna size phle se define kroge vector ko una hi work krega 
    // agar initially size jyada dene ke badd dynamically size increase hua toh
    // iterator usko nhi lega q ki wo pointer jaisa h toh usko pre defined adderes access krna hoga naah ki 
    // jo adress dynamiclly bane h 

    // e.g

    for(int i=0;i<n+3;i++){ 
    // here i take 3 more element than numberof element that i have declared 
        
        cin>> v[i];
    }

    for(it=v.begin();it!=v.end();it++){ 
    // it gives only n numbers

        cout<< (*it) << " ";
    }
    // in pair we use (*it).first <=> (it->first) both gives us same output
}