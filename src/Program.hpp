#ifndef PROGRAM_HPP
#define PROGRAM_HPP
#include <Argument.hpp>
#include <Flag.hpp>
#include <string>
#include <vector>

namespace argparse
{
    using Flags = std::vector<Flag>;
    using Arguments = std::vector<Argument>;

    enum OptionsEnum : size_t
    {
        NO_STATEMENT        = 0,
        CASE_INSENSITIVE    = 1
    };

    class Program
    {
        public:
        Program(std::string _name, std::string _description);
        Program(std::string _name, std::string _description, Flags _flags, Arguments _arguments);
        Program(const Program &obj) = delete;
        Program &operator=(const Program &rhs) = delete;

        virtual ~Program() = default;

        void addFlag(const Flag &_flag);

        void addArgument(Argument &_argument);

        void addOption(OptionsEnum opts);
      
        private:
        std::string name;
        std::string description;
        Flags flags;
        Arguments arguments;
        size_t options;
    };
}

#endif /* PROGRAM_HPP */