#include <iostream>
#include <stack>
using namespace std;


void stackLearning(){
  // Stack is a LIFO (Last In First Out) data structure
  // stack ke ander indxing nhi hoti 
  // aur na hi iterator hota hai 
  // to ise hm ek baar me print nhi kra skte 
  // iske liye pahle top orint krao fir pop kro 
  // sese hi krna padega 
  stack<int> st;

  st.push(4);
  st.push(1);
  st.push(5);
  st.push(6);
  cout<<st.top()<<endl;
  st.pop();
  cout<<st.size()<<endl;
  cout<<st.empty()<<endl;

  stack<int> st2;
  st2.push(40);
  st2.push(10);
  st2.push(50);
  cout<<st2.size()<<endl;
  cout<<st2.empty()<<endl;
  
 cout<<"-------Before swapping------"<<endl;
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
  cout<<endl;
  while(!st2.empty()){
    cout<<st2.top()<<" ";
    st2.pop();
  }
  cout<<endl;
  
  st.swap(st2); //swapping
  cout<<"-------After swapping------"<<endl;
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
  cout<<endl;
  while(!st2.empty()){
    cout<<st2.top()<<" ";
    st2.pop();
  }
 
}

void swappingStack(){

  stack<int> st,st2;
  st.push(4);
  st.push(1);
  st.push(5);
  st.push(6);
  st2.push(40);
  st2.push(10);
  st2.push(50);
  cout<<"-------Before swapping------"<<endl;
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
  cout<<endl;
  while(!st2.empty()){
    cout<<st2.top()<<" ";
    st2.pop();
  }
  cout<<endl;
  
  st.push(4);
  st.push(1);
  st.push(5);
  st.push(6);
  st2.push(40);
  st2.push(10);
  st2.push(50);
  st.swap(st2); //swapping
  cout<<"-------After swapping------"<<endl;
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
  cout<<endl;
  while(!st2.empty()){
    cout<<st2.top()<<" ";
    st2.pop();
  }
}


int main() {

  //time complexity ---> O(1)
  stackLearning();
  swappingStack();

  return 0;

}

