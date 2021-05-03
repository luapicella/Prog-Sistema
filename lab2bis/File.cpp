//
// Created by luigi on 18/04/21.
//

#include <iostream>
#include "File.h"

shared_ptr<File> File::makeFile(const std::string &name, uintmax_t size) {
    shared_ptr<File> obj(new File(name,size));
    return obj;
}

File::File(const std::string &name,uintmax_t size) {
    this->name = name;
    this->date = time(0);
    this->size = size;
}

File::~File() {
    std::cout << "Distruttore File" << std::endl;

}

uintmax_t File::getSize() const {
    return this->size;
}

uintmax_t File::getDate() const {
    return this->date;
}

int File::mType() const {
    return 1;
}

std::string File::getName() const {
    return this->name;
}

void File::ls(int indent) const {
    for (int i = 0; i < indent; i++)
        std::cout << " ";
    std::cout << "[-]" << this->name << std::endl;
   return;
}

bool File::remove(const std::string &name) {
    std::cout << "RemoveFile :" << name << " to: " << this->name << std::endl;
    return true;
}



