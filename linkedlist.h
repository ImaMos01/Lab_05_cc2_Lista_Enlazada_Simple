#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

template<typename U>
class LinkedList{
	private:
		int size;
		Node<U> *head;
		Node<U> *tail;
	public:
		LinkedList();
		~LinkedList();
		LinkedList(const LinkedList<U> &o);

		void push_front(const U p);
		void push_back(const U p);

		void print();
		void insert(const U a);
		void remove(const U n);
};

#endif