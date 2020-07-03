#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search_private(const vector<int> &a, int x,int left, int right)
{
  if(right<left)
  return -1;
  int mid = left+ (right-left)/2;
  if(a[mid]==x)
  return mid;
  else if(a[mid]>x)
  return binary_search_private(a,x,left,mid-1);
  else
  return binary_search_private(a,x,mid+1,left);
}
int binary_search(const vector<int> &a, int x) {
  int left = 0, right = (int)a.size(); 
  //write your code here
  int result = binary_search_private(a,x,left,right);
  return result;

}

int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    //std:: cout << binary_search(a,b[i]) << ' ';
    std::cout << linear_search(a, b[i]) << ' ';
  }
}
