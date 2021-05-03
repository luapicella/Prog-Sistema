//
// Created by luigi on 14/04/21.
//

#ifndef LAB2_DIRECTORY_H
#define LAB2_DIRECTORY_H

#include <string>
#include <unordered_map>
#include "Base.h"
#include "File.h"

using namespace std;

class Directory : public Base{
    std::string name;
    Directory* father;
    static Directory* root;
    std::unordered_map<std::string ,Base*> sons;
public:

    Directory(string name, Directory* father);
    Directory();
    ~Directory();
    static Directory* getRoot();
    Directory* addDirectory(const std::string &name);
    File* addFile(const std::string &name, uintmax_t size);
    Directory* getDir(const std::string &name);
    File* getFile(const std::string &name);
    Base* get(const std::string &name);
    bool remove(const std::string &name);
    bool move(const std::string &name, Directory *target);
    bool copy(const std::string &name, Directory *target);
    bool exist(const std::string &name);

    int mType() const;
    std::string getName() const;
    void ls(int indent) const;
};


#endif //LAB2_DIRECTORY_H
