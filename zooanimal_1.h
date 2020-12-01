#ifndef ZOOANIMAL_1_H
#define ZOOANIMAL_1_H


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
    void Create(char*, int, int, int );
};

#endif // ZOOANIMAL_1_H
