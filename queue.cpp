#include<bits/stdc++.h>
using namespace std;

void printQ(queue <int> q1){ //call by value so copy of elements will only be copied
    while(!q1.empty()){
        cout<<q1.front()<<" "; //0 10 20 30 40 50 60 70 80 90
        q1.pop();
    }
}

queue<int> removemultipleof3(queue<int> q1){
 queue<int> mq;
 while(!q1.empty()){
    if(q1.front()%3!=0)
    mq.push(q1.front());
    q1.pop();
 }
 return mq;

}

int main(){
    queue<int> q;
    for(int i=0; i<100; i+=10){
        q.push(i);
    }
    cout<<q.size()<<endl; //10
    printQ(q); //0 10 20 30 40 50 60 70 80 90 
    q = removemultipleof3(q);
    printQ(q); //10 20 40 50 70 80
    return 0;
}