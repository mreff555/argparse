#ifndef FLAG_H
#define FLAG_H
#include <string>
#include <vector>
#include <utility>
namespace argparse
{
    using FlagParameter = std::pair <std::string, bool>;
    using FlagParameters = std::vector<FlagParameter>;

    /**
     * @brief Flag - Container for a single command line parameter flag
     * by the cannonical posix definitions.  Currently all definitions 
     * require a long/short id.  Short ID's follow a single dash while
     * long follow two.  A List of of command parameter options may follow
     * which are paired with a bool value.
     * @todo Maybe I don't exactly remember how I intended on using this.
     * 
     */
    class Flag
    {
        public:
        Flag(
            std::string _longId,
            char _shortId,
            std::string _definition,
            FlagParameters _flagParameters,
            FlagParameters _flagParameterMask);
        
        Flag(
            std::string _longId,
            char _shortId,
            std::string _definition,
            FlagParameters _flagParameters);
        Flag(
            std::string _longId,
            char _shortId,
            std::string _definition);
        
        Flag(const Flag &obj);

        // Flag &operator=(const Flag &rhs);

        virtual ~Flag() = default;

        std::string getLongId() const;
    
        char getShortId() const;

        std::string getDefinition() const;

        FlagParameters getFlagParameters() const;

        FlagParameters getFlagParameterMask() const;

        private:
        std::string longId;
        char shortId;
        std::string definition;
        FlagParameters flagParameters;
        FlagParameters flagParameterMask;
    };
}
#endif /* FLAG_H */