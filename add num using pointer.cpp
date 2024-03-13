#include <iostream>
using namespace std;
int  main()
{
   int  FirstNumber, SecondNumber;
   int  *FirstPointer,*

 SecondPointer;
   int  sum;
   cout<<"\n Enter the first number: ";
   cin>>FirstNumber;
   cout<<"\n Enter the second number: ";
   cin>>SecondNumber;
   FirstPointer = &FirstNumber; //assigning an address to pointer
SecondPointer = &SecondNumber; 
   sum = *FirstPointer + * SecondPointer; //values at address stored by pointe
   cout<<"\n The Sum is: "<< sum;
   return  0;
}