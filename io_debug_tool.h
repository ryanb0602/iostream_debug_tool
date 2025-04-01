#include <iostream>
#include <string>

#ifndef IO_DEBUG_TOOL_H
#define IO_DEBUG_TOOL_H

#define SILENT 0
#define MAIN_FUNCTIONS 1
#define MAIN_AND_SUB_FUNCTIONS 2
#define MAIN_SUB_AND_NUMERICAL_DATA 3

class debug_tool {
    public:
        void set_verbosity(int level, debug_tool &link);
        int get_verbosity();
    private:
        int verbosity;
};

void debug_print(int level, std::string &message);
void debug_print(int level, const char *message);

#endif