#include "linkedlist.h"

LinkedList::LinkedList(){
	this->size=0;
	this->head=NULL;
}

LinkedList::~LinkedList(){
	delete head;
}

void LinkedList::print(){
	Node *print =head; //creamos un puntero nodo para recorrer la lista
	while(print !=0){
		std::cout<<print->element<<"\t";
		print=print->next;
	}
	std::cout<<"\n";
}

void LinkedList::insert(const int a){//ordenarlo
	Node* newNode = new Node (a);
	//cuando la lista esta vacia
	if (head==0){
		head = newNode;
	}
	else{
		Node* control = head;
		Node* aux = 0;
		//recorre hasta encontrar el lugar indicado
		while(control !=0){
			if(control->element>=newNode->element)
				break;
			else{
				aux=control;
				control=control->next;
			}
		}
		//inserta en la cabeza
		if(control==head){
			newNode->next=head;
			head=newNode;
		}
		else{
		//inserta despues de la cabeza
			newNode->next=control;
			aux->next=newNode;
		}
	}
	size++;
}
		
void LinkedList::remove(const int n){
	//lista vacia
	if(head==0){
		std::cout<<"Node cannot be deleted from an empty list\n";
	}
	else{
		Node *control=head;
		Node *aux=0;
		//recorre hasta encontrar el nodo para eliminarlo
		while(control!=0){
			if(control->element==n)
				break;
			else{
				aux=control;
				control=control->next;
			}
		}
		//numero ingrersado no se encuentra en la lista
		if(control==0){
			std::cout<<"the number: "<<n<<" is not found\n";
		}
		else{
			//eliminar en la cabeza
			if(head==control)
				head=head->next;
			//elimina desde la cola de la lista
			else
				aux->next=control->next;
			delete control;
			size--;	
		}
	}
			
}
		