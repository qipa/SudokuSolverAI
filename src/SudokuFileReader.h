#ifndef SUDOKUFILEREADER_LOCK
#define SUDOKUFILEREADER_LOCK

#include <string>
#include <istream>
#include <fstream>
#include <sstream>
#include "SudokuBoard.h"

namespace sudoku_namespace
{
	sudoku_namespace::SudokuBoard* readFile ( std::string InputFileName );
	bool readLine ( std::istream& inputFile,  sudoku_namespace::SudokuFile* sf, int lineNumber  );
}

#endif
