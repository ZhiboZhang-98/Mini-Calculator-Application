#include <iostream>
#include<string>
using namespace std;

void main()
{
	int Choice, ValAdds;
	float result, val1, val2;
	char YorN;

	do {
		cout << "\t\t CALCULATOR \n ";
		cout << "\t\t ---------- \n";

		cout << "\t by: Zhibo Zhang \n";

		cout << "1" << "-" << "Addition" << endl;
		cout << "2" << "-" << "Division" << endl;
		cout << "3" << "-" << "Subtraction" << endl;
		cout << "4" << "-" << "Multiplication" << endl;
		cout << "5" << "-" << "Exit" << endl;

		do
		{
			cout << "Enter your choice(1-5): ";
			cin >> Choice;
		} while (Choice<1 || Choice>5);


		if (Choice == 1)
		{


			do {
				{
					do {
					
					cout << "\n\t\t CALCULATOR \n ";
					cout << "\t\t ---------- \n";
					cout << "\t\t ADDITION \n ";
					cout << "\t\t -------- \n";
					cout << "Enter the number of values to add: ";
					cin >> ValAdds;
					result = 0;
				} while (ValAdds <= 0);
					for (int i = 1; i <= ValAdds; i++)
					{
						cout << "Enter value " << i << ": ";
						cin >> val1;
						result = result + val1;
					}
					cout << "The result of the addition is " << result << endl; }

				do
				{
					cout << "Do you want to do another operation(y/n): ";
					cin >> YorN;
					YorN = toupper(YorN);
					system("cls");
				}
				
				while (YorN != 'N' && YorN != 'Y');


			} while (YorN == 'Y');
			
		}
		
		else if (Choice == 2)
		{
			do {
				{cout << "\n\t\t CALCULATOR \n ";
				cout << "\t\t ---------- \n";
				cout << "\t\t Division \n ";
				cout << "\t\t -------- \n";
				cout << "Enter the valor to divide: ";
				cin >> val1;
				cout << "Enter the divinder: ";
				cin >> val2;
				result = val1 / val2;
				cout << "The result of the division is " << result << endl; }
				do
				{
					cout << "Do you want to do another operation(y/n): ";
					cin >> YorN;
					YorN = toupper(YorN);
					system("cls");
				}

				while (YorN != 'N' && YorN != 'Y');
			}

		
		while (YorN == 'Y');

		
	}
	
	else if (Choice == 3)
	{
		do {
			{cout << "\n\t\t CALCULATOR \n ";
			cout << "\t\t ---------- \n";
			cout << "\t\t SUBTRACTION \n ";
			cout << "\t\t -------- \n";
			cout << "Enter the valor to substraction: ";
			cin >> val1;
			cout << "Enter the subtracter: ";
			cin >> val2;
			result = val1 - val2;
			cout << "The result of the division is " << result << endl; }
			do
			{
				cout << "Do you want to do another operation(y/n): ";
				cin >> YorN;
				YorN = toupper(YorN);
				system("cls");
			}

			while (YorN != 'N' && YorN != 'Y');
		}

	while (YorN == 'Y');

	system("cls");
	}
	
	else if (Choice == 4)
	{


		do {
			{do {
				system("cls");
				cout << "\n\t\t CALCULATOR \n ";
				cout << "\t\t ---------- \n";
				cout << "\t\t MULTIPLICATION \n ";
				cout << "\t\t -------------- \n";
				cout << "Enter the number of values to multiply: ";
				cin >> ValAdds;
				result = 1;
			} while (ValAdds <= 0);
			for (int i = 1; i <= ValAdds; i++)
			{
				cout << "Enter value " << i << ": ";
				cin >> val1;
				result = result*val1;
			}
			cout << "The result of the multiplication is " << result << endl; }

			do
			{
				cout << "Do you want to do another operation(y/n): ";
				cin >> YorN;
				YorN = toupper(YorN);
				system("cls");
			}

			while (YorN != 'N' && YorN != 'Y');


		} while (YorN == 'Y');
		system("cls");
	}
system("pause"); }

while (Choice != 5); }