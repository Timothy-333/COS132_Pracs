#include <iostream>
using namespace std;

int main()
{
	int menuChoice;
	int typeChoice;
	int drinkChoice;

	string wantsDrinkString;
	bool wantsDrink;

	string food;
	string type;
	string drink;

	int costFood;
	int costDrink = 0;

	int foodQuantity;
	int drinkQuantity = 0;


	cout << "What would you like to order?" << endl 
		 << "MENU" << endl
		 << "1) Burger" << endl
		 << "2) Pizza" << endl
		 << "3) Quit" << endl
		 << "Please Enter Your Choice: ";
	cin >> menuChoice;

	switch(menuChoice)
	{
		case 1:
			food = "Burger";
			cout << "1) Chicken R35" << endl
				 << "2) Beef R40" << endl
				 << "3) Vegan R45" << endl
				 << "Please enter your choice (flavour): ";
			cin >> typeChoice;

			switch (typeChoice)
			{
			case 1:
				type = "Chicken ";
				costFood = 35;
				break;
			case 2:
				type = "Beef ";
				costFood = 40;
				break;
			case 3:
				type = "Vegan ";
				costFood = 45;
				break;
			default:
				return 0;
			}

			cout << "Please enter quantity: ";
			cin >> foodQuantity;

			break;

		case 2:
			food = "Pizza";
			cout << "1) Small R25" << endl
				 << "2) Medium R50" << endl
				 << "3) Large R75" << endl
				 << "Please enter your choice (size): ";
			cin >> typeChoice;

			switch (typeChoice)
			{
			case 1:
				type = "Small ";
				costFood = 25;
				break;
			case 2:
				type = "Medium ";
				costFood = 50;
				break;
			case 3:
				type = "Large ";
				costFood = 75;
				break;
			default:
				return 0;
			}

			cout << "Please enter quantity: ";
			cin >> foodQuantity;

			break;

		default:
			return 0;
	}

	cout << "Would you like to order a drink? (yes/no): ";
	cin >> wantsDrinkString;
	wantsDrink = (wantsDrinkString == "yes");

	if(wantsDrink)
	{
		cout << "1) Cola R10" << endl
			 << "2) Juice R13" << endl
			 << "3) Coffee R16" << endl
			 << "Please enter your choice: ";
		cin >> drinkChoice;
		switch (drinkChoice)
		{
		case 1:
			drink = "Cola";
			costDrink = 10;
			break;
		case 2:
			drink = "Juice";
			costDrink = 13;
			break;
		case 3:
			drink = "Coffee";
			costDrink = 16;
			break;
		default:
			break;
		}
		cout << "Please enter quantity: ";
		cin >> drinkQuantity;
	}

	cout << "You ordered the following items:" << endl
		 << "- " << foodQuantity << " x " << type + food + " R" << costFood << endl;
	if(wantsDrink)
		cout << "- " << drinkQuantity << " x " << drink + " R" << costDrink << endl;
	cout << "Total = R" << foodQuantity*costFood + drinkQuantity*costDrink << endl
		 << "Your order will be delivered soon, have a lovely day!";

	return 0;
}