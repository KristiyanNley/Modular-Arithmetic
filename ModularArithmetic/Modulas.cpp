#include "Modulas.h"
#include "UserIO.h"
#include <vector>
#include <stdio.h> 
#include <iomanip>
#include <cctype>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <iostream>
#include <array>

using namespace std;

vector <int> Fill(int m) {
	int number;
	vector<int> vec;
	vector <int> vec1 = { 0,1,2,3,4,5,6,7,8,9 };

	for (int i{ 1 }; i <= vec1.size(); ++i)
	{
		number = i % m;
		vec.push_back(number);
	}

	auto end = vec.end();
	for (auto it = vec.begin(); it != end; ++it) {
		end = remove(it + 1, end, *it);
	}
	vec.erase(end, vec.end());

	sort(vec.begin(), vec.end());

	return vec;
}

vector<int> addition_of_numbers_in_Zn(vector<int> arr, int n)
{
	vector<int> result;

	for (int i{ 0 }; i < arr.size(); ++i) 
	{
		for (int j{ 0 }; j <= i; j++) 
		{
				cout << "( "<< i << " + " << j << " ) " << " % " << n << " = " << (i + j) % n << endl;
				result.push_back((i + j) % n);
		}
	}

	return result;

}

vector<int> substraction_of_numbers_in_Zn(vector<int> arr, int n)
{
	vector<int> result;

	for (int i{ 0 }; i < arr.size(); ++i)
	{
		for (int j{ 0 }; j <= i; j++)
		{
				cout << "( " << i << " - " << j << " )" << " % " << n << " = " << (i - j) % n << endl;
				result.push_back((i - j) % n);
		}
	}

	return result;

}

vector<int> multiplication_of_numbers_in_Zn(vector<int> arr, int n)
{
	vector<int> result;

	for (int i{ 0 }; i < arr.size(); ++i)
	{
		for (int j{ 0 }; j <= i; j++)
		{
				cout << "( " << i << " * " << j << " )" << " % " << n << " = " << (i * j) % n << endl;
				result.push_back((i * j) % n);
		}
	}

	return result;

}

vector<int> FindPairsOfReciprocals(vector<int> arr, int n) 
{
	vector<int> result;

	for (int i{ 0 }; i < arr.size(); ++i) {
		for (int j{ 0 }; j < n; ++j) {
			if ((arr[i] * arr[j]) % n == 1) {
				cout << "The reciprocal of " << arr[i] << " is " << arr[j] << " because " << "( " << arr[i] << " * " << arr[j] << " ) " << " % " << n << " = " << 1 << endl;

				result.push_back(j);
			}
		}
	}
	return result;
} 


vector<int> FindReciprocalElement(vector<int> arr, int n, int r)
{
	vector <int> result;

	for (int i{ 0 }; i < arr.size(); ++i) {
		if ((arr[i] * n % r) == 1) {
			cout << "Reciprocal element to " << n << " is found! It is:  " << arr[i] << endl;
			result.push_back(i);
		}
	}
	return result;
}

vector<int> FindReciprocalElementEuclid(vector<int> arr, int n, int r)
{
	vector<int> result;
	int gcd{};
	int gcd_element{};
	gcd_element = n % r;

	for (int i{ 0 }; i < arr.size(); ++i) {
		gcd = arr[i] % r;
		if (gcd_element == gcd) {
		cout << "Reciprocal element to " << n << " is found! It is:  " << arr[i] << endl;
		result.push_back(arr[i]);
		}
	}
	return result;
}

vector<int> Divide_the_elements_in_Zn(vector<int> arr, int n)
{
vector<int> result;
	
		for (int i{ 0 }; i < arr.size(); ++i)
		{
			for (int j{ 0 }; j < i; j++)
			{
				if (j != 0)
	
					if (arr[i] != arr[j]) {
						cout << endl << arr.at(i) << " * " << 1 << " / " << arr.at(j) << "  " << " = " << arr.at(i) * 1 / arr.at(j) << endl;
						result.push_back(j);
	
					}
			}
		}
		return result;
}

vector<int> Perform_quick_grading(vector<int> arr, int n)
{
	vector<int> result;
	int stepenuvane1{};
	int stepenuvane2{};

	for (int i{ 0 }; i < arr.size(); ++i) {
		for (int j{ 0 }; j < n; ++j) {
			if (arr[i] != 1) {
				if (j != 0) {
					int res = pow(arr[i], j);
					if (res % n == 1) {
						cout << arr[i] << " raised to the power of " << j << " % " << n << " = " << 1 << endl;
						cout << "Enter a base you wish to grade the number through: " << endl;
						cin >> stepenuvane1;
						stepenuvane2 = pow(arr[i], stepenuvane1);
						cout << arr[i] << " raised to the power of " << stepenuvane1 << " % " << j << " = " << stepenuvane2 % j << endl;
						cout << "\n----------------------------------------------------------" << endl;
					}
				}
			}
		}
	}

	return result;
}

