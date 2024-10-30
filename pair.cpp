#include <iostream>
#include <utility>
#include <array>
using namespace std;
// Add other headers as needed

void explain1(){
    pair <int, int> p = {1,3};
    cout<<p.first<<endl<<p.second<<endl;
  }
void explain2(){
    pair <int, pair<int , int>> p = {1,{2,3}};
    cout<<p.first<<endl<<p.second.second<<endl;
  }

int main(){
  
  explain1();
  explain2();
  

}

