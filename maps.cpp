#include<bits/stdc++.h>

using namespace std;

int main (){
    // basically maps stores elements formed by combination of a key value and a mapped value
    
    // no matter in which order we insert it returns it in sorted way 

    // map value can directly accessed by their corresponding key using the bracket [key] it returns the mapped value

    // if we update key to new mapped value key takes new mapped value 

    // maps are implemented ad binary search tree O(log(n))

    // MAPS PROPERTIES
    // 1) Elements in associative containers are referenced by their key and not by their absolute position in the container.
    // 2) All inserted elements are given a position in this order.
    // 3) No two element have same keys.
    // 4) it uses an allocator object to dynamically handle iits storage.

    int n; 
    cin>> n;
    map<int,int> m,z;
    
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        m[k]=i;
    }

    // PROPERTIES

    // .begin for begin , .end for end
    
    // size	Return container size
    cout << m.size() << endl;
    // max_size	Return maximum size
    cout << m.max_size() << endl;
    // empty	Test whether container is empty 
    cout << m.empty() << endl;


    // ACCESS ELEMENTS
    cout << m[1] << endl; // it returs the value assinged to key 1.
    // or 
    cout << m.at(1) << endl; // m.at(1) <=> m[1] 


    // MODIFIERS

    // 1) insert ==  to insert pair or value in map
    m.insert({5,3});
    cout << m[5] << endl; // it returns 3

    for(auto l :m){
        cout << l.first << " " << l.second << endl;
    }
    cout << endl;

    // 2) erase == it erases the value and key 
    m.erase(5); 

    // 3) swap it swaps two maps
    z[1]=3;
    z[2]=1;
    z[0]=9;

    z.swap(m);

    for(auto l :m){
        cout << l.first << " " << l.second << endl;
    }
    cout << endl;

    for(auto l :z){
        cout << l.first << " " << l.second << endl;
    }

    // 4) clear is use to claer map
    cout << endl;
    m.clear(); // it clears full map m
    m.insert({5,3});

    for(auto l :m){
        cout << l.first << " " << l.second << endl;
    }

    // OPERATIONS 

    // 1) find 
    cout << m.find(5)->second << endl; // finds 5 and return its second number  
    //  if it didn't find thar element it points to end value 

    cout << m.find(0)->second << endl; // m dosent contain 0 so it return second value of end element  

    // 2) count == Searches the container for elements with a key equivalent to k and returns the number of matches.
    for(int i=1;i<7; i++){
        cout << i ;
        if(z.count(i)>0){
            cout << " is an element of mymap.\n";
        }
        else{
            cout << " is not an element of mymap.\n";
        }
    }

    map<char,int> mymap;
    map<char,int>::iterator itlow,itup;

    mymap['a']=20;
    mymap['b']=40;
    mymap['c']=60;
    mymap['d']=80;
    mymap['e']=100;

    itlow=mymap.lower_bound ('b');  // itlow points to b
    itup=mymap.upper_bound ('d');   // itup points to e (not d!)

    mymap.erase(itlow,itup);        // erases [itlow,itup)

    // print content:
    for (map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
        cout << it->first << " => " << it->second << '\n';

        
    
    //  UNordered map : everything is same as map bass yha random order output aaega 
    // O(1) agr order matter nahi krta hai toh unorderedmap use kr lena 

    unordered_map<int ,int> a;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        a[k]=i;
    }

    for(auto l :a){  // prints map in random order
        cout << l.first << " " << l.second << endl;
    }

    // similarly all function used 

}