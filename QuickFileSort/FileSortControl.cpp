#include "pch.h"
#include "FileSortControl.h"

QuickFileSort::FileSortControl::FileSortControl()
{
	SortedFolderName = L"";
	FileName = L"";
}

QuickFileSort::FileSortControl::FileSortControl
(const std::filesystem::path& newFilename, const std::filesystem::path& newDirectory)
: FileName(newFilename), DestinationDirectory(newDirectory)
{}


const void QuickFileSort::FileSortControl::CreateNewFolder()
{
	if (!std::filesystem::exists(DestinationDirectory / SortedFolderName))
	{
		std::filesystem::create_directories(DestinationDirectory / SortedFolderName);
	}
}

const void QuickFileSort::FileSortControl::CopyToSorted()
{
	if(std::filesystem::exists(DestinationDirectory / SortedFolderName))
	{
		std::filesystem::copy(FileName, DestinationDirectory / SortedFolderName, std::filesystem::copy_options::skip_existing);
	}
}

const void QuickFileSort::FileSortControl::SortAndCopy()
{
	CreateNewFolder();
	CopyToSorted();
}

const void QuickFileSort::FileSortControl::MoveToSorted()
{
	std::filesystem::path FinalPath = DestinationDirectory;
	FinalPath /= SortedFolderName;
	FinalPath /= FileName.filename();
	if (!std::filesystem::exists(FinalPath))
	{
		std::filesystem::rename(FileName, FinalPath);
	}
}



void QuickFileSort::FileSortControl::setSortedFolder(const std::wstring newFolder)
{
	SortedFolderName = newFolder;
}

const std::filesystem::path QuickFileSort::FileSortControl::getFileName()
{
	return FileName;
}
const std::filesystem::path QuickFileSort::FileSortControl::getDestinationDirectory()
{
	return DestinationDirectory;
}
const std::wstring QuickFileSort::FileSortControl::getSortedFolderName()
{
	return SortedFolderName;
}
