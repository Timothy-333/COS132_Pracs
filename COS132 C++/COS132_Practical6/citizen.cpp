#include "citizen.h"

Citizen::Citizen()
{
}
Citizen::~Citizen() 
{
}  
void Citizen::setName(const string &name)
{
    Name = name;
}
void Citizen::setAddress(const string &ownerAddress)
{
    Address = ownerAddress;
}

const string &Citizen::getName() const
{
    return Name;
}
const string &Citizen::getAddress () const
{
    return Address;
}