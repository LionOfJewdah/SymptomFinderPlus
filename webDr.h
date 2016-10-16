#ifndef WEBDR_H
#define WEBDR_H

#include <vector>
#include "disease.h"

class WebDr {
	public:
		WebDr();
		~WebDr();
		std::vector<Disease*> getDiseases();
		void clearDiseases();

	private:
		std::vector<Disease*> diseases;
};

#endif
