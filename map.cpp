#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
  
  //creation
  unordered_map<string,int>mp;

  //insertion
  pair<string,int>p=make_pair("aryan",1);
  mp.insert(p);
  pair<string,int>p1("aarya",2);
  mp.insert(p1);
  pair<string,int>p2=make_pair("abhinav",3);
    mp.insert(p2);
  pair<string,int>p3=make_pair("aman",4);
    mp.insert(p3);
  pair<string,int>p4=make_pair("ipsa",5);
      mp.insert(p4);
  //searching

   cout<<mp["aarya"]<<endl;
   cout<<mp.at("abhinav")<<endl;
   
  cout<<mp.size()<<endl;
   mp.erase("aarya");
   cout<<mp.size()<<endl;

   unordered_map<string,int>::iterator it = mp.begin();
   while(it!=mp.end()){
    cout<<it.first<<" "<<it.second<<endl;
   }
   



}