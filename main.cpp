#include <iostream>
#include "ToDo.h"

/* cmake tutorial

mkdir demo && cd demo
touch CMakeLists.txt
touch main.cpp
touch ToDo.cpp
touch ToDo.h
mkdir build && cd build
## cmake --help  ## see options eg. "Unix Makefiles"
cmake -G "Unix Makefiles" ..  ## .. is IMPT, refer to ../CMakeLists.txt
ls  ## observe 4 files - CMakeCache.txt  Makefile  CMakeFiles  cmake_install.cmake
make
./toDo

 */

int main(int argc, char** argv) {
	ToDo list;

	std::cout << "end.\n";

	return 0;
}
