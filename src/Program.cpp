#include <Program.hpp>

namespace argparse
{
    Program::Program(std::string _name, std::string _description)
    : name(_name), description(_description)
    {

    }

    Program::Program(std::string _name, std::string _description, Flags _flags, Arguments _arguments)
    : name(_name), description(_description), flags(_flags), arguments(_arguments)
    {

    }

    void Program::addFlag(const Flag &_flag)
    {
        flags.push_back(_flag);
    }

    void Program::addArgument(Argument &_argument)
    {
        arguments.push_back(_argument);
    }

    void Program::addOption(OptionsEnum opts)
    {
        this->options &= opts;
    }


} // argparse