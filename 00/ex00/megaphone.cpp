#include <iostream>

std::string toUpper(std::string message)
{
	std::string upperMessage = std::string(message);

	for (size_t i = 0; i < upperMessage.length(); i++)
		upperMessage[i] = toupper(message[i]);
	return (upperMessage);
}

void afficher(std::string message)
{
	std::cout << message << std::flush;
}

void a_la_ligne()
{
	std::cout << std::endl;
}

int main(int argc, char **argv) {
	if (argc == 1)
		afficher("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	else
	{
		for (int i = 1; i < argc; i++)
		{
			afficher(toUpper(std::string(argv[i])));
			if (i < argc - 1)
				std::cout << " " << std::flush;
		}
	}
	a_la_ligne();
	return 0;
}
