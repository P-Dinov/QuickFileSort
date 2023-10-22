#pragma once
#include <string>
#include <list>
#include <fstream>
#include <filesystem>


namespace QuickFileSort
{
class FileSortControl
{
	public:
	FileSortControl();
	FileSortControl
	(const std::filesystem::path& newFilename, const std::filesystem::path& newDirectory);

	
	const virtual void CreateNewFolder();
	const virtual void CopyToSorted();
	const virtual void SortAndCopy();
	const virtual void MoveToSorted();
	
	const std::filesystem::path getFileName();
	const std::filesystem::path getDestinationDirectory();
	const std::wstring getSortedFolderName();


	protected:
	void setSortedFolder(const std::wstring newFolder);

	private:
	std::wstring SortedFolderName = {};
	std::filesystem::path DestinationDirectory;
	std::filesystem::path FileName;
};
}