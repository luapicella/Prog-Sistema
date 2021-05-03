//
// Created by luigi on 18/04/21.
//

#ifndef LAB2_BASE_H
#define LAB2_BASE_H


#include <string>
#include <map>

class Base {
public:
    virtual std::string getName() const = 0 ;
    virtual int mType() const = 0;
    virtual void ls(int indent) const = 0;
    virtual bool remove(const std::string &name) = 0;
    virtual ~Base() = 0;
};

#endif //LAB2_BASE_H
