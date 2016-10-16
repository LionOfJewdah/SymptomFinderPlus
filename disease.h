#ifndef DISEASE_H
#define DISEASE_H

#include <string>

class Disease {
	public:
		Disease(std::string, std::string, std::string, std::string);
	public: // maybe
		std::string _ICD10_code;
		std::string username;
		std::string subreddit;
		std::string url;
		int karma;
};

#endif
