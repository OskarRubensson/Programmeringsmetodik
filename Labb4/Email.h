// Labb4, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// Email.h, 2021-12-08 - 2021-12-08
// kortfattat vad filen innehåller

//
// Created by oskar231@hotmail.com on 2021-12-08.
//

#ifndef LABB4_EMAIL_H
#define LABB4_EMAIL_H


#include <string>

class Email {
public:
    Email() = delete;
    Email(std::string author, std::string date, std::string subject): author(author), date(date), subject(subject){
    }

    friend std::ostream& operator<<(std::ostream& out, const Email& email);

private:
    std::string author;
    std::string date;
    std::string subject;

    // Sorting methods
    friend struct CompDateAuthorSubject;
    friend struct CompAuthorDateSubject;
    friend struct CompSubjectAuthorDate;
};


struct CompDateAuthorSubject{
    bool operator()(const Email& lhs, const Email& rhs) {
        if (lhs.date != rhs.date)
            return lhs.date < rhs.date;
        if (lhs.author != rhs.author)
            return lhs.author < rhs.author;

        return lhs.subject < rhs.subject;
    }
};

struct CompAuthorDateSubject{
    bool operator()(const Email& lhs, const Email& rhs) {
        if (lhs.author != rhs.author)
            return lhs.author < rhs.author;
        if (lhs.date != rhs.date)
            return lhs.date < rhs.date;

        return lhs.subject < rhs.subject;
    }
};

struct CompSubjectAuthorDate{
    bool operator()(const Email& lhs, const Email& rhs){
        if (lhs.subject != rhs.subject)
            return lhs.subject < rhs.subject;
        if (lhs.author != rhs.author)
            return lhs.author < rhs.author;

        return lhs.date < rhs.date;
    }
};

#endif //LABB4_EMAIL_H
