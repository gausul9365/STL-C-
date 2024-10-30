#include <iostream>
#include <list>
using namespace std;


void listLearning(){
list<int> ls;
ls.push_back(2);
ls.push_back(3);
ls.push_back(3);
ls.pop_back();
ls.push_front(1);
ls.emplace_front(5);


for(auto it: ls){
  cout << it << endl;
}
cout<<ls.size()<<endl;
ls.clear();
cout<<ls.empty();

}


int main() {

listLearning();

  return 0;
}

