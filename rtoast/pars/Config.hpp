#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <map>

class Config{
    private:
        std::string line;
        Config();
    public:
        std::map <std::string,std::string> server;
        Config(std::string str);
        ~Config();
        int read_file(std::string fileName);
        void pars();
        
};
#endif