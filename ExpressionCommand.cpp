#include "ExpressionCommand.h"

double ExpressionCommand::calculate() {
    return this->myCommand->doCommand();
}

ExpressionCommand::ExpressionCommand(Command *command) {
    this->myCommand = command;
}
