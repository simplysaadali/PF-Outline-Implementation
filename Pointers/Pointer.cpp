//pointer stores memory address as its value

#include<iostream>
using namespace std;
 
 int main()
 {
 	
 	string food = "Pizza";  
  	string* ptr = &food; 	//pointer ptr store address of food as its vaue

	cout<<"food : "<<food<<endl;
	cout<<"&food : "<<&food<<endl;
	
	cout<<"ptr : "<<ptr<<endl;	//gives value of pointer (i.e address of pointer variable)
	cout<<"*ptr : "<<*ptr<<endl; //gives value of pointed variable
	cout<<"&ptr : "<<&ptr<<endl; //given address of ptr (i.e ptr also have some address store in its memory)
     return (0);
 }
