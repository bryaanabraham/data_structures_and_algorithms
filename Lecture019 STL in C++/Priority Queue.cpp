#include<iostream>
#include<queue>
using namespace std;

int main(){
    //max heap: will always give the greatest element
    priority_queue <int> maxi;
   
   //min heap: will always give smallest element
   priority_queue <int, vector<int>, greater<int>> mini;
   
   maxi.push(3);
   maxi.push(4);
   maxi.push(2);
   maxi.push(5);
   maxi.push(1);
   
   int n = maxi.size();
   cout<<"Max heap size: "<<n<<endl;
   
   for (int i=0; i<n; i++){
       cout<<maxi.top()<<" ";
       maxi.pop();
   }cout<<endl;
   
   mini.push(3);
   mini.push(4);
   mini.push(2);
   mini.push(5);
   mini.push(1);
   
   n = mini.size();
   cout<<"Min heap size: "<<n<<endl;
   
   for (int i=0; i<n; i++){
       cout<<mini.top()<<" ";
       mini.pop();
   }cout<<endl;
    
}