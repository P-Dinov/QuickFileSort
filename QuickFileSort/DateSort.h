#pragma once
#include"FileSortControl.h"
#include <vector>
#include <Windows.h>

namespace QuickFileSort
{
	class DateSort : public FileSortControl
	{
		public:
		DateSort(const std::filesystem::path& newFilename, const std::filesystem::path& newDirectory,
		  SYSTEMTIME& newTime, int InnerSplit);

		protected:
		void DateSplit(int split);

		private:
		SYSTEMTIME FinalTime;
		//std::vector<std::wstring> InnerSeparations;
	};

}