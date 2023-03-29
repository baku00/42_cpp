#include <iostream>
#include <fstream>

int	print_error(std::string error)
{
	std::cout << "Error" << std::endl;
	std::cout << error << std::endl;
	return (1);
}

int	contains_string(std::string str, size_t i, std::string search)
{
	size_t	j = 0;
	while (j < search.length())
	{
		if (str[i + j] != search[j])
			return (0);
		j++;
	}
	return (1);
}

std::string	str_replace(std::string str, std::string search, std::string replace)
{
	size_t	i = 0;
	size_t	last_insertion_index = 0;
	std::string	new_str = "";
	while (i < str.length())
	{
		if (str[i] == search[0] && contains_string(str, i, search))
		{
			new_str.append(str.substr(last_insertion_index, (i - last_insertion_index)));
			new_str.append(replace);
			i += search.length();
			last_insertion_index = i;
		}
		i++;
	}
	new_str.append(str.substr(last_insertion_index, i - last_insertion_index));
	return (new_str);
}

std::string	get_content(std::ifstream &file)
{
	std::string content;
	std::string line;
	while (std::getline(file, line))
	{
		if (content.length())
			content.append("\n");
		content.append(line);
	}
	return (content);
}

void	write_content(std::ofstream &write, std::string content)
{
	write << content;
}

int main(int argc, char **argv)
{
	std::string error = "";
	if (argc != 4)
		return (print_error(error.append("Usage: ./Seg <filename> <search> <replace>")));

	std::string filename = argv[1];
	std::string search = argv[2];
	std::string replace = argv[3];

	std::ifstream read_file(filename.c_str());
	if (!read_file.is_open())
		return (print_error(error.append("Une erreur est survenu lors de la lecture du fichier: '").append(argv[1]).append("'")));
	std::ofstream write_file(filename.append(".replace").c_str());
	std::string content = get_content(read_file);
	content = str_replace(content, search, replace);
	write_content(write_file, content);
	read_file.close();
	write_file.close();
	return (0);
}