#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <cstdio>
# include "../Contact/Contact.hpp"
# include "../Utils/Utils.hpp"

class PhoneBook {
	private:
		int		number_of_contact;
		int		contact_index;
		Contact	contacts[8];

		// Getters
		int			get_limit();
		int			get_index_from_string(std::string index);

		// Displays
		void		display_all_contacts();
		void		display_the_only_one_contact();
		void		display_empty_list();
		void		display_index_error();

		// Inputs
		std::string	ask(std::string field);
		std::string	ask_contact_index();

		// Validators
		bool		is_valid_index(std::string index);

		// Utilities
		std::string	format_for_column(std::string value);

	public:
		// Constructors
		PhoneBook();

		// Destructors
		~PhoneBook();

		// Methods
		void		add_contact();
		void		search_contact();

		// Generators
		void		create_test();
};
#endif