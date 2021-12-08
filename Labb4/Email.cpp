// Labb4, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// Email.cpp, 2021-12-08 - 2021-12-08
// kortfattat vad filen innehåller

//
// Created by oskar231@hotmail.com on 2021-12-08.
//

#include "Email.h"
#include <iostream>


std::ostream& operator<<(std::ostream& out, const Email& email){
    out << "Subject: " << email.subject << std::endl
    << "From: " << email.author << std::endl
    << "Date: " << email.date << std::endl << std::endl;
    return out;
}