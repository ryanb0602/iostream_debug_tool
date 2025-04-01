#include "io_debug_tool.h"


debug_tool *debug_link;

void debug_tool::set_verbosity(int level, debug_tool &link) {
    this->verbosity = level;
    debug_link = &link;
}

int debug_tool::get_verbosity() {
    return this->verbosity;
}

void debug_print(int level, std::string &message) {
    if (debug_link->get_verbosity() >= level) {
        std::cout << message << std::endl;
    }
}

void debug_print(int level, const char *message) {
    if (debug_link->get_verbosity() >= level) {
        std::cout << message << std::endl;
    }
}
