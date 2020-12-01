#include "zooanimal_1.h"


void ZooAnimal_1::Create(char * nm, int cageNum, int wtDate, int wt) {
    name = nm ;
    cageNumber = cageNum;
    weightDate = wtDate;
    weight = wt;
}

void ZooAnimal_1::Destroy (){
    delete [] name;
}

// -------- member function to return the animal's name
char* ZooAnimal_1::reptName (){
    return name;
}

// -------- member function to return the number of days
// -------- since the animal was last weighed
int ZooAnimal_1::daysSinceLastWeighed(int today){
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday)
     thisday += 360;
    return (thisday-startday);
}
