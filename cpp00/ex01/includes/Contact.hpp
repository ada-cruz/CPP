#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		Contact(void);
		~Contact(void);
		void		set_first_name(std::string first_name);
		void		set_last_name(std::string first_name);
		void		set_nickname(std::string first_name);
		void		set_phone_number(std::string first_name);
		void		set_darkest_secret(std::string first_name);
		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_nickname(void);
		std::string	get_phone_number(void);
		std::string	get_darkest_secret(void);
};

#endif