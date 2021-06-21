#ifndef _MODULAS_H_
#define _MODULAS_H_
#include <vector>
#include <stdio.h> 
#include <iomanip>
#include <iostream>
#include "UserIO.h"
#include <array>
using namespace std;

vector <int> Fill(int m);
vector <int> addition_of_numbers_in_Zn(vector <int> arr, int n);
vector <int> substraction_of_numbers_in_Zn(vector <int> arr, int n);
vector <int> multiplication_of_numbers_in_Zn(vector <int> arr, int n);
vector <int> FindPairsOfReciprocals(vector <int> arr, int n); 
vector <int> FindReciprocalElement(vector<int> arr, int n, int r);
vector <int> FindReciprocalElementEuclid (vector<int> arr, int n, int r);
vector <int> Divide_the_elements_in_Zn(vector <int> arr, int n);
vector <int> Perform_quick_grading(vector <int> arr, int n);
vector <int> Perform_quick_grading2(vector <int> arr, int n);
bool is_even(double i, double n);
bool is_in_the_residual_ring(vector <int> arr, int n, int c);
vector <int> CheckIfAnElementIsAPrimitiveRoot(vector <int> arr, int n);
vector <int> FindAllPrimitiveRootsInZn(vector <int> arr, int n);






#endif 