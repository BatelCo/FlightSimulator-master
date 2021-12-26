#include <iostream>
#include "PrintCommand.h"

PrintCommand::PrintCommand(string out) {
    this->out = out;
}

double PrintCommand::doCommand() {
    cout << this->out;
    return 0;
}
