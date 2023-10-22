#include "pch.h"
#include"DateSort.h"


QuickFileSort::DateSort::DateSort
  (const std::filesystem::path& newFilename, const std::filesystem::path& newDirectory, 
  SYSTEMTIME& newTime, int InnerSplit) : FileSortControl(newFilename, newDirectory), FinalTime(newTime)
{
	DateSplit(InnerSplit);
}

void QuickFileSort::DateSort::DateSplit(int split)
{
	std::wstring FinalFolder = L"";

	if (split % 10)
	{	
		if(FinalFolder.size())
		{
			FinalFolder += L"\\";
		}
		FinalFolder += msclr::interop::marshal_as<std::wstring>(FinalTime.wYear.ToString());
	}
	split /= 10;
	if (split % 10)
	{
		if (FinalFolder.size())
		{
			FinalFolder += L"\\";
		}
		FinalFolder += msclr::interop::marshal_as<std::wstring>(FinalTime.wMonth.ToString());
	}
	split /= 10;
	if (split % 10)
	{
		if (FinalFolder.size())
		{
			FinalFolder += L"\\";
		}
		FinalFolder += msclr::interop::marshal_as<std::wstring>(FinalTime.wDay.ToString());
	}
	
	setSortedFolder(FinalFolder);
}