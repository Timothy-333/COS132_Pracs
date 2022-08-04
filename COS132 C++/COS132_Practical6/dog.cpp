#include "dog.h"
//#include "citizen.h"
//#include "citizen.cpp"

Dog::Dog()
{
    Name = "";
    Age = 0;
    ownerPtr = new Citizen();
    ownerPtr->setName("hoping for adoption");
}
Dog::~Dog()
{
    delete ownerPtr;
}
const std::string &Dog::getName() const
{
    return Name;
}
void Dog::setName(const string &dogName)
{
    Name = dogName;
}
int Dog::getAge() const
{
    return Age;
}
void Dog::setAge(int dogAge)
{
    Age = dogAge;
}
Citizen* Dog::getCitizen()
{
    return ownerPtr;
}
void Dog::setCitizen(Citizen *otherPtr)
{
    ownerPtr = new Citizen();
    ownerPtr->setName(otherPtr->getName());
    ownerPtr->setAddress( otherPtr->getAddress());
}