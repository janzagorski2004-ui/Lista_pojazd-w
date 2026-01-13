#ifndef MAIN_HPP
#define MAIN_HPP

#include <vector>
#include <iostream>
#include <limits>

namespace JZ
{
    class Car;
    class Motorcycle;
}

/*
\brief Clears the standard input buffer.

This function resets the error state of std::cin and removes
all remaining characters up to the end of the current line.

It is used after invalid user input to prevent infinite input loops.
*/
void clearBuffer();

/*
\brief Adds a new raced vehicle to the application.

The function displays a menu allowing the user to choose
between adding a car or a motorcycle. It then collects all
required data from standard input with full validation.

Depending on the selected option, a Car or Motorcycle object
is created and added to the corresponding container.

\param cars Vector storing all car objects
\param motorcycles Vector storing all motorcycle objects
\param id_counter Reference to the global ID counter
*/
void addVehicle(
    std::vector<JZ::Car>& cars,
    std::vector<JZ::Motorcycle>& motorcycles,
    int& id_counter
);

/*
\brief Modifies an existing vehicle identified by its ID.

The function searches for a vehicle with the given ID
in both car and motorcycle collections. Once found,
an interactive menu allows the user to modify individual
fields of the object.

Numeric input is validated, and text input is handled
using std::getline.

\param cars Vector containing car objects
\param motorcycles Vector containing motorcycle objects
*/
void modifyVechicle(
    std::vector<JZ::Car>& cars,
    std::vector<JZ::Motorcycle>& motorcycles
);

/*
\brief Deletes a vehicle from the collection based on its ID.

The function searches through both car and motorcycle vectors
and removes the first object whose ID matches the user input.

\param cars Vector containing car objects
\param motorcycles Vector containing motorcycle objects
*/
void deleteVehicle(
    std::vector<JZ::Car>& cars,
    std::vector<JZ::Motorcycle>& motorcycles
);

/*
\brief Saves all raced vehicles to a file.

The function writes all vehicles to a text file using
a semicolon-separated format. Each record ends with
a type identifier (CAR or MOTO).

\param cars Vector containing car objects
\param motorcycles Vector containing motorcycle objects
*/
void safeToFile(
    std::vector<JZ::Car>& cars,
    std::vector<JZ::Motorcycle>& motorcycles
);

/*
\brief Loads vehicles from a file into memory.

The function reads the data file line by line, splits
each line using a semicolon delimiter, and reconstructs
Car or Motorcycle objects based on the stored type marker.

The ID counter is updated to ensure uniqueness for newly
created vehicles.

\param cars Vector to be filled with loaded car objects
\param motorcycles Vector to be filled with loaded motorcycle objects
\param id_counter Reference to the ID counter
*/
void readFromFile(
    std::vector<JZ::Car>& cars,
    std::vector<JZ::Motorcycle>& motorcycles,
    int& id_counter
);

/*
\brief Main entry point of the application.

The main function initializes data containers, loads
previously saved vehicles from file, and displays
a console-based menu to the user.

Available operations:
- Add a raced vehicle
- Modify an existing vehicle
- Delete a vehicle
- Display all vehicles
- Save data and exit the program

The program runs in a loop until the user selects
the save and exit option.

\return Returns 0 on successful program termination
*/
int main();

#endif // MAIN_HPP

