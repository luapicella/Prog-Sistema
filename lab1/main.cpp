#include <iostream>
#include "Message.h"
#include "DurationLogger.h"
#include "MessageStore.h"


int main() {
    std::cout << "-----------LAB 1--------------" << std::endl;
    DurationLogger dur("main");
    MessageStore store(10);
    for (auto i =0 ; i<100;i++){
        Message tmp = Message(10);
        store.add(tmp);
    }

    int c= Message::alloc_counter;
    std::cout << c << std::endl;
    return 0;
}
