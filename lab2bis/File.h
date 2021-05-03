//
// Created by luigi on 18/04/21.
//

#ifndef LAB2_FILE_H
#define LAB2_FILE_H

#include "Base.h"
#include <ctime>
#include <memory>

using namespace std;

class File: public Base {
    std::string name;
    int size;
    time_t date;

    File(const std::string &name,uintmax_t size);

public:
    static shared_ptr<File> makeFile(const std::string &name,uintmax_t size);

    ~File();
    uintmax_t getSize() const;
    uintmax_t getDate() const;

    std::string getName() const;
    int mType() const override;
    void ls(int indent) const override;
    bool remove(const std::string &name);
};


#endif //LAB2_FILE_H
