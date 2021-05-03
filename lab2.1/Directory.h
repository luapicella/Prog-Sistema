//
// Created by luigi on 14/04/21.
//

#ifndef LAB2_DIRECTORY_H
#define LAB2_DIRECTORY_H

#include <string>
#include <unordered_map>
#include "Base.h"
#include "File.h"
#include <memory>

using namespace std;

class Directory : public Base{
    std::string name;
    static shared_ptr<Directory> root;
    std::unordered_map<std::string ,shared_ptr<Base>> sons;
    weak_ptr<Directory> father;
    weak_ptr<Directory> self;

    Directory(string name, weak_ptr<Directory> father);
    Directory();
public:
    static shared_ptr<Directory> makeDirectory(string name, weak_ptr<Directory> father);
    ~Directory();
    static shared_ptr<Directory> getRoot();
    shared_ptr<Directory> addDirectory(const std::string &name);
    shared_ptr<File> addFile(const std::string &name, uintmax_t size);
    shared_ptr<Directory> getDir(const std::string &name);
    shared_ptr<File> getFile(const std::string &name);
    shared_ptr<Base> get(const std::string &name);
    bool remove(const std::string &name);
    bool move(const std::string &name, shared_ptr<Directory> target);
    bool copy(const std::string &name, shared_ptr<Directory> target);
    bool exist(const std::string &name);

    int mType() const;
    std::string getName() const;
    void ls(int indent) const;
};


#endif //LAB2_DIRECTORY_H
