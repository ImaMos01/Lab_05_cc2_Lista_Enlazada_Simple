#ifndef NODE_H
#define NODE_H
#include<iostream>

class Node{
	private:
		int element;
		Node *next;
	public:
		Node(int element){
			this->element=element;
			this->next=NULL;
		}
		friend class LinkedList; //LinkedList acceda a los valores privados de Node
};

#endif