#ifndef UTILY_BOI_H_
#define UTILY_BOI_H_

#include <vector>
#include "constants.h"

//sort the data
void sortData(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses);

//gets the next process from the vector, then removes it from the vector
//returns removed process
process getNext(std::vector<process> &myProcesses);

    //returns the number of entries in the vector
int getSize(std::vector<process> &myProcesses);

//if cannot correct, then drop row
//return number of rows in myProcesses
int handleMissingData(std::vector<process> &myProcesses);

#endif