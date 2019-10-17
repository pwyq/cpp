//open a txt/cpp file and output to console
//cannot correctly output docx file.
#include <iostream>
#include <fstream>

int main(int argc, char * argv[])
{
	if (argc < 2)
	{
		std::cerr << "Error: Missing Input File.\n";
		return -1;
	}
	
	const int filename_size = 100;
	char target_file[filename_size];
	int index = 1; int total_count = 0;

	do	//implement a do-while to check if there exists space among file name.
	{
		int a = 0;
		while(argv[index][a] != 0)
		{
			target_file[total_count] = argv[index][a];
			a++; total_count++;
		}
		if ((argc > 2) && (index != (argc - 1)))
		{
			target_file[total_count] = ' ';
			total_count += 1;			
		}
	}while (++index < argc);
	target_file[total_count] = '\0';
	
	std::ifstream fileIn(target_file);
	if (!fileIn.is_open())
	{
		std::cerr << "Error: Unable To Open Target File.\n";
		return -1;
	}
	
	char ch;
	while (fileIn.get(ch))	//getline takes in a string
		std::cout << ch;
	
	fileIn.close();
	return 0;
}