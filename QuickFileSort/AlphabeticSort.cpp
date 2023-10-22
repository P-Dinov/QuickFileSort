#include "pch.h"
#include "AlphabeticSort.h"
#include<locale>


QuickFileSort::AlphabeticSort::AlphabeticSort
  (const std::filesystem::path& newFilename, const std::filesystem::path& newDirectory, size_t newSTRsize, int newCapatalization) :
  FileSortControl(newFilename, newDirectory) 
{
	SortName(newSTRsize, newCapatalization);
}


void QuickFileSort::AlphabeticSort::SortName(const size_t numOfLetters, const int Capatalization)
{
	std::wstring fName = getFileName().stem().wstring();
	size_t shortest = (((numOfLetters) < (fName.size())) ? (numOfLetters) : (fName.size()));

	std::wstring finalName = L"";

	std::setlocale(LC_ALL, NULL);

	switch (Capatalization)
	{
		case 1:
			for (int i = 0; i < shortest; i++)
			{
				finalName += std::toupper(fName[i], std::locale());
			}
		break;

		case 2:
			for (int i = 0; i < shortest; i++)
			{
				finalName += std::tolower(fName[i], std::locale());
			}
		break;

		default:
			for (int i = 0; i < shortest; i++)
			{
				finalName += fName[i];
			}
		break;

	}


	setSortedFolder(finalName);
}