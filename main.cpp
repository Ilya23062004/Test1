#include<iostream>
#include<cmath>

using namespace std;

int main()

{
int a, b=1, c, i=1;
cin >> a ;
while(i<=a)
{
     b=i*b;
     i++;
}
cout<<b<<i;
}