#include "linkedlist.h"
#include "linkedlist.cpp"


int main(){
	LinkedList* lis= new LinkedList;
	int a=1;
	while(a!=0){
		std::cout<<"enter numbers: ";
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

	return 0;
}