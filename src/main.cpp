#include <gtkmm/application.h>
#include <gtkmm/applicationwindow.h>
#include <gtkmm/button.h>
#include <iostream>
#include <vector>
#include <string>
#include "appmainwnd.hpp"

int main(int argc, char *argv[]) {
     
     auto app = Gtk::Application::create(argc, argv, "org.gtkmm.devdor.demoApp");     

     AppMainWnd wndMain;
     return app->run(wndMain);
}