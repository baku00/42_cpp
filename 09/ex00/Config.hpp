#ifndef CONFIG_HPP
# define CONFIG_HPP

# include <iostream>

class Config
{
	private:
		Config(/* args */);
		~Config();
	public:
		static std::string getData() { return "data.csv"; }
		static std::string getMinDate() { return "2009-01-01"; }
		static std::time_t getMaxDate() { return std::time(NULL); }
		static float getMinValue() { return 0; }
		static float getMaxValue() { return 1000; }
};

#endif