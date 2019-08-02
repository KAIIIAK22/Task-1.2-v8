#include <iostream>
using namespace std;

int main()
{
unsigned int a ;
cout<<"Your salary($): ";
cin>>a;
switch (a)
{
case 0 ... 1000:
cout <<"Rabotai bolshe";
break;
case 1001 ... 1000000:
cout <<"Horosho";
break;
case 1000001 ... 4294967295:
cout <<"Ti millioner!";
break;
}
cout <<"...no ti molodec";
return 0;
}

