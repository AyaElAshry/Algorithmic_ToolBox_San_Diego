#include <iostream>

int get_change(int m) {
  //write your code here
  int count=0;
  while(m/10 !=0)
  {
    m=m-10;
    count++;
  }
  while(m/5 !=0)
  {
    m=m-5;
    count++;
  }
  count+=m;
  return count;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
