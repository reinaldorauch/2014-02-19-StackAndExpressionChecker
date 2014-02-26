#include <iostream>

#include "checker.cpp"

using namespace std;

int main(int argc, char const *argv[])
{

    ExpressionChecker aval;

    string(expression);

    cout << "Avaliador de expressões com parêntesis:\n\n\nDigite sua expressão:\n\n";

    cin >> expression;

    cout << "A expressão é " << (aval.expressionIsValid(expression) ? "válida" : "inválida") << ".\n\n";

    return 0;
}