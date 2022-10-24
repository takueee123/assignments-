#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
int i,j;
char choice;
while(true)
{
cout<<"enter first integer"<<endl;
cin>>i;
cout<<"enter second integer"<<endl;
cin>>j;
cout<<"enter character"<<endl;
cin>>choice;
if(choice=='+')
cout<< "sum" <<i+j<<endl;
else
if(choice=='-')
cout<< "minus" <<i-j<<endl;
else
if(choice=='*')
cout<< "multiply" <<i*j<<endl;
else
if(choice=='/')
cout<< "division" <<i/j<<endl;
else
if(choice=='%')
cout<< "modulus" <<i%j<<endl;
else
cout<<"invalid character"<<endl;
break;
}
return 0;
}




