#ifndef PARSER_HPP
#define PARSER_HPP
#include <vector>
#include <string>

namespace argparse
{
    /**
     * @brief Parser - Parses through an array of strings,
     * identifying and cataloging flags and strings
     * 
     */
    class Parser
    {
        public:
        Parser();
        Parser(const Parser &obj) = delete;
        Parser &operator=(const Parser &rhs) = delete;

        ~Parser() = default;

        private:
        

    };
} /* argparse */

#endif /* PARSER_HPP */