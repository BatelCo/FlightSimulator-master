#include "Mult.h"

Mult::Mult(Expression *left, Expression *right):BinaryExpression(left,right){}

double Mult::calculate() {
    return this->getLeft()->calculate() * this->getRight()->calculate();
}