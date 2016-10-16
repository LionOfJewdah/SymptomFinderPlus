#ifndef DISEASE_WIDGET_H
#define DISEASE_WIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include "disease.h"

class DiseaseWidget : public QWidget {
	Q_OBJECT

	public:
		DiseaseWidget(Disease*);
		~DiseaseWidget();

	private:
		Disease* disease;
		QGridLayout* layout;
		// QLabel* titleLabel;
		// QLabel* usernameLabel;
		// QLabel* subredditLabel;
		// QLabel* urlLabel;
		// QLabel* karmaLabel;

		// Sneak peak of next lab!
		// QPushButton* upvoteButton;
		// QPushButton* downvoteButton;
};

#endif
