#ifndef ADAPTINK_HPP
#define ADAPTINK_HPP

#include <QMainWindow>

#include <canvas.hpp>

const int RESTART_EXIT_STATUS = 17;

namespace Ui {
class Adaptink;
}

class Adaptink : public QMainWindow {
	Q_OBJECT

public:
	explicit Adaptink(QWidget *parent = nullptr);
	Adaptink(const Adaptink&) = delete;
	Adaptink(Adaptink&&) = delete;
	Adaptink& operator=(const Adaptink&) = delete;

	~Adaptink();

private slots:
	void on_actionQuit_triggered();

	void on_actionNew_triggered();

	void on_actionOpen_triggered();

	void on_actionExport_triggered();

	void on_actionExportAs_triggered();

	void on_actionChangeColor_triggered();

	void on_actionToolPencil_triggered();

	void on_actionToolBrush_triggered();

	void on_actionToolLabel_triggered();

	void on_actionRubber_triggered();

	void on_actionSet_Background_color_triggered();

private:
	void exportCanvas();

	Ui::Adaptink* m_ui;

	QString m_current_file_name;
};

#endif // ADAPTINK_HPP
