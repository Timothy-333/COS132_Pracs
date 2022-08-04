#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
	ifstream infile;
	infile.open("turing.txt");
	ofstream outfile;
	outfile.open("tape.txt");

	string nextLine;
	getline(infile, nextLine);

	int counter = 0;
	char tape[10000];
	strcpy(tape, nextLine.c_str());
	int state = 0;
	bool accept = false;
	bool rejected = false;

	while (!accept && !rejected)
	{
		switch (state)
		{
		case 0:
			if (tape[counter] == NULL)
			{
				tape[counter] = 'U';
			}
			else if (tape[counter] == 'P')
			{
				tape[counter] = 'U';
				state = 1;
				counter++;
			}
			else if (tape[counter] == 'U' || tape[counter] == 'X')
			{
				rejected = true;
			}
			break;
		case 1:
			if (tape[counter] == NULL)
			{
				tape[counter] = 'U';
			}
			else if (tape[counter] == 'P')
			{
				tape[counter] = 'X';
				state = 2;
				counter++;
			}
			else if (tape[counter] == 'X')
			{
				counter++;
			}
			else if (tape[counter] == 'U')
			{
				accept = true;
				counter++;
			}
			break;
		case 2:
			if (tape[counter] == NULL)
			{
				tape[counter] = 'U';
			}
			else if (tape[counter] == 'P')
			{
				state = 3;
				counter++;
			}
			else if (tape[counter] == 'X')
			{
				counter++;
			}
			else if (tape[counter] == 'U')
			{
				state = 4;
				counter--;
			}
			break;
		case 3:
			if (tape[counter] == NULL)
			{
				tape[counter] = 'U';
			}
			else if (tape[counter] == 'P')
			{
				tape[counter] = 'X';
				state = 2;
				counter++;
			}
			else if (tape[counter] == 'U' || tape[counter] == 'X')
			{
				rejected = true;
			}
			break;
		case 4:
			if (tape[counter] == NULL)
			{
				tape[counter] = 'U';
			}
			else if (tape[counter] == 'P' || tape[counter] == 'X')
			{
				counter--;
			}
			else if (tape[counter] == 'U')
			{
				state = 1;
				counter++;
			}
			break;
		default:
			break;
		}	
	}
	string out;
	out.append(tape);

	cout << "The file contained: " << nextLine << endl;
	cout << "The final tape was: " << out << endl;
	if (accept)
	{
		cout << "The tape was accepted" << endl;
	}
	if (rejected)
	{
		cout << "The tape was rejected" << endl;
	}
	
	
	outfile << out;
	infile.close();
	outfile.close();
	return 0;
}