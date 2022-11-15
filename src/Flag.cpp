#include <Flag.hpp>
namespace argparse
{
    Flag::Flag(
            std::string _longId,
            char _shortId,
            std::string _definition,
            FlagParameters _flagParameters,
            FlagParameters _flagParameterMask) 
            : longId(_longId),
            shortId(_shortId),
            definition(_definition),
            flagParameters(_flagParameters),
            flagParameterMask(_flagParameterMask)
            {

            }

    Flag::Flag(
            std::string _longId,
            char _shortId,
            std::string _definition,
            FlagParameters _flagParameters) 
            : longId(_longId),
            shortId(_shortId),
            definition(_definition),
            flagParameters(_flagParameters)
            {

            }

    Flag::Flag(
            std::string _longId,
            char _shortId,
            std::string _definition) 
            : longId(_longId),
            shortId(_shortId),
            definition(_definition)
            {

            }

    Flag::Flag(const Flag &obj)
    {
        this->longId = obj.getLongId();
        this->shortId = obj.getShortId();
        this->definition = obj.getDefinition();
        this->flagParameters = obj.getFlagParameters();
        this->flagParameterMask = obj.getFlagParameterMask();
    }

    // Flag::Flag &operator=(const Flag &rhs)
    // {
    //     this->longId = rhs.getLongId();
    //     this->shortId = rhs.getShortId();
    //     this->definition = rhs.getDefinition();
    //     this->flagParameters = rhs.getFlagParameters();
    //     this->flagParameterMask = rhs.getFlagParameterMask();
    // }

    std::string Flag::getLongId() const
    {
        return longId;
    }
    
    char Flag::getShortId() const
    {
        return shortId;
    }

    std::string Flag::getDefinition() const
    {
        return definition;
    }

    FlagParameters Flag::getFlagParameters() const
    {
        return flagParameters;
    }

    FlagParameters Flag::getFlagParameterMask() const
    {
        return flagParameterMask;
    }
}