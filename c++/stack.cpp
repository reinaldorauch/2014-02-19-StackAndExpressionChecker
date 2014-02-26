#include <iostream>
#include <stdlib.h>
#include <stdio.h>

class Stack {

	protected:

		int *stack;

		int top;

		void setTop(int i) {
			this->top = i;
		}

	public:

		const static int EXCEPTION_MEMORY_OVERFLOW = 1;

		Stack() {
			this->stack = (int*) malloc(sizeof(int));
			this->setTop(-1);
		}

		int getTop() {
			return this->top;
		}

		int *getStack() {
			return this->stack;
		}

		bool push(int i) {
			int *temp = NULL;

			this->setTop(this->getTop() + 1);

			temp = (int*) realloc(this->stack, (this->getTop() + 1) * sizeof(int));

			*(this->getStack() + this->getTop()) = i;

			if(NULL == temp)
				throw 1;
			else {
				this->stack = temp;
				return true;
			}

		}

		void pop() {
			int *temp = NULL;
			this->setTop(this->getTop() - 1);

			if(this->getTop() == -1)
				return;
			else {
				temp = (int*) realloc(this->stack, (this->getTop() + 1) * sizeof(int));

				if(temp == NULL)
					throw 1;
				else
					this->stack = temp;

			}

		}

		int getTopVal() {
			return *(this->stack + this->getTop());
		}

		bool isEmpty() {
			return (this->getTop() == -1);
		}

		void printStack() {
			for (int i = 0; i <= this->getTop(); i++)
			{
				std::cout << "Pos: " << i << ", Val: " << *(this->stack + i) << '\n';
			}
			std::cout << '\n';
		}

};