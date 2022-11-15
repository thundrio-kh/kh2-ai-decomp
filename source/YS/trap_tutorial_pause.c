/----- (000000000050B744) ----------------------------------------------------
void __fastcall YS::trap_tutorial_pause(BD_VALUE_21 *args)
{
  menu::Window *v2; // r3
  menu::Widget_2 *v3; // r30
  int v4; // r31

  v2 = (menu::Window *)AREA::Alloc(0x1280u);
  v3 = (menu::Widget_2 *)v2;
  if ( (_DWORD)v2 )
  {
    v4 = *(_DWORD *)args;
    menu::Window::Window(v2);
    *(_DWORD *)v3 = 7671580;
    menu::TutorialWidget::TutorialWidget((menu::TutorialWidget_0 *const)(unsigned int)((_DWORD)v3 + 36), v4);
    menu::Widget::link(v3, (menu::Widget_2 *)(unsigned int)((_DWORD)v3 + 36));
  }
}

