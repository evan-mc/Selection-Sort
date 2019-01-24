#include <iostream>
#include <vector>
#include <utility>

template<typename Iter>
void selectionSort(Iter start, Iter end);

template<typename Iter>
Iter minIndex(Iter start, Iter end);

int main()
{
	std::vector<double> nums = {2.1, 1.5, 3.3, 4.1, 8.6, 6.9, 5.3, 7.2, 2.2, 5.4};
	selectionSort(std::begin(nums), std::end(nums));

	for (const auto elem : nums)
		std::cout << elem << " ";
	system("pause");
	return 0;
}

template<typename Iter>
void selectionSort(Iter start, Iter end)
{
	while(start != end)
	{
		auto minNum = minIndex(start, end);

		std::swap(*start, *minNum);

		++start;
	}
}

template<typename Iter>
Iter minIndex(Iter start, Iter end)
{
	Iter minIdx = start;
	auto minNum = *start;

	while (++start != end)
	{
		if (*start < minNum)
		{
			minNum = *start;
			minIdx = start;
		}
	}
	return minIdx;
}
