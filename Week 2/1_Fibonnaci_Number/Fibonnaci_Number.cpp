#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;


using std::cin;
using std::cout;

int fib_recursion(int n)
{
    if (n<=1)
    return n;
    else
    return fib_recursion(n-1)+fib_recursion(n-2);

}

unsigned long long fib(int n)
{
    vector<unsigned long long> N(n+1);
    N[0]=0;
    N[1]=1;
    for(int i=2;i<n+1;i++)
    {
        N[i]=N[i-1]+N[i-2];
    }
    return N[n];
}
int main()
{
    int n;
    cin >> n;
    unsigned long long out1=fib(n);
    cout << out1<< "\n";
    return 0;

}