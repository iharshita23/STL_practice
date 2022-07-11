#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int, int>
#define vi vector<int>
#define vli vector<long>
#define mp make_pair
#define pb push_back
#define FOR(i,a,b) for(int i=(a); i<(b); i++)

class comp{
  public:
  bool operator() (char a, char b) {
     return a>b;
  }
};

void display(map <char, int> u){
 cout << "Printing elements in map ......" << endl;
 for(auto x : u){
    cout << x.first << ", " << x.second << endl;   //a, 3 b, 1 c, 5 e, 2 s, 3 t, 3
  // elements will be inserted in ascending order 
 } cout << "Printed " << u.size() << " Successfully" <<endl;
}

void display(map <char, int, comp> u){
 cout << "Printing elements in map ......" << endl;
 for(auto x : u){
    cout << x.first << ", " << x.second << endl;   //a, 3 b, 1 c, 5 e, 2 s, 3 t, 3
  // elements will be inserted in ascending order 
 } cout << "Printed " << u.size() << " Successfully" <<endl;
}

void display(multimap <char, int> u){
 cout << "Printing elements in multimap ......" << endl;
 for(auto x : u){
    cout << x.first << ", " << x.second << endl;   //a, 3 b, 1 c, 5 e, 2 s, 3 t, 3
  // elements will be inserted in ascending order 
 } cout << "Printed " << u.size() << " Successfully" <<endl;
}


int main(){
    map <char, int> u;
    u['a'] = 2;
    u['a'] = 3;
    cout << u.size() << endl;
    u['b'] = 1;
    u['t'] = 3;
    u['s'] = 3;
   // u.insert('e',2); //only insertion of pairs are allowed
    u.insert(make_pair('e',2));
    u.insert({'c',5});
    //display(u);

    auto it = u.begin();
    ++it;
    u.insert(it,{'z',9}); //no effect of iterator's/position's since it is unordered.
    //display(u);
    cout << u['y'] <<endl;  //garbage value will be printed since it is not found
    
  if(u.find('b') == u.end()) //find function returns a iterator
     cout << "Key not found!" <<endl;
  else
    cout << "Key found = " << u['b'] <<endl;

 /* map <char, int, comp> v; //descending order of key's... 
  v.insert(u.begin(), u.end());
  display(v);  */  //z, 9 y, 0 t, 3 s, 3 e, 2 c, 5 b, 1 a, 3

  multimap<char, int> v; //duplicate key's are allowed in multimap
  v.insert({'a', 2});
  v.insert({'b', 3});
  v.insert({'a', 4});
  v.insert({'a', 5});
  display(v); //a, 2 b, 3 a, 4 a, 5

  auto res = v.equal_range('a');
  for(auto it = res.F; it != res.S; it++){
    cout << it->S << endl;
  }
  return 0;
}