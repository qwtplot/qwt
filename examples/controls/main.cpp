/*****************************************************************************
 * Qwt Examples
 * Copyright (C) 1997   Josef Wilgen
 * Copyright (C) 2002   Uwe Rathmann
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the Qwt License, Version 1.0
 *****************************************************************************/

#include "slidertab.h"
#include "wheeltab.h"
#include "knobtab.h"
#include "dialtab.h"

#include <qapplication.h>
#include <qtabwidget.h>

int main ( int argc, char **argv )
{
    QApplication a( argc, argv );

    QTabWidget tabWidget;

    SliderTab *sliderTab = new SliderTab();
    sliderTab->setAutoFillBackground( true );
    sliderTab->setPalette( QColor( "DimGray" ) );

    WheelTab *wheelTab = new WheelTab();
    wheelTab->setAutoFillBackground( true );
    wheelTab->setPalette( QColor( "Silver" ) );

    KnobTab *knobTab = new KnobTab();
    knobTab->setAutoFillBackground( true );
    knobTab->setPalette( Qt::darkGray );

    DialTab *dialTab = new DialTab();
    dialTab->setAutoFillBackground( true );
    dialTab->setPalette( Qt::darkGray );

    tabWidget.addTab( new SliderTab, "Slider" );
    tabWidget.addTab( new WheelTab, "Wheel/Thermo" );
    tabWidget.addTab( knobTab, "Knob" );
    tabWidget.addTab( dialTab, "Dial" );

    tabWidget.resize( 800, 600 );
    tabWidget.show();

    return a.exec();
}

