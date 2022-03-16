#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <iostream>
#include <string>
#include <fstream>

class Config{
    private:
        Config();
    public:
        Config(std::string str);
        ~Config();
        int character_counter(char *fileName);
        void pars();
        
};
#endif