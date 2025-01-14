#include "io_debug_tool.h"
#include <string>

debug_tool debug;

int main() {
    debug.set_verbosity(MAIN_AND_SUB_FUNCTIONS, debug);
    debug_print(MAIN_FUNCTIONS, "This is a main function message");
    debug_print(MAIN_AND_SUB_FUNCTIONS, "This is a main and sub function message");
    debug_print(MAIN_SUB_AND_NUMERICAL_DATA, "This is a main, sub function, and numerical data message");
    return 0;
}