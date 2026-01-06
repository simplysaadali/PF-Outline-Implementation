//refrence is the other name of referred variable
#include<iostream>
using namespace std;
 
 int main()
 {
	string food = "Pizza";
	string &ref = food;		//ref refers to address of food (it is not storing address of food as value)
	
	cout<<"Food is : "<<food<<endl;
	cout<<"&food : "<<&food<<endl;
	
	cout<<"ref is : "<<ref<<endl;
	cout<<"&ref : "<<&ref<<endl;
     return (0);
 }
