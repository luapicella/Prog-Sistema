//
// Created by luigi on 17/04/21.
//

#ifndef LAB1BIS_MESSAGE_H
#define LAB1BIS_MESSAGE_H

#include <ostream>

#define DEBUG
//#define TIMELOGGER

class Message {
    long id;
    char *data;
    int size;

public:
    static int id_counter;
    static int alloc_counter;

    Message();
    ~Message();
    Message(int n);
    Message(const Message &source);
    Message(Message &&source);
    Message& operator=(const Message& source);
    Message& operator=(Message&& source);

    long get_id() const;
    int get_size() const;
    char* get_data() const;

    char* mkMessage(int );
};

std::ostream& operator<<(std::ostream& out, const Message& m);

#endif //LAB1BIS_MESSAGE_H
