
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

		string State[50];

		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;
		State[0] = Alabama;

		string sTax[50];

		cout << "What State Are you In?" << endl;

		cin >> State;

			4
			Alaska None
			Arizona 5.6
			Arkansas 8
			California 7.25
			Colorado 2.9
			Connecticut 6.35
			Delaware None
			Florida 6
			Georgia 4
			Hawaii 4
			Idaho 6
			Illinois 7.25
			Indiana 7
			Iowa 6
			Kansas 6.5
			Kentucky 6
			Louisiana 5
			Maine 5.5
			Maryland 6
			Massachusetts 6.25
			Michigan 6
			Minnesota 6.875
			Mississippi 7
			Missouri 5.450
			Montana None
			Nebraska 5.5
			Nevada 6.85
			New Hampshire None
			New Jersey 6.875
			New Mexico 5.125
			New York 4
			North Carolina 4.75
			North Dakota 5
			Ohio 5.75
			Oklahoma 4.5
			Oregon None
			Pennsylvania 6
			Rhode Island 7
			South Carolina 6
			South Dakota 4.5
			Tennessee 13
			Texas 6.25
			Utah 8.95
			Vermont 6
			Virginia 7.8
			Washington 6.5
			West Virginia 6
			Wisconsin 5
			Wyoming 4
			Dist.of Columbia 5.75

				Alabama 4
				Alaska None
				Arizona 5.6
				Arkansas 8
				California 7.25
				Colorado 2.9
				Connecticut 6.35
				Delaware None
				Florida 6
				Georgia 4
				Hawaii 4
				Idaho 6
				Illinois 7.25
				Indiana 7
				Iowa 6
				Kansas 6.5
				Kentucky 6
				Louisiana 5
				Maine 5.5
				Maryland 6
				Massachusetts 6.25
				Michigan 6
				Minnesota 6.875
				Mississippi 7
				Missouri 5.450
				Montana None
				Nebraska 5.5
				Nevada 6.85
				New Hampshire None
				New Jersey 6.875
				New Mexico 5.125
				New York 4
				North Carolina 4.75
				North Dakota 5
				Ohio 5.75
				Oklahoma 4.5
				Oregon None
				Pennsylvania 6
				Rhode Island 7
				South Carolina 6
				South Dakota 4.5
				Tennessee 13
				Texas 6.25
				Utah 8.95
				Vermont 6
				Virginia 7.8
				Washington 6.5
				West Virginia 6
				Wisconsin 5
				Wyoming 4
				Dist.of Columbia 5.75






















































	PersonNumber = 1;

	while (thing3 == 0)
	{

		Next2();

		cout << "Enter Tip Percent " << pNames[PersonNumber] << " Would Like To Add" << endl;

		PersonMoney = pMoney[PersonNumber--];

		cout << "%";

		cin >> pTip[PersonNumber];

		pTip[PersonNumber] /= 100;

		pTip[PersonNumber] += 1;

		cout << pTip[PersonNumber] << endl;

		PersonMoney *= pTip[PersonNumber];

		pMoney[PersonNumber] = PersonMoney;

		cout << PersonMoney << endl;

		PersonNumber++;

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