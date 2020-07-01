#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

int last_digit_of_fib(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
int sum1=0 ,sum2=1, temp;
for(int i=2;i<=n;i++)
{
    temp=sum1+sum2;
    sum1=sum2;
    sum2=temp;
    while(sum1>9)
    {
        sum1%=10;
    }
    while(sum2>9)
    {
        sum2%=10;
    }
}
return sum2;
}
int main()
{
    int n;
    cin >> n;
    cout << last_digit_of_fib(n)<< endl;
    return 0;
}