#ifndef ZOOANIMAL_2_H
#define ZOOANIMAL_2_H

enum scale {ounces, kilograms};

class ZooAnimal_2
{

 private:
   char *name;
   int cageNumber;
   int weightDate;
   int weight;
   ZooAnimal_2 *mother;
 public:
   void Create (char*, int, int, int); // create function
   void Destroy (); // destroy function
   void isMotherOf (ZooAnimal_2&);
   void changeWeight (int pounds);
   inline void changeWeightDate (int today){weightDate = today;};       // Problen 2
   char* reptName ();
   int reptWeight ();
   void reptWeight (scale which);
   inline int reptWeightDate (){return weightDate;};    // Problem 1
   int daysSinceLastWeighed (int today);
};

#endif // ZOOANIMAL_2_H
