#include <iostream>
#include <string>
#include "sorting_algorithms.h"

using namespace std;

string menu_graphics();


int main()
{
    cout << "SUMMER ALGORITHMS: ALGORITHMS LIBRARY" << endl;
    for (int i = 0; i < 50; i++) { cout << "*"; } cout << endl;
    string full_reset = "reset";
    while (full_reset == "reset" || full_reset == "Reset" || full_reset == "RESET")
    {
        string alg_choice = menu_graphics();

        // C++ cant take strings as choices in case statements...quick fix here...ugly
        int pick;
        if (alg_choice == "ins")
            pick = 0;

        cout << "Please enter the length of your array (int)" << endl;

        int len;
        cin >> len;
        double * array_in = new double[len];

        for (int i = 0; i < 50; i++) { cout << "-"; } cout << endl;

        cout << "Now enter your numbers (double or int)" << endl;
        
        double user_in;
        for (int i = 0; i < len; i++)
        {
            cin >> user_in; 
            array_in[i] = user_in;
        }

        for (int i = 0; i < 50; i++) { cout << "-"; } cout << endl;

        cout << "Your entered array is as follows:" << endl;
        array_printer(array_in, len);

        for (int i = 0; i < 50; i++) { cout << "-"; } cout << endl;

        int reset = 1;
        while (reset == 1)
        {
            cout << "Sorting steps follow below" << endl;
            switch (pick)
            {
                case 0:
                    insertion_sort(array_in, len);
                    break;
                default:
                    cout << "Incorrect keyword..." << endl;
                    break;
            }

            cout << "Enter 0 to choose a new algorithm or 1 to exit this operation" << endl << endl;

            int new_alg;
            cin >> new_alg;
            if (new_alg  == 1) 
            {
                cout << "You sure bro? (y/n)" << endl;
                string ans;
                cin >> ans;
                if (ans == "yes" || ans == "Yes" || ans == "YES" || ans == "y" || ans == "Y")
                    reset = 0;
            }
            else
            {
                reset = 1;
                menu_graphics();
                cin >> pick;
            }
       
        }

        cout << "Enter [reset] if you'd like to enter a new array" << endl;
        cout << "Press anything to exit" << endl;
        cin >> full_reset;
        delete [] array_in;
        if (full_reset != "reset" || full_reset != "Reset" || full_reset != "RESET")
            break;
         
    }

    return 0;
}

string menu_graphics()
{
    cout << "CHOOSE AN ALGORITHM: TYPE KEY AND ENTER | Algorithm [key]" << endl;
    for (int i = 0; i < 50; i++) { cout << "*"; } cout << endl;
    cout << "Insertion Sort [ins]" << endl; 
    for (int i = 0; i < 50; i++) { cout << "-"; } cout << endl;
    string alg_choice;
    cin >> alg_choice;
    return alg_choice;
}








