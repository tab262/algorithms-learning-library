#include <iostream>
#include "sorting_algorithms.h"

using namespace std;

void insertion_sort(double array_in[], int len)
{
    for (int i = 1; i < len; i++)
	{
		double current_element = array_in[i];
		int j;
		for (j = i - 1; j >= 0 && array_in[j] > current_element; j--)
		{
			array_in[j + 1] = array_in[j];

		}

		array_in[j + 1] = current_element;
		array_printer(array_in, len);
	}
}

void array_printer(double array_in[], int len)
{
	for (int i = 0; i < 50; i++) { cout << "-"; } cout << endl;
	for (int i = 0; i < len; i++)
	{
		cout << array_in[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 50; i++) { cout << "-"; } cout << endl;
}




