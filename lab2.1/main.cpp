#include <iostream>
#include "Directory.h"

int main() {
    shared_ptr<Directory> root = Directory::getRoot();
    //std::cout<<"Count: " << root->getName() << "  " << root.use_count()<<std::endl;
    root->addDirectory("alfa");
    root->addDirectory("beta");
    //std::cout<<"Count: " << alfa->getName() << "  " << alfa.use_count()<<std::endl;
    //auto beta = root->addDirectory("beta");
    root->getDir("beta")->addDirectory("beta1");
    root->getDir("beta")->addFile("pippo.txt",110);
    root->getDir("beta")->addDirectory("beta2");
    root->ls(4);
    //beta->remove("beta2");
    //root->remove("beta");
    std::cout<<"Count alpha : " << root->getDir("alfa").use_count()<<std::endl;
    std::cout<<"Count beta : " << root->getDir("beta").use_count()<<std::endl;
    std::cout<<"Count beta1 : " << root->getDir("beta")->getDir("beta1").use_count()<<std::endl;

    root->copy("beta",root->getDir("alfa"));
    root->ls(4);



    return 0;
}


