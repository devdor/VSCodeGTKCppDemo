#include <stdlib.h>
#include "appmainwnd.h"

int main (int argc, char *argv[]) {
    auto app = Gtk::Application::create(argc, argv, "org.devdor.demoapp");

    auto refBuilder = Gtk::Builder::create();
    refBuilder->add_from_file("app_main_wnd.glade");

    AppMainWnd* pDialog = nullptr;
    refBuilder->get_widget_derived("wnd_main", pDialog);

    if(pDialog) {

        app->run(*pDialog);
    }

    delete pDialog;
    return 0;
}
