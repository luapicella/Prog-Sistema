#include <iostream>
#include "Directory.h"

int main() {
    Directory* root = Directory::getRoot();
    auto alfa = root->addDirectory("alfa");
    auto beta = root->addDirectory("beta");
    beta->addDirectory("beta1");
    beta->addFile("pippo.txt",110);
    root->ls(4);
    root->getDir("beta")->addDirectory("beta2");
    alfa->getDir("..")->ls(1);
    beta->remove("beta2");
    //root->copy("beta",alfa);
    root->ls(4);



    return 0;
}


