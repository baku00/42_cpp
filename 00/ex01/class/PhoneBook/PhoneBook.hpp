#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <cstdio>
# include "../Contact/Contact.hpp"

class PhoneBook {
	private:
		int		number_of_contact;
		int		contact_index;
		Contact	*contacts[8];

	public:
		PhoneBook();
		~PhoneBook();

		std::string	ask(std::string field);
		int			ask_index(std::string field);
		std::string	format_for_column(std::string value);
		void		display_all_contacts();
		int			get_limit();
		void		add_contact();
		void		search_contact();
		void		display_empty_list();
		bool		valid_number_of_contact();
		void		create_test();
		bool		is_valid_index(int index);
};
#endif