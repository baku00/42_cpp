#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <cstdlib>

class Contact {
	private:
		std::string	firstname;
		std::string	name;
		std::string	surname;
		std::string	phone_number;
		std::string	darksecret;

	public:
		Contact(
			std::string	firstname,
			std::string	name,
			std::string	surname,
			std::string	phone_number,
			std::string	darksecret
		);
		Contact();
		~Contact();

		std::string	get_firstname();
		std::string	get_name();
		std::string	get_surname();
		std::string	get_phone_number();
		std::string	get_darksecret();
		void		replace(
			std::string	firstname,
			std::string	name,
			std::string	surname,
			std::string	phone_number,
			std::string	darksecret
		);
		void	display();
};
#endif