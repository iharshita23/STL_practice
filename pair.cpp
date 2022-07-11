#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int, int>
#define mp make_pair
#define pb push_back

template <class Pair> //created datatype that work for vector of pair of anything
void display(const vector<Pair> &v){
  cout<< "...." <<endl;
  for(auto e: v){
    cout<< '(' << e.F << " , " << e.S << ')' << endl;
  }
  cout << " Printed " << v.size() << " pairs of the vector. " << endl;
}

template <class Pair> 
void displayTriples(const vector<Pair> &v){
  cout<< "...." <<endl;
  for(auto e: v){
    cout<< '(' << e.F << " , " << e.S.F << " , " << e.S.S <<')' << endl;
  }
  cout << " Printed " << v.size() << " pairs of the vector. " << endl;
}


bool sortbysecond(const pair<int, string> &a, const pair<int, string> &b){
  return (a.S < b.S);
}

bool sortByThird(const pair <int, pi> &a, const pair<int, pi> &b ){
  return (a.S.S < b.S.S);
}

int main()
{
    /* code */
    pi a;
    a = mp(1,3);
    // cout<<a.F << " " << a.S << endl;
    vector<pi> v;
    v.pb(mp(41,51)); //or do v.pb({41,51});
    // display(v);

vector<pair <int,string> > v2;
v2.pb({1,"Harshita"});
v2.pb({2,"will"});
v2.pb({3,"soon"});
v2.pb({4,"become"});
v2.pb({5,"an"});
v2.pb({6,"IPS"});
v2.pb({7,"Officer"});
// display(v2);

sort(v2.begin(), v2.end(), sortbysecond);
// display(v2);

vector<pair <int, pi>> v3;
v3.pb({3,{1,2}});
v3.pb({1,{3,3}});
v3.pb({2,{3,1}});
sort(v3.begin(), v3.end(), sortByThird);
displayTriples(v3);

return 0;
}

//create a vector of int and string and try sorting it using first and second index


