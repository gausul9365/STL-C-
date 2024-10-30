#include <iostream>
#include <vector>
using namespace std;

int vectorLearing(){
    vector <int> v;

    v.emplace_back(100);
    v.push_back(1);
    v.push_back(68);
    v.push_back(135);
    v.push_back(0);
    v.push_back(19);
    
     cout<<v[0]<<endl;

    // ssare element print kra diya 
     for (size_t i = 0; i < v.size(); i++)
     {
        cout<<v[i]<<" " ;
     }  
     cout<<endl;
     for ( int it : v){
      cout<<it<<" ";
     }

    }

  int Learniterator() {
    vector<int> v = {10, 20, 30, 40, 50}; 
    vector <int> ::iterator it = v.begin();
    it++;
    cout <<endl<<*(it)<<" "; // 20 jb star nhi lga tha tb tk it address ko point kr rha tha lekin jaise hi start   lga ab it us address ke value ko represent kr rha hai 

    it +=2;
    cout <<endl<<*(it)<<" "; // 40 

  }

  // End and Reverse 
  int LearnEndAndReverse() {
    vector<int> v = {10, 20, 30, 40, 50};
    vector <int> :: iterator it = v.begin();
    cout<<endl<<*(it)<<endl;
    vector <int> :: iterator itr = v.end()-1;
    cout<<*(itr)<<endl;
   
   cout<<"........testing........"<<endl;
   cout<<v[0]<< " "<<v.at(0)<<endl;
   cout<<v.back()<<endl;
   cout<<v.front()<<endl;

    for(vector<int>:: iterator it = v.begin(); it != v.end(); it++){
      cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it=v.begin(); it!=v.end(); it++){
      // "auto" ka use code ko kam likhne me kiyajata hai aur ye automatcially vector ko deduce kr lega aur use hisaab se calaculation perform karega 
      cout<<*(it)<<" " ;
    }

    // for(auto it : v){
    //   cout<<it<<" " ;
    // }

  }

  int eraseAndDelete(){
    vector<int> v = {12,3,5,56,76543,56};
    cout<<endl<<"Before Erase"<<endl;
    for(auto it : v){
      cout<<it<<" ";
    }

    cout<<endl<<"After Erase"<<endl;
    v.erase(v.begin());
    for(auto it : v){
      cout<<it<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+2 ,v.begin()+4);
    cout<<"ERASE from 2 to 4"<<endl;;
    for(auto it : v){
      cout<<it<<" ";
    }
  }

     


int main() {

  vectorLearing();
  Learniterator();
  LearnEndAndReverse();
  eraseAndDelete();

  return 0;

}
