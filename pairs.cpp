#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string> p;
    p=make_pair(1,"asdf"); // taking input in pair

    // another way of taking input
    p={4,"awe"};


    cout << p.first << endl; //printing first part of pair
    cout << p.second << endl; //printing second part of pair

    // making copy 
    pair<int ,string> p1=p;

    p1.first=3; // it makes no  change in p1 but not in p.

    cout << endl<< p.first << endl; //printing first part of pair
    cout << p.second << endl; //printing second part of pair

    pair<int ,string> &p2=p;

    p2.first =7; // it changes value of p because it goes as refrence of p as what we append in p2 it happens in p

    cout << endl<< p.first << endl; //printing first part of pair
    cout << p.second << endl; //printing second part of pair

    cout << endl<< p2.first << endl; //printing first part of pair
    cout << p2.second << endl; //printing second part of pair

    // making array of pair 
    pair<int ,int> arr[3];
    arr[0]={1,9};
    arr[1]={2,8};
    arr[2]={3,7};
    for(int i=0;i<3;i++){
        cout << arr[i].first << "   "<<  arr[i].second  << endl;
    }


    swap(arr[0],arr[2]); // it swaps pair
    cout << endl;

    for(int i=0;i<3;i++){
        cout << arr[i].first << "   "<<  arr[i].second  << endl;
    }
}

// it is use to maintain relation between pairs 
// if we have to like swap it so pair got  swap 
// its quiet useful for such this things and many more