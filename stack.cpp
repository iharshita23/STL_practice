#include<bits/stdc++.h>
using namespace std;

template<class T>
void display(stack<T>s1){
    while(!s1.empty()){
        cout<<s1.top()<<" "; //display all the element
        s1.pop();
    }
    cout<<endl;
}

template<class T>
void displayEvery10(stack<T>s1){
    int c=0;
    while(!s1.empty()){
        if(c%10 == 0)
         cout<<s1.top()<<" "; //99 89 79 69 59 49 39 29 19 9 
        s1.pop();
        c++;
    }
    cout<<endl;
}

int main(){
   stack <int> s;
   for(int i=0;i<100;i++){
    s.push(i);
    }
   cout<<s.size()<<endl; //100
   //cout<<s.pop()<<endl; //nothing will be printed it pop one element
   cout<<s.top()<<endl; //99
   display(s);
   displayEvery10(s);
   stack<int> s2 = s;
   display(s2); //display content of s;
   stack<int> s3;
   s3.swap(s);
   cout <<"s contains : ";    //becomes empty
   display(s);
   cout<<"s3 contains : ";     //elements of s1 will come here
   display(s3);
   return 0;
}