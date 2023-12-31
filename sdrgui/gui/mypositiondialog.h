///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2016 F4EXB                                                      //
// written by Edouard Griffiths                                                  //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
// (at your option) any later version.                                           //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#ifndef SDRBASE_GUI_MYPOSITIONDIALOG_H_
#define SDRBASE_GUI_MYPOSITIONDIALOG_H_

#include <QDialog>
#include "settings/mainsettings.h"
#include "export.h"

namespace Ui {
	class MyPositionDialog;
}

class SDRGUI_API MyPositionDialog : public QDialog {
	Q_OBJECT

public:
	explicit MyPositionDialog(MainSettings& mainSettings, QWidget* parent = 0);
	~MyPositionDialog();

private:
	Ui::MyPositionDialog* ui;
	MainSettings& m_mainSettings;

private slots:
	void accept();
	void on_gps_clicked();
};

#endif /* SDRBASE_GUI_MYPOSITIONDIALOG_H_ */
