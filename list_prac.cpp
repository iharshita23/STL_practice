#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

void displayList(list<int>l){
	for(auto it=l.begin(); it!=l.end(); it++){
	  cout<< *it << " ";	
	}
	cout<<endl;
}
int main() {
	list<int>l1;
	list<int>l2;
	for(int i=1;i<=10;i++)
		l1.push_back(i);
		displayList(l1);  //1 2 3 4 5 6 7 8 9 10 
	for(int j=5;j<=15;j++)
		l2.push_back(j);
		displayList(l2);  //5 6 7 8 9 10 11 12 13 14 15 
	list<int> l3(3,23);	
	displayList(l3);  //23 23 23 
	list<int> l4(l3);
	l4.insert(l4.begin(),2,10);
	displayList(l4); //10 10 23 23 23
	return 0;
}