#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int, int>
#define mp make_pair
#define pb push_back

class comp
{
public:
  bool operator() (const pi &a, const pi &b){
    return a.S < b.S;
  }
};

int main()
{
   set<int> s1;
   s1.insert(4);
   s1.insert(3);
   s1.insert(5);
   for(auto i : s1) cout << i << " ";
   cout << endl;    //3 4 5

   s1.insert(3);
   for(auto i : s1) cout << i << " ";
   cout << endl;  //3 4 5

   s1.erase(5);
   for(auto i : s1) cout << i << " ";
   cout << endl;   //3 4

   auto it = s1.find(4);
   s1.erase(s1.begin(), it);
   for(auto i : s1) cout << i << " ";    //4
   cout << endl;
    
   //set of pairs
   set<pi, comp> s2;
   s2.insert({1,2});
   s2.insert({0,4});
   s2.insert({8,3});
   s2.insert({6,7});
   cout << endl;
   for(auto i : s2) cout << i.F << " , " << i.S << endl;
   cout << endl;

    return 0;
}
