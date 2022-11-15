// This is definately temporary.  This should be some type of interface, and more
// appropriately named.
#include <Program.hpp>

using namespace argparse;

int main()
{
    Program p("Name", "Description");
    //p.addFlag({"flag", 'f', "Test Flag"});

    p.addFlag({"other", 'o', "other flag", {
        {"setting1", true},
        {"setting2", false}
    }});

}
