//
// Created by luigi on 17/04/21.
//

#ifndef LAB1BIS_MESSAGESTORE_H
#define LAB1BIS_MESSAGESTORE_H


#include "Message.h"
#include <iostream>
#include <tuple>
#include <optional>

//#define DEBUG
//#define TIMELOGGER


class MessageStore {
    Message *messages;
    int dim; // dimensione corrente array
    int n; // incremento memoria
public:
    MessageStore(int n);

    ~MessageStore();

    void add(Message &m);
    // inserisce un nuovo messaggio o sovrascrive quello precedente
    //se ce n’è uno presente con lo stesso id

    std::optional<Message> get(long id);
    // restituisce un messaggio se presente

    bool remove(long id);
    // cancella un messaggio se presente

    std::tuple<int,int> stats();
    // restituisce il numero di messaggi validi e di elementi vuoti
    // ancora disponibili

    void compact();
    // compatta l’array (elimina le celle vuole e riporta l’array
    // alla dimensione multiplo di n minima in grado di contenere
    // tutte le celle

    void print();

};


#endif //LAB1BIS_MESSAGESTORE_H
