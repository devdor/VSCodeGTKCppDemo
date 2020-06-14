#ifndef APP_MAIN_WND_HPP
#define APP_MAIN_WND_HPP

#include <gtkmm/application.h>
#include <gtkmm/applicationwindow.h>
#include <gtkmm/button.h>
#include <iostream>
#include <vector>
#include <string>

class AppMainWnd : public Gtk::ApplicationWindow {
    
public:
    AppMainWnd();
    ~AppMainWnd();

private:
    void on_button_clicked();
    Gtk::Button m_button;
};
#endif