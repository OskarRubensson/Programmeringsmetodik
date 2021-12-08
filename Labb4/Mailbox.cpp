// Labb4, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// Mailbox.cpp, 2021-12-08 - 2021-12-08
// kortfattat vad filen innehåller

//
// Created by oskar231@hotmail.com on 2021-12-08.
//

#include "Mailbox.h"
#include <algorithm>

std::vector<Email> Mailbox::emails(){
    return inbox;
}

size_t Mailbox::size(){
    return inbox.size();
}

auto Mailbox::begin(){
    return inbox.begin();
}

auto Mailbox::end(){
    return inbox.end();
}

void Mailbox::sortAuthor(){
    CompAuthorDateSubject cmp;
    std::sort(inbox.begin(), inbox.end(), cmp);
}

void Mailbox::sortDate(){
    CompDateAuthorSubject cmp;
    std::sort(inbox.begin(), inbox.end(), cmp);
}

void Mailbox::sortSubject(){
    CompSubjectAuthorDate cmp;
    std::sort(inbox.begin(), inbox.end(), cmp);
}