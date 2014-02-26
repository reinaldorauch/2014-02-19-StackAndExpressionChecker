#include <iostream>

#include "stack.cpp"

class ExpressionChecker: public Stack {

    public:

        bool expressionIsValid(std::string expression) {

            for(int i = 0; i < expression.length(); i++) {
                if(expression[i] == '(')
                    this->push(expression[i]);
                else if(expression[i] == ')')
                    if(this->isEmpty())
                        return false;
                    else
                        this->pop();
            }

            return this->isEmpty();

        }

};