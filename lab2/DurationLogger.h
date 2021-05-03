//
// Created by luigi on 18/04/21.
//

#ifndef LAB2_DURATIONLOGGER_H
#define LAB2_DURATIONLOGGER_H

#include <iostream>
#include <string>
using namespace std;


class DurationLogger {
    float start;
    float end;
    string name;
public:
    DurationLogger(const std::string& name);
    ~DurationLogger();

};




#endif //LAB2_DURATIONLOGGER_H
