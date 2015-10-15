#ifndef Stack_H
#define Stack_H

template <typename Prim>
struct Element{
	Prim inf;
	Element* link;
};
template <typename Prim>
class Stack{
private:
	Element<Prim> *start;
	void delStack();
	void copyStack(const Stack&);
public:
	Stack();
	~Stack();
	Stack(const Stack&);
	Stack& operator=(const Stack&);
	void push(const Prim&);
	void pop(Prim&);
	bool empty()const;
	void print();
	int length();
};




#endif