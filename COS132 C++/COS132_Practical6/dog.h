#ifndef DOG_H
#define DOG_H
#include "citizen.h"
#include <string>
using namespace std;

class Dog {

    private:
        string Name;
        int Age;
		Citizen* ownerPtr;
	public:
		Dog();
		~Dog();
		const string &getName() const;
		void setName(const string &name);
		int getAge() const;
		Citizen* getCitizen();
        void setCitizen(Citizen *otherPtr);
		void setAge(int age);
};

#endif //TEST_DOG_H
