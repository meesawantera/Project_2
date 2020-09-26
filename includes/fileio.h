#ifndef FILEIO_BOI_H_
#define FILEIO_BOI_H_

#include <string>

using namespace std;
#include <string>

#include "constants.h"

	int loadData(const std::string filename, std::vector<process> &myProcesses);
	int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif