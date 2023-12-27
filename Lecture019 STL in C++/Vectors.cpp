#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    
    v.push_back(5);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    
    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    
    v.push_back(9);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    
    cout<<endl;
    
    cout<<"First Element: "<<v.front()<<endl;
    cout<<"Last Element: "<<v.back()<<endl;
    
    cout<<endl;
    
    cout<<"Vector: ";
    for (int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    v.pop_back();
    
    cout<<"After Popping: ";
    for (int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<endl;
    
    //capacity does not get affected on clearing the vector
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    v.clear();
    cout<<"Capacity after .clear(): "<<v.capacity()<<endl;
    cout<<"Sizeafter .clear(): "<<v.size()<<endl;
    
    cout<<endl;
    
    //vector of size 5 with all elts initialized as 1
    vector<int> a(5,1);
    cout<<"Vector a: ";
    for (int i:a){
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<endl;
    
    //copying vector data to another
    vector<int> last(a);
    cout<<"Vector last: ";
    for (int i:last){
        cout<<i<<" ";
    }cout<<endl;
}