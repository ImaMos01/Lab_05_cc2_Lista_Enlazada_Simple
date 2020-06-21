#include "linkedlist.h"
#include "linkedlist.cpp"


int main(){
	LinkedList<char> *lis= new LinkedList<char>;
	char a;
	std::cout<<"press: 'a' to exit\n";
	while(a!='a'){
		std::cout<<"enter: ";
		std::cin>>a;
		lis->insert(a);
	}
	lis->print();
	std::cout<<"\n";
	
	std::cout<<"what number do you want to remove: \n";
	std::cin>>a;
	std::cout<<"\n";
	
	lis->remove(a);
	lis->print();

	lis->push_back('c');
	lis->push_front('a');
	lis->print();

	std::cout<<"copy\n";
	LinkedList<char> *lis2= lis;
	lis2->print();

	return 0;
}