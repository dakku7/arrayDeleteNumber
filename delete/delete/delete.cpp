#include<iostream>
#include<vector>

int main()
{
	int numbers;

	std::vector<int> array;
	std::cout << "Enter numbers (-1 to stop):";

	while (true) {
		std::cin >> numbers;
		if (numbers == -1) {
			break;
		}
		array.push_back(numbers);
	}
	std::cout << "Your array: ";
	for (int i = 0; i < array.size(); i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Enter the number to delete: ";
	int deleteNumber;
	std::cin >> deleteNumber;

	int iteration = 0;
	for (int i = 0; i < array.size(); ++i) {

		if (array[i] != deleteNumber) {
			array[iteration] = array[i];
			iteration++;
		}
	}

	array.resize(iteration);

	for (auto deleteNumber : array) {
		std::cout << deleteNumber << " ";
	}
}