vector<int> Perform_quick_grading2(vector<int> arr, int n)
{

	vector<int> result;
	int stepenuvane1{};
	int stepenuvane2{};

	for (int i{ 0 }; i < arr.size(); ++i) {
		for (int j{ 0 }; j < n; ++j) {
			if (arr[i] != 1) {
				if (j != 0) {
					int res = pow(arr[i], j);
					if (res % n == 1) {
						cout << arr[i] << " raised to the power of " << j << " % " << n << " = " << 1 << endl;
						cout << "Enter a base you wish to grade the number through: " << endl;
						cin >> stepenuvane1;
						for (int x{ 2 }; x <= 100; ++x) {
							if (x  == 2 || x == 16 || x == 32 || x==64) {
								stepenuvane2 = pow(arr[i], x);
								cout << arr[i] << " raised to the power of " << x << " % " << n << " = " << stepenuvane2 % n << endl;
								cout << "\n-----------------------------------------------------------" << endl;
							}
						}
					}
				}
			}
		}
	}

	return result;

}

bool is_even(double i, double n)
{
	if (i == 0)
		return false;
	else return (n / i) == 1.000 || (n / i) == 3.000 || (n / i) == 5.000 || (n / i) == 7.000 || (n / i) == 4.000;
}

bool is_in_the_residual_ring(vector <int> arr, int n, int c)
{
	vector <int> curr;
	int num;
	int num1;
	vector<int> new_arr;

	for (int i{ 0 }; i <= n; ++i) {
		num = pow(c, i);
		num1 = num % n;
		curr.push_back(num1);
	}

	auto end = curr.end();
	for (auto it = curr.begin(); it != end; ++it) {
		end = remove(it + 1, end, *it);
	}
	curr.erase(end, curr.end());

	sort(curr.begin(), curr.end());

	for (int i{ 0 }; i < arr.size(); ++i) {

		if (arr[i] != 0)
			if (gcd(arr[i], n) == 1 || gcd(arr[i], n) == -1)
			new_arr.push_back(arr[i]);
}

	for (auto a_elt : new_arr) {
		if (find(curr.begin(), curr.end(), a_elt) == curr.end()) {
			return false;
		}
	}
	return true;
}

vector<int> CheckIfAnElementIsAPrimitiveRoot(vector<int> arr, int n)
{
	int number{};
	int stepenuvannumber{};
	int modulized{};
	vector<int> result;
	cout << "Enter a number that you to check whether it is a primitive root in Zn: " << endl;
	cin >> number;

	for (int i{}; i < arr.size(); ++i) {
		if (arr[i] != 0) {
			stepenuvannumber = pow(number, arr[i]);
			modulized = stepenuvannumber % n;
			cout << "( " << number << " raised to the power of " << arr[i] << " ) " << " % " << n << " = " << modulized << endl;
			result.push_back(modulized);
		}
	}
																								
	if (all_of(result.begin(), result.end(), [&](int i) {return is_even(i, n); }) == true || is_in_the_residual_ring(arr,n,number) == false) {
		cout << endl << number << " is not a primitive root in modulo " << n << "!" << endl;
	}

	else cout << endl << number << " is a primitive root in modulo " << n << "!" << endl;

	return result;
}

vector<int> FindAllPrimitiveRootsInZn(vector<int> arr, int n)
{
	int stepenuvannumber{};
	int modulized{};
	vector<int> result;
	vector<int> integers = { 1,2,3,4,5,6,7,8,9 };

	for (int i{}; i < arr.size(); ++i) {
		for (int j{0}; j < 9; j ++){
			if (arr[i] != 0) {
				stepenuvannumber = pow(integers[j], arr[i]);
				modulized = stepenuvannumber % n;
				cout << "( " << integers[j] << " raised to the power of " << arr[i] << " ) " << " % " << n << " = " << modulized << endl;
				result.push_back(modulized);
			}
		}
	}

	auto end = result.end();
	for (auto it = result.begin(); it != end; ++it) {
		end = remove(it + 1, end, *it);
	}
	result.erase(end, result.end());

	sort(result.begin(), result.end());
	cout << endl << "----------------------------------" << endl;

	for (int i{ 0 }; i < result.size(); ++i) {
		if (result[i] != 0)
			if (is_even(result[i], n) == false && is_in_the_residual_ring(arr, n, result[i]) == true) {
				cout << result[i] << " is a primitive root for " << n << "! " << endl;
			}
			else cout << result[i] << " is not a primitive root for " << n << "!" << endl;
	}

	return result;
}

