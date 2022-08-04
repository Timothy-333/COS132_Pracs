#include <iostream>
#include "dog.h"

int input, dogAge;
int dogsCount;
string dogName, option, ownerName, address;
Dog dog[10];
Citizen *tempOwner;
void printDogs(int a);
void swapNames(string &aname, string &bname);
int main() 
{
    do
    {
        cout<<"Enter 1 to add a dog, 2 to swap names or 3 to stop: ";
        cin>>input;
        if (input == 1)
        {
            cout << "Please enter the name of the dog: ";
            cin >> dogName;
            dog[dogsCount].setName(dogName);

            cout << "Please enter the age: ";
            cin >> dogAge;
            dog[dogsCount].setAge(dogAge);

            cout << "Does the dog have an owner: ";
            cin >> option;

            if(option == "Yes")
            {
                tempOwner = new Citizen();
                cout << "Please enter the owners name: ";
                cin >> ownerName;
                tempOwner->setName(ownerName);

                cout << "Please enter the address: ";
                cin >> address;
                tempOwner->setAddress(address);
                dog[dogsCount].setCitizen(tempOwner);
            }
            dogsCount++;
        }
        else if(input == 2)
        {
            string dogOne, dogTwo;
            cout << "Enter name of first dog: ";
            cin >> dogOne;
            cout << "Enter name of second dog: ";
            cin >> dogTwo;
            swapNames(dogOne, dogTwo);
        }
        
        if(input != 3){
            cout << "The list of dogs are as follows: ";
            printDogs(dogsCount);
            }
    }
    while(input != 3);
    return 0;
}

void printDogs(int counter)
{
    for (size_t i = 0; i < counter; i++)
    {
        cout<<dog[i].getName()<<"(Owner: "<<dog[i].getCitizen()->getName()<<")";
        if(i<counter-1)
        {
            cout<<", ";
        }
    }
    cout << endl;
}
void swapNames(string &aname, string &bname)
{
    bool flag1 = false;
    bool flag2 = false;
    for (size_t i = 0; i < dogsCount; i++)
    {
        if(dog[i].getName() == aname)
        {
            dog[i].setName(bname);
            flag1 = true;
        }
        else if(dog[i].getName() == bname)
        {
            dog[i].setName(aname);
            flag2 = true;
        }

    }
    if(!flag1 && !flag2)
        cout << "No dog found" << endl;
}
