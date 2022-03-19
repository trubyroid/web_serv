#include "Config.hpp"

int main(int argc, char **argv){

    std::string fileName;

    fileName = (std::string)(argv[1]);
    Config parser(fileName);
    return(0);
}