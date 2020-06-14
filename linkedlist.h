#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList{
	private:
		int size;
		Node *head;
	public:
		LinkedList();
		~LinkedList();
		void print();
		void insert(const int a);
		void remove(const int n);
};

#endif