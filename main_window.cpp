#include <QLabel>
#include <QMessageBox>
#include <QApplication>
#include "main_window.h"

MainWindow::MainWindow(WebDr* r) {
	webDr = r;

	layout = new QVBoxLayout();

	welcomeLabel = new QLabel("Welcome to CS104 WebDr!!");
	layout->addWidget(welcomeLabel);

	// setup the new posts container widget
	postsLayout = new QVBoxLayout();
	postsContainerWidget = new QWidget();
	postsContainerWidget->setLayout(postsLayout);

	// add the container widget to the main layout
	layout->addWidget(postsContainerWidget);

	setupDiseases(r->getDiseases());

	aboutButton = new QPushButton("About CS104 WebDr");
	layout->addWidget(aboutButton);

	// ADD YOUR CODE HERE
	// Create a new button with the text "Quit"

	setLayout(layout);
	show();

	connect(aboutButton, SIGNAL(clicked()), this, SLOT(showAbout()));

	// ADD YOUR CODE HERE
	// Connect the quit button to the quit slot function
}

MainWindow::~MainWindow() {
	clearDiseases();

	delete welcomeLabel;
	delete aboutButton;

	// ADD YOUR CODE HERE
	// Delete the quit button pointer
}

void MainWindow::setupDiseases(std::vector<Disease*> posts) {
	clearDiseases();

	// ADD YOUR CODE HERE
	// Take in the vector of posts and for each of them:
	// 1. create a DiseaseWidget
	// 2. add the DiseaseWidget to the correct layout
	// 3. add the DiseaseWidget to the vector so that we can delete the pointers later
}

void MainWindow::clearDiseases() {
	// ADD YOUR CODE HERE
	// For each DiseaseWidget pointer in the vector
	// 1. remove them from layout with removeWidget(QWidget*)
	// 2. delete the pointer
	// Then clear the vector
}

void MainWindow::showAbout() {
	QMessageBox::information(this, "About", "Simple Qt app for lab7!");
}

// ADD YOUR CODE HERE
// Create a quit function, that serves as a slot for the exit button.
