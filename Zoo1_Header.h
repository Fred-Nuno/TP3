#ifndef ZOO1_HEADER_H
#define ZOO1_HEADER_H

#include <string>

class ZooAnimal_1
{
private:        // Data
    char *name;
    int cageNumber;
    int weightDate;
    int weight;

protected:      // Data

public:         // Data



private:        // Functions

protected:      // Functions

public:         // Functions
    void Destroy (); // destroy function
    char* reptName ();
    int daysSinceLastWeighed (int today);
    void create(char, int, int, int );

};

#endif // ZOO1_HEADER_H
