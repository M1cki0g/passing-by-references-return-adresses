#include <iostream>

using namespace std;

int* comp(int& x , int& y){
if(x>y)
    return &x;
else
    return &y;
}


int main(){
int x=20,y=10,*p=&x;
int* z=comp(x , y);
*z += 100;
cout<<"z="<<*z<<endl;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
cout<<"*p="<<*p<<endl;

  return 0;
}
