#include "Config.hpp"

Config::Config(){
}

Config::Config(std::string str){
    read_file(str);
}

Config::~Config(){
}

int Config::read_file(std::string fileName){

    std::ifstream in(fileName);

    if (in.is_open())
    {
        while (getline(in, line))
        {
            std::cout << line << std::endl;
        }
    }
    in.close();
    std::cout << line << std::endl;
    return 0;
}

void Config::pars(){
    
}