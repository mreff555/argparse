#ifndef ARGUMENT_HPP
#define ARGUMENT_HPP
#include <string>

namespace argparse
{
    class Argument
    { 
        public:
        Argument(std::string _value);

        Argument(const Argument &obj);

        // Argument &operator=(const Argument &rhs);

        virtual ~Argument() = default;

        private:
        std::string value;
    };
}
#endif /* ARGUMENT_HPP */