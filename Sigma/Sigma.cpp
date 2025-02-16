#include <iostream>
#include <vector>
using Field = std::vector<std::vector<char>>;

void print(char* str)
{
	std::cout << *str;
}

static void fieldMaker(Field& field, const uint8_t cols, const uint8_t rows)
{
	field.resize(rows, std::vector<char>(cols, '.'));
	for (int i{ 0 }; i != rows; i++) {
		field[i][0] = '#';
		field[i][cols - 1] = '#';
	} 
}

int main()
{
	const uint8_t cols = 10, rows = 10;
	bool isGameRun = true;
	Field field = {};
	fieldMaker(field, cols, rows);
	while (isGameRun)
	{
		for (int i{ 0 }; i != cols; i++)
		{
			for (int j{ 0 }; j != rows; j++)
			{
				print(&field[i][j]);
			}
			print(new char{'\n'});
		}
		isGameRun = false;
	}
	//system("cls");
}