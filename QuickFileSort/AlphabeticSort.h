#pragma once

#include "FileSortControl.h"


namespace QuickFileSort
{
class AlphabeticSort: public FileSortControl
{
	public:
	AlphabeticSort(const std::filesystem::path& newFilename, const std::filesystem::path& newDirectory, size_t newSTRsize, int newCapatalization);

	protected:

	void SortName(size_t numOfLetters, const int Capatalization);

};

}
