//
// Created by luigi on 14/04/21.
//

#include <iostream>
#include "Directory.h"

shared_ptr<Directory> Directory::root{shared_ptr<Directory>()};

Directory::Directory(string name, weak_ptr<Directory> father) {
    this->name = name;
}

shared_ptr<Directory> Directory::makeDirectory(string name, weak_ptr<Directory> father) {
    shared_ptr<Directory> obj(new Directory(name,father));
    obj->self = obj;
    obj->father = father;
    return obj;
}

Directory::Directory() {
}

Directory::~Directory(){
    std::cout << "Distruttore Directory: " << this->name << std::endl;
}

shared_ptr<Directory> Directory::getRoot() {
    if (Directory::root == nullptr) {
        Directory::root = Directory::makeDirectory("/", shared_ptr<Directory>());
    }
    return  Directory::root;
}


shared_ptr<Directory> Directory::addDirectory(const std::string &name) {
    auto base = this->get(name);
    if (base == nullptr){
        shared_ptr<Directory> newChild = Directory::makeDirectory(name, this->self);
        this->sons.insert({name,newChild});
        std::cout << "AddDirectory :" << name << " to: " << this->name << std::endl;
        return newChild;
    }else{
        if(base->mType() == 1)
            return shared_ptr<Directory>();
        else
            return dynamic_pointer_cast<Directory>(base);
    }
}

shared_ptr<File> Directory::addFile(const std::string &name, uintmax_t size) {
    auto base = this->get(name);
    if (!base) {
        shared_ptr<File> newFile = File::makeFile(name,size);
        this->sons.insert({name,newFile});
        std::cout << "AddFile :" << name << " to: " << this->name << std::endl;
        return newFile;
    }else
        return shared_ptr<File>();
}

shared_ptr<Directory> Directory::getDir(const std::string &name) {

    if (name == "." || (this->name=="root" && name==".."))
        return this->self.lock();
    if (name == "..")
        return this->father.lock();
    auto base = this->get(name);
    if (base){
        return dynamic_pointer_cast<Directory>(base);
    }
    return shared_ptr<Directory>();
}

shared_ptr<Base> Directory::get(const std::string &name) {
    if (name == "." || (this->name=="root" && name==".."))
        return this->self.lock();
    if (name == "..")
        return this->father.lock();
    auto it = this->sons.find(name);
    if (it != this->sons.end())
        return it->second;
    return shared_ptr<Base>();
}

shared_ptr<File> Directory::getFile(const std::string &name) {
    auto base = this->get(name);
    if (base != nullptr){
        return dynamic_pointer_cast<File>(base);
    }
    return shared_ptr<File>();
}

bool Directory::remove(const std::string &name) {
    auto base = this->get(name);
    if (base) {
        std::cout << "RemoveBase :" << base->getName() << " to: " << this->name << std::endl;
        //delete base;
        this->sons.erase(name);
        return true;
    }
    return false;
}

bool Directory::move(const std::string &name, shared_ptr<Directory> target) {
    //check if a child 'name' exist
    if(this->sons.find(name) != this->sons.end()){
        shared_ptr<Directory> dir = this->getDir(name);
        //delete son from sons of current directory
        this->sons.erase(name);
        //add child from children of target directory and update the father
        target->sons.insert({name, dir}) ;
        dir->father = target;
        return true;
    }
    return false;

}
bool Directory::copy(const std::string &name, shared_ptr<Directory> target) {
    if(this->sons.find(name) != this->sons.end()){
        shared_ptr<Base> base = this->get(name);
        if (base->mType()){
            shared_ptr<File> file = this->getFile(name);
            shared_ptr<File> copyFile = File::makeFile(file->getName(),file->getSize());
            target->sons.insert({name,copyFile});
            std::cout << "Copy :" << name << " to: " << target->getName() << std::endl;
        }else {
            shared_ptr<Directory> dir = this->getDir(name);
            shared_ptr<Directory> copyDir = Directory::makeDirectory(dir->getName(), target);
            for (auto it : dir->sons) {
                dir->copy(it.first, copyDir);
            }
            target->sons.insert({name, copyDir});
            std::cout << "Copy :" << name << " to: " << target->getName() << std::endl;
        }
        return true;
    }
    return false;
}

int Directory::mType() const {
    return 0;
}

std::string Directory::getName() const {
    return this->name;
}

void Directory::ls(int indent) const {
    for (int i = 0; i < indent; i++)
        std::cout << " ";
    std::cout << "[+]" << this->name << std::endl;
    if(this->sons.size() > 0){
        for (auto it : this->sons) {
            it.second->ls(indent*2);
        }
    }
}


