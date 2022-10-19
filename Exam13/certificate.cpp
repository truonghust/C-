#include "certificate.h"

int Certificate::getId() const
{
    return Id;
}

void Certificate::setId(int newId)
{
    Id = newId;
}

const string &Certificate::getName() const
{
    return name;
}

void Certificate::setName(const string &newName)
{
    name = newName;
}



const string &Certificate::getRank() const
{
    return rank;
}

void Certificate::setRank(const string &newRank)
{
    rank = newRank;
}

Certificate::~Certificate()
{

}

const DMY &Certificate::getDate_cer() const
{
    return date_cer;
}

void Certificate::setDate_cer(const DMY &newDate_cer)
{
    date_cer = newDate_cer;
}

Certificate::Certificate()
{

}
