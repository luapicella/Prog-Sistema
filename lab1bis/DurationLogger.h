//
// Created by luigi on 17/04/21.
//

#ifndef LAB1BIS_DURATIONLOGGER_H
#define LAB1BIS_DURATIONLOGGER_H

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


#endif //LAB1BIS_DURATIONLOGGER_H
