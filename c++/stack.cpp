#include <iostream>

class Stack {

	protected:

		int *stack;

		int top;

		void setTop(int i) {
			this->top = i;
		}

	public:

		Stack() {
			this->stack = (int)* malloc(sizeof(int));
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
			*(this->getStack() + this->getTop()) = i;

			temp = realloc(this->stack, (this->getTop() + 1) * sizeof(int));

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

			temp = realloc(this->stack, (this->getTop() * sizeof(int)));

			if(temp == NULL)
				throw 1;
		}

		

}