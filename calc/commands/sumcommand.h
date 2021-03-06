#ifndef SUMCOMMAND_H
#define SUMCOMMAND_H

#include "command.h"

class Result;

class SumCommand : public Command
{
public:
    SumCommand(Result *result, double value);
    void undo() override;
    void redo() override;
};

#endif // SUMCOMMAND_H
