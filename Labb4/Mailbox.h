// Labb4, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// Mailbox.h, 2021-12-08 - 2021-12-08
// kortfattat vad filen innehåller

//
// Created by oskar231@hotmail.com on 2021-12-08.
//

#ifndef LABB4_MAILBOX_H
#define LABB4_MAILBOX_H


#include <vector>
#include "Email.h"

class Mailbox {
public:
    // Constructors
    Mailbox() = default;

    // Getters
    std::vector<Email> emails();
    size_t size();
    auto begin();
    auto end();

    // Setters
    void push_back(Email email){
        inbox.push_back(email);
    }

    // Sorting methods
    void sortAuthor();
    void sortDate();
    void sortSubject();
private:
    std::vector<Email> inbox;
};


#endif //LABB4_MAILBOX_H
