#include <iostream>
#include <vector>
using Field = std::vector<std::vector<char>>;
const static uint8_t cols = 10, rows = 10;

void updateField(Field& field)
{
	for (int i{ 0 }; i != cols; i++)
	{
		for (int j{ 0 }; j != rows; j++)
		{
			std::cout << field[i][j];
		}
		std::cout << "\n";
	}
}

static void fieldMaker(Field& field)
{
	field.resize(rows, std::vector<char>(cols, '.'));
	for (int i{ 0 }; i != rows; i++) {
		field[i][0] = '|';
		field[i][cols - 1] = '|';
		field[i][1] = '|';
		field[i][cols - 2] = '|';
	}
}

int main()
{
	Field field = {};
	fieldMaker(field);
	updateField(field);
	return 0;
}