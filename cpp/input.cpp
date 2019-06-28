// i/o example

#include <iostream>
using namespace std;

int main ()
{
  int i;
  cout << "Please enter an integer value: ";
  cin >> i;
  cout << "The value you entered is " << i;
  cout << " and its trippled is " << i*3 << ".\n";
  cout<< " and to the 7th power"<< i*i*i*i*i*i*i<<endl;
  return 0;
}
