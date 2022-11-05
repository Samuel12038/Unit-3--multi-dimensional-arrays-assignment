//Student Name: Samuel Coronado

//Teacher: Dr. Tyson McMillan

//Date:

//A program to practice working with multi-dimensional arrays

#include <iostream>

using namespace std;

/*

Research Input data: go to http://www.weather.comLinks to an external site.

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//City_One = 1, City_Two = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City Miami, Day X: Temp

Miami, Day 1: 84

Miami, Day 2: 84

Miami, Day 3: 82

Miami, Day 4: 81

Miami, Day 5: 81

Miami, Day 6: 83

Miami, Day 7: 82

Dallas, Day 1: 81

Dallas, Day 2: 80

Dallas, Day 3: 81

Dallas, Day 4: 80

Dallas, Day 5: 77

Dallas, Day 6: 58

Dallas, Day 7: 56

*/



int main()

{

    const int CITY = 1;

    const int WEEK = 7;



    int temperature[CITY][WEEK];

    //Note your input data from the above

    cout << "Enter all temperature for a week of first city and then second city. \n";



    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

    for (int i = 0; i < CITY; i++)

    {

        for (int j = 0; j < WEEK; j++)

        {

            cout << "Miami" << ", Day " << j + 1 << " : ";

            cin >> temperature[i][j];

        }

    }
    for (int i = 0; i < CITY; i++)

    {

        for (int j = 0; j < WEEK; j++)

        {

            cout << "Dallas" << ", Day " << j + 1 << " : ";

            cin >> temperature[i][j];

        }

    }





    cout << "\n\nDisplaying Values:\n";



    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; ++i)

    {

        for (int j = 0; j < WEEK; ++j)

        {

            cout << "Miami" << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

        }

    }
    for (int i = 0; i < CITY; ++i)

    {

        for (int j = 0; j < WEEK; ++j)

        {

            cout << "Dallas" << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

        }


    }

    int Miami[7] = { 84,84,82,81,81,83,82 };
    for (int i = 0; i < 7; i++)

        cout << "Miami, Day-" << i << "=" << Miami[i] << "\n";

    int Dallas[7] = {81,80,81,80,77,58,56};
    for (int i = 0; i < 7; i++)

        cout << "Dallas, Day-" << i << "=" << Dallas[i] << "\n";

    /*For up to 5 Points Extra Credit

       Expand this program:

1.	Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....



        cout << "Miami " << i << "=" << Miami[i] << "\n";

1.

       2. Create a on dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....

       3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.

       4. print the results of temperature[i][j]; to the screen.

     */





    return 0;

}
