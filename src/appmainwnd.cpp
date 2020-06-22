#include "appmainwnd.h"

AppMainWnd::AppMainWnd(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade)
: Gtk::ApplicationWindow(cobject), m_refGlade(refGlade), m_pButton(nullptr) {

    set_title("GTKDemoApp");
    set_size_request(500, 300);

    //Get the Glade-instantiated Button, and connect a signal handler:
    m_refGlade->get_widget("btn_quit", m_pButton);
    if(m_pButton) {
        m_pButton->signal_clicked().connect( sigc::mem_fun(*this, &AppMainWnd::on_button_quit) );
        }
}

AppMainWnd::~AppMainWnd() {
}

void AppMainWnd::on_button_quit() {
  hide(); //hide() will cause Gtk::Application::run() to end.
}
