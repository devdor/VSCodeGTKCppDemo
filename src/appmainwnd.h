#ifndef APP_MAIN_WND_HPP
#define APP_MAIN_WND_HPP

#include <gtkmm-3.0/gtkmm.h>

class AppMainWnd : public Gtk::ApplicationWindow
{

public:
  AppMainWnd(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade);
  AppMainWnd(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade,bool is_glad);
  virtual ~AppMainWnd();

protected:
  //Signal handlers:
  void on_button_quit();

  Glib::RefPtr<Gtk::Builder> m_refGlade;
  Gtk::Button* m_pButton;
};

#endif //APP_MAIN_WND_HPP
