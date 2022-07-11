#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
#define F first
#define S second
#define pi pair<int, int>
#define vi vector<int>
#define vli vector<long>
#define mp make_pair
#define pb push_back
#define FOR(i,a,b) for(int i=(a); i<(b); i++)

void display(unordered_map <char, int> &u){
    cout << "Printing contents of unordered map ----" << endl;
    for (auto p: u){
        cout << p.F << "\t : \t" << p.S << endl;
    }
    cout << "Printed " << u.size() << " elements successfully ---- " << endl;
}
int main(){
   /* unordered_map <char, int> u;
    u['a'] = 1;
    u['b'] = 2;
    u['c'] = 7;
    u['d'] = 3;
    u['e'] = 6;
    u['f'] = 5;
    u['g'] = 8;
    cout << u.size() << endl;
    u.insert(mp('h', 18));
    u.insert({'i', 68}); //insert func cannot update the value
    display(u);
    //output 
/*
i        :      68
h        :      18
g        :      8
f        :      5
b        :      2
a        :      1
c        :      7
d        :      3
e        :      6 
*/


map <double, double> g;
unordered_map <double, double> h;
for(double i=0; i<1000000; i++){
    g.insert({i,i+1.0});
    h.insert({i,i+1.0});
}

srand(time(0));
double x = rand()%1000000; //b/w 0 and 1000000
cout << "Time take by " << x << "IN both map and unordered map! " << endl;

// -- Time taken by map to find x --
auto start = high_resolution_clock :: now();
if(g.find(x) == g.end()){ 
    cout << "Key not found in unordered map!" << endl;
}
else{
    cout << "Key found! Value = " << g[x] << endl;
}
auto end = high_resolution_clock :: now();
auto duration = duration_cast<microseconds> (end-start);
cout << "Time taken by map = " << duration.count() << " ms." << endl;



// -- Time taken by unordered map to find x --
start = high_resolution_clock :: now();
if(h.find(x) == h.end()){
    cout << "Key not found in unordered map!" << endl;
}
else{
    cout << "Key found! Value = " << h[x] << endl;
}
end = high_resolution_clock :: now();
duration = duration_cast<microseconds> (end-start);
cout << "Time taken by unordered map = " << duration.count() << " ms." << endl;



start = high_resolution_clock :: now();
g.find(x);
end = high_resolution_clock :: now();
duration = duration_cast<microseconds> (end-start);
cout << "Time taken by map = " << duration.count() << " ms." << endl;


start = high_resolution_clock :: now();
h.find(x);
end = high_resolution_clock :: now();
duration = duration_cast<microseconds> (end-start);
cout << "Time taken by unordered map = " << duration.count() << " ms." << endl;


    return 0;
}