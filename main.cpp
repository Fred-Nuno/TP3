#include <iostream>
#include <zooanimal_1.h>
#include <zooanimal_2.h>


int main()
{
//    ZooAnimal_1 bozo;
//    bozo.Create ("Bozo", 408, 1027, 400);

//    std::cout << "This animal's name is " << bozo.reptName()<< std::endl;

//    bozo.Destroy ();


    ZooAnimal_2 kido, mom;
    kido.Create ("Bozo", 408, 1027, 400);
    mom.Create("Mimuh", 407, 1027, 1400);

    std::cout << "Bozo's mother is " << mom.reptName()<< std::endl;

    return 0;
}
