# **ARGPARSE**

###### <div align="center">*"There he goes. One of God's own prototypes.  A high-powered mutant of some kind, never considered for mass production.  Too weird to live, too rare to die.", Hunter S. Thompson*</div>

Here is some irony for you.  Command line programs are old and antiquated.  Your dad, maybe even your grandpa wrote them.  They aren't very cool and definately not sexy like a shiny Cocoa application environment.  However, in 50 years Cocoa will have gone the way of the 8086 and your grandkids will still be writing code designed for the command line.  It's weird and its old, but it is also simple and future proof.  It will survive all permutions of an operating system, beause it is an operating system in it's purest form.

The purpose of Argparse is just that, to preserve this beautiful beast of a concept without the waste of prescious time and 500 lines of strcmp()'s.  Argparse is designed to allow you to focus on writing good code while minimizing the difficulty of the interface implementation.  This project may be evolving for a while, because even as I write this, I still have not quite figured out *exactlty* what is needs to do.  Only the end result.

## Building:

1. Clone / untar and cd into root directory
2. Create a build directory and change to that directory.
3. cmake ..
4. make

Currently libraries will be created in root, and a test binary will be created as well based of the test implementations in the test directory.  Some of this is temporary.  Just wait.  It will make sense eventually.