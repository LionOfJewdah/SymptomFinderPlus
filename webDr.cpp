#include "webDr.h"

WebDr::WebDr() {
	Disease* a = new Disease("TIL Betty White is older than sliced bread",
		"ptzhk",
		"r/todayilearned",
		"http://bits.usc.edu/cs104");
	Disease* b = new Disease("WebDr, I found this gem on my way home today",
		"ruyanche",
		"r/aww",
		"http://bits.usc.edu/cs104");
	Disease* c = new Disease("I am a null pointer. AMA.",
		"mredekopp",
		"r/shttyprogramming",
		"http://bits.usc.edu/cs104");

	posts.push_back(a);
	posts.push_back(b);
	posts.push_back(c);
}

WebDr::~WebDr() {
	clearDiseases();
}

std::vector<Disease*> WebDr::getDiseases() {
	return posts;
}

void WebDr::clearDiseases() {
	for (auto it = posts.begin(); it != posts.end(); it++) {
		delete (*it);
	}
	posts.clear();
}
