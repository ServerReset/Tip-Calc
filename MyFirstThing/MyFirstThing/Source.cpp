
#include <iostream>

#include <string>

#include <limits>

#include <iomanip>

#include <map>

using namespace std;

void NextFirst()
{
	
	cout << endl << "Press Enter to Continue . . ." << endl;

	cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

	for (int a = 0; a < 28; a++)
	{

	cout << endl;

	}

}

void Next2()
{
	
	cout << endl << "Press Enter to Continue . . ." << endl;

	cin.ignore(std::numeric_limits<streamsize>::max(), '\n');


	for (int a = 0; a < 31; a++)
	{

		cout << endl;

	}
}

void Meals()
{

cout << setprecision(4);

int Ammount;

string pNames[250];

double pMoney[250];

double pTip[250];

int thing = 0;

int thing2 = 0;

int thing3 = 0;

int thing4 = 0;

int PersonNumber = 1;

double PersonMoney = 1;

int PersonTip = 1;

cout << "How Many People are in your Party? (Max 250)" << endl;

	cin >> Ammount;

		while (thing == 0)
		{
			Next2();

			cout << "Enter Person " << PersonNumber << "'s Name Here" << endl;

			cin >> pNames[PersonNumber--];

			cout << endl;

			PersonNumber++;

			if (PersonNumber == Ammount)
			{

				thing = 1;

			}

			PersonNumber++;

		} 

		PersonNumber = 1;

		while (thing2 == 0)
		{

			Next2();

			cout << "Enter Amount " << pNames[PersonNumber--] << " Owes" << endl;

			PersonNumber++;

			cout << "$";

			cin >> pMoney[PersonNumber--];

			if (pMoney[PersonNumber] < 10)
			{

				cout << setprecision(3);

			}

				cout << endl;

				PersonNumber++;

				if (PersonNumber == Ammount)
				{

					thing2 = 1;

				}

				PersonNumber++;

			} 

		PersonNumber = 1;

		string sName;

		map<string, float> sTax;

		sTax["Alabama"] = 4;
		sTax["Alaska"] = 0;
		sTax["Arizona"] = 5.6;
		sTax["Arkansas"] = 6.5;
		sTax["California"] = 8;
		sTax["Colorado"] = 7.25;
		sTax["Connecticut"] = 2.9;
		sTax["Delaware"] = 6.35;
		sTax["Florida"] = 0;
		sTax["Georgia"] = 6;
		sTax["Hawaii"] = 4;
		sTax["Idaho"] = 4;
		sTax["Illinois"] = 6;
		sTax["Indiana"] = 7.25;
		sTax["Iowa"] = 7;
		sTax["Kansas"] = 6;
		sTax["Kentucky"] = 6.5;
		sTax["Louisiana"] = 6;
		sTax["Maine"] = 5;
		sTax["Maryland"] = 5.5;
		sTax["Massachusetts"] = 6;
		sTax["Michigan"] = 6.25;
		sTax["Minnesota"] = 6;
		sTax["Mississippi"] = 6.875;
		sTax["Missouri"] = 7;
		sTax["Montana"] = 5.45;
		sTax["Nebraska"] = 0;
		sTax["Nevada"] = 5.5;
		sTax["New Hampshire"] = 6.85;
		sTax["New Jersey"] = 0;
		sTax["New Mexico"] = 6.875;
		sTax["New York"] = 5.125;
		sTax["North Carolina"] = 4;
		sTax["North Dakota"] = 4.75;
		sTax["Ohio"] = 5;
		sTax["Oklahoma"] = 5.75;
		sTax["Oregon"] = 4.5;
		sTax["Pennsylvania"] = 6;
		sTax["Rhode Island"] = 7;
		sTax["South Carolina"] = 6;
		sTax["South Dakota"] = 4.5;
		sTax["Tennessee"] = 13;
		sTax["Texas"] = 6.25;
		sTax["Utah"] = 8.95;
		sTax["Vermont"] = 6;
		sTax["Virginia"] = 7.8;
		sTax["Washington"] = 6.5;
		sTax["West Virginia"] = 6;
		sTax["Wisconsin"] = 5;
		sTax["Wyoming"] = 4;
		sTax["Dist of Columbia"] = 5.75;

		double sReal;

		cout << "What State Are you In? " << endl;

		cin >> sName;

		while (thing4 == 0) 
		{

		PersonMoney = pMoney[PersonNumber--];

		sReal = sTax.find(sName)->second;

		sReal /= 100;

		cout << "Tax /100 " << sReal << endl;

		sReal ++;

		cout << "Tax +1 " << sReal << endl;

		PersonMoney *= sReal;

		PersonNumber++;

		cout << "Ammount with tax " << PersonMoney << endl;

		if (PersonNumber == Ammount) 
		{

			thing4 = 1;

		}

		sReal = sTax.find(sName)->second;

		PersonNumber++;

}





		






















































	PersonNumber = 1;

	while (thing3 == 0)
	{

		Next2();

		cout << "Enter Tip Percent " << pNames[PersonNumber] << " Would Like To Add" << endl;

		cout << "%";

		cin >> pTip[PersonNumber--];

		pTip[PersonNumber] /= 100;

		cout << pTip[PersonNumber] << endl;

		pTip[PersonNumber] += 1;

		cout << pTip[PersonNumber] << endl;

		PersonNumber++;

		cout << pTip[PersonNumber] << endl;

		PersonMoney *= pTip[PersonNumber];

		pMoney[PersonNumber] = PersonMoney;

		cout << PersonMoney << endl;

		cout << endl;

		if (PersonNumber == Ammount)
		{

			thing3 = 1;

		}

		PersonNumber++;

	}

	PersonNumber = 1;

	Next2();

	while (PersonNumber <= Ammount)
	{
		
		cout << "This is what " << pNames[PersonNumber--] << " Owes With Tip" << endl;

		cout << endl;

		cout << "$" << pMoney[PersonNumber] << endl;

		cout << endl;

		PersonNumber++;

		PersonNumber++;

	}

	cout << endl;

}
	string People = "No";

	string Again = "Yes";

int main()
{

	while(Again == "Yes" || Again == "yes" || Again == "y" || Again == "Y")
	{
		
		cout << "Welcome to the tip calculator" << endl;

		NextFirst();

		Meals();

		cout << "Do You Want To Calculate Again?" << endl;

		cin >> Again;

		cout << endl;

	}















































































































































































































}