#include <QApplication>
#include <vector>
#include "main_window.h"
#include "disease.h"
#include "webDr.h"
#include "disease_widget.h"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

 	WebDr* r = new WebDr();

 	// Testing for DiseaseWidget. Create one and show that.
 	// COMMENT THE NEXT TWO LINES WHEN YOU FINISH POST_WIDGET
 	DiseaseWidget dw(r->getDiseases()[0]);
 	dw.show();

 	// Testing with the MainWindow, which should display a list of disease widgets
 	// UNCOMMENT THE NEXT THREE LINES WHEN YOU FINISH POST_WIDGET
  // MainWindow mw(r);
  // mw.setWindowTitle("CS104 WebDr!");
  // mw.show();

  return app.exec();
}
