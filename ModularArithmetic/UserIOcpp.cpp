#include <iostream>
#include <algorithm>
#include <cmath>
#include <numeric>
#include "UserIO.h"
#include "Modulas.h"
#include <array>
using namespace std;

void menu()
{
	int selection{};
	int m{};
	int reciprocal{};
	int osnova{};
	int stepen{};
	cout << "Choose a modulus that you wish us to work with! :) : " << endl;
	cin >> m;
	vector <int> vec;
	vector <int> vec_addition;
	vector <int> vec_substraction;
	vector <int> vec_multiplication;
	vector <int> vec_pairs;
	vector <int> find_repricocal_elements;
	vector <int> find_repricocal_elementsEuclid;
	vector <int> division;
	vector <int> stepenuvane1;
	vector <int> stepenuvane2;
	vector <int> primitiveroot;
	vector <int> primitiveroots;

	do {
		cout << "\nWelcome to my modular arithmetic menu!" << endl;
		cout << "\n-------------------------------------------------" << endl;
		cout << "\nChoose one of the following options or press 0 to null out and quit the menu." << endl;
		cout << "1. Fill in an array with the elements in the residual ring Zn." << endl;
		cout << "2. Add up the elements in the residual ring Zn." << endl;
		cout << "3. Substract the elements in the residual ring Zn." << endl;
		cout << "4. Multiply the elements in the residual ring Zn with one another." << endl;
		cout << "5. Find the pairs of reciprocal elements in Zn: " << endl;
		cout << "6. Find the reciprocal element of a given one: " << endl;
		cout << "7. Find the reciprocal element of a given one using Euclid's algorithm: " << endl;
		cout << "8. Divide the elements in the residual ring Zn" << endl;
		cout << "9. Perform a quick grading." << endl;
		cout << "10. Perform a quick grading using the second method." << endl;
		cout << "11. Check if a number is a primitive root in Zn." << endl;
		cout << "12. Find all primitive roots in Zn." << endl;

		cin >> selection;

		switch (selection) {

		case 1:
			vec = Fill(m);
			cout << "\nGreat! The elements in the residual ring are: " << endl;
				for (const auto elements : vec)
					cout << elements << " ";
			cout << "\n-------------------------------" << endl;
			break;
		case 2:
			if (vec.size() == 0)
				cout << "Sorry, the residual ring is empty. Please first fill it up." << endl;
			else
			cout << "Here are the elements in the residual ring Zn added up: " << endl;
			vec_addition = addition_of_numbers_in_Zn(vec, m);
			cout << "\n-------------------------------" << endl;
			break;
		case 3:
			if (vec.size() == 0)
				cout << "Sorry, the residual ring is empty. Please first fill it up." << endl;
			cout << "Here are the elements in the residual ring Zn substracted from each other: " << endl;
			vec_substraction = substraction_of_numbers_in_Zn(vec, m);
			break;
		case 4:
			if (vec.size() == 0)
				cout << "Sorry, the residual ring is empty. Please first fill it up." << endl;
			cout << "Here are the elements in the residual rin Zn multiplied by one another: " << endl;
			vec_multiplication = multiplication_of_numbers_in_Zn(vec, m);
			break;
		case 5: 
			if (vec.size() == 0)
				cout << "Sorry, the residual ring is empty. Please first fill it up." << endl;
			cout << "Here are the pairs of reciprocal numbers in Zn: " << endl;
			vec_pairs = FindPairsOfReciprocals(vec, m);
			break;
		case 6:
			if (vec_pairs.size() == 0)
				cout << "Sorry, the residual ring is empty. Please first fill it up." << endl;
			cout << "Enter an element you wish you find the reciprocal element of: " << endl;
			cin >> reciprocal;
			find_repricocal_elements = FindReciprocalElement(vec_pairs, reciprocal, m);
			break;
		case 7:
			if (vec_pairs.size() == 0)
				cout << "Sorry, the residual ring is empty. Please first fill it up." << endl;
			cout << "Enter an element you wish to find the reciprocal element of using Euclid's algorithm: " << endl;
			cin >> reciprocal;
			find_repricocal_elementsEuclid = FindReciprocalElementEuclid(vec_pairs, reciprocal, m);
			break;
		case 8:
			if (vec.size() == 0)
				cout << "Sorry, the residual ring is empty. Please first fill it up." << endl;
			cout << "Here are the elements in the residual ring Zn divided:" << endl;
			division = Divide_the_elements_in_Zn(vec, m);
			break;

		case 9: 
			if (vec.size() == 0)
				cout << "Sorry, the residual ring is empty. Please first fill it up." << endl;
			stepenuvane1 = Perform_quick_grading(vec, m);
			break;
		case 10:
			if (vec.size() == 0)
				cout << "Sorry, the residual ring is empty. Please first fill it up." << endl;
			stepenuvane2 = Perform_quick_grading2(vec, m);
			break;
		case 11:
			if (vec.size() == 0)
				cout << "Sorry, the residual ring is empty. Please first fill it up." << endl;
			primitiveroot = CheckIfAnElementIsAPrimitiveRoot(vec, m);
			break;
		case 12:
			if (vec.size() == 0)
				cout << "Sorry, the residual ring is empty. Please first fill it up." << endl;
			primitiveroots = FindAllPrimitiveRootsInZn(vec, m);
			break;
		case 0:
			cout << "Goodbye!";
			break;
		default: cout << "Unknown option- Please try again." << endl;
			break;
		}
	} while (selection != 0);
}