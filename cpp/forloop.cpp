//hello2.cpp crm
// $g++ hello2.cpp -o hello2.o
#include <iostream>
using namespace std;

int main(){
 int i,j;
 for (;;){
  cout<<i<<" "<<j<<" ";
  if (i % 5 == 0)cout<<endl;
  i = i + 1;
  j++;
  if (j > 1000000) break;
 }
 cout<< "Hello World "<<endl;
 return 0;
 
}
