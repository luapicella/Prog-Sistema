//
// Created by luigi on 14/04/21.
//

#include <iostream>
#include "Directory.h"

Directory* Directory::root{nullptr};

Directory::Directory(string name, Directory* father) {
    this->name = name;
    this->father = father;
}

Directory::Directory() {
}

Directory::~Directory(){
    std::cout << "Distruttore Directory: " << this->name << std::endl;
    for (auto it = this->sons.cbegin(), next_it = it;  it != this->sons.cend(); it= next_it ) {
        ++next_it;
        delete it->second;
    }
}

Directory * Directory::getRoot() {
    if (Directory::root == nullptr)
        Directory::root = new Directory("/", nullptr);
    return  Directory::root;
}


Directory * Directory::addDirectory(const std::string &name) {
    auto base = this->get(name);
    if (base == nullptr){
        Directory* newChild= new Directory(name,this);
        this->sons.insert({name,newChild});
        std::cout << "AddDirectory :" << name << " to: " << this->name << std::endl;
        return newChild;
    }else{
        if(base->mType() == 1)
            return nullptr;
        else
            return dynamic_cast<Directory *>(base);
    }
}

File * Directory::addFile(const std::string &name, uintmax_t size) {
    auto base = this->get(name);
    if (base == nullptr) {
        File* newFile = new File(name,size);
        this->sons.insert({name,newFile});
        std::cout << "AddFile :" << name << " to: " << this->name << std::endl;
        return newFile;
    }else
        return nullptr;
}

Directory * Directory::getDir(const std::string &name) {

    if (name == "." || (this->name=="root" && name==".."))
        return this;
    if (name == "..")
        return this->father;
    auto base = this->get(name);
    if (base != nullptr){
        return dynamic_cast<Directory *>(base);
    }
    return nullptr;
}

Base * Directory::get(const std::string &name) {
    if (name == "." || (this->name=="root" && name==".."))
        return this;
    if (name == "..")
        return this->father;
    auto it = this->sons.find(name);
    if (it != this->sons.end())
        return it->second;
    return nullptr;
}

File * Directory::getFile(const std::string &name) {
    auto base = this->get(name);
    if (base != nullptr){
        return dynamic_cast<File *>(base);
    }
    return nullptr;
}

bool Directory::remove(const std::string &name) {
    auto base = this->get(name);
    if (base != nullptr) {
        std::cout << "RemoveBase :" << base->getName() << " to: " << this->name << std::endl;
        delete base;
        this->sons.erase(name);
        return true;
    }
    return false;
}

bool Directory::move(const std::string &name, Directory *target) {
    //check if a child 'name' exist
    if(this->sons.find(name) != this->sons.end()){
        Directory* dir = this->getDir(name);
        //delete son from sons of current directory
        this->sons.erase(name);
        //add child from children of target directory and update the father
        target->sons.insert({name, dir}) ;
        dir->father = target;
        return true;
    }
    return false;

}
bool Directory::copy(const std::string &name, Directory *target) {
    if(this->sons.find(name) != this->sons.end()){
        Base* base = this->get(name);
        if (base->mType()){
            File* file = this->getFile(name);
            File *copyFile = new File(file->getName(),file->getSize());
            target->sons.insert({name,copyFile});
            std::cout << "Copy :" << name << " to: " << target->getName() << std::endl;
        }else {
            Directory *dir = this->getDir(name);
            Directory *copyDir = new Directory(dir->getName(), target);
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


