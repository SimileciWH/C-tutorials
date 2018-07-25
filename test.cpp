#include <iostream>

using namespace std;

int main()
{
  char a[] = "hello world!";
  int a1 = 0,i = 3;
  a1 = (i++)+(i++)+(i++);
  cout<<a<<endl;
  cout << "a1 = " << a1 << ",i = "<< i << '\n';
  return 0;
}
