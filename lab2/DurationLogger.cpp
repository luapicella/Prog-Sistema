//
// Created by luigi on 18/04/21.
//

#include "DurationLogger.h"

DurationLogger::DurationLogger(const std::string &name) {
    this->name = name;
    this->start = clock();
    std::cout <<">>>>>>>>>>>>>>>>>>>> starting ["<<this->name<<"]"<<std::endl;
}

DurationLogger::~DurationLogger(){
    this->end = clock() - this->start;
    std::cout <<"<<<<<<<<<<<<<<<<<<<< ending ["<<this->name<<"]: ["<<this->end/CLOCKS_PER_SEC*100000<<"]ms"<<std::endl;
}