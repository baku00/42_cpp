#ifndef CONFIG_HPP
# define CONFIG_HPP

# include <iostream>

class Config
{
	private:
		Config(/* args */);
		~Config();
	public:
		static std::string getFilename() { return "data.csv"; }
		static float getMinValue() { return 0; }
		static float getMaxValue() { return 1000; }
};

#endif