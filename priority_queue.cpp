#include<bits/stdc++.h>
using namespace std;

template<class T>
void displayPriority(priority_queue<T>q){
   while(!q.empty()){
     cout<<q.top()<<" ";
     q.pop();
   }
   cout<<endl;
}

void displayPriority(priority_queue<char, vector<char>, greater<char>>q){
   while(!q.empty()){
     cout<<q.top()<<" ";
     q.pop();
   }
   cout<<endl;
}

class Compare{
    public:
    bool operator () (int a, int b){
        return (a>b);
    }
};

void displayPriority(priority_queue<int, vector<int>, Compare>q){
   while(!q.empty()){
     cout<<q.top()<<" ";
     q.pop();
   }
   cout<<endl;
}

int main() {
    /* code */
    priority_queue<int> q1;
    for (auto i = 1; i <= 10; i++)
    {
        /* code */
        q1.push(i);
    }
    displayPriority(q1); //10 9 8 7 6 5 4 3 2 1
    displayPriority(q1); //everything will be printed again because we pass by value not by reference 10 9 8 7 6 5 4 3 2 1

    priority_queue<string> q2;
    q2.push("ha");
    q2.push("ar");
    q2.push("rs");
    q2.push("sh");
    displayPriority(q2); //sh rs ha ar they will be arranged in lexicographical order.

    priority_queue<char, vector<char>, greater<char>> q4; //it's a min heap now
    q4.push('r');
    q4.push('s');
    q4.push('t');
    q4.push('u');
    //display function won;t work here as we have different number 
    displayPriority(q4);  //r s t u 

    priority_queue<int, vector<int>, Compare> q5;
    q5.push(10); q5.push(5);
    q5.push(0); q5.push(-5);
    displayPriority(q5); //-5 0 5 10
    return 0;
}

