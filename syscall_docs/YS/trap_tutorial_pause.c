---
---
---
name: trap_tutorial_pause
---
---
---
category: 
---
---
---
documentation level: stub
---
---
---
push unk1 ; (unknown)  (pushImm: 16121)
syscall 1, 284 ; trap_tutorial_pause (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall menu::Window::Window(menu::Window *const this)
// local variable allocation has failed, the output may be wrong!
void __fastcall menu::Widget::link(menu::Widget_2 *const this, menu::Widget_2 *child)
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

//COMPLICATED menu::Window::Window menu::TutorialWidget::TutorialWidget menu::Widget::link
->
/----- (00000000000D48E8) ----------------------------------------------------
void __fastcall menu::Window::Window(menu::Window *const this)
{
  int v2; // r4
  unsigned int *v3; // r30
  unsigned __int64 v4; // r6

  menu::Widget::Widget((__int64)this);
  v2 = menu::WindowTask;
  *(_DWORD *)this->baseclass_0 = 7623368;
  if ( !v2 )
  {
    v3 = (unsigned int *)menu::Mode::get();
    ((void (*)(void))*(unsigned int *)*(unsigned int *)(*v3 + 8LL))();
    menu::WindowTask = (unsigned int)TASK_MANAGER::create_task(
                                       (TASK_MANAGER_11 *const)v3[1],
                                       0,
                                       2000,
                                       (TASK_FUNC)&menu::Window::execTask);
  }
  v4 = (unsigned int)((_DWORD)this + 32);
  if ( menu::WindowList )
  {
    *(_DWORD *)v4 = menu::WindowList;
    menu::WindowList = (int)this;
  }
  else
  {
    dword_A1B174 = (int)this;
    menu::WindowList = (int)this;
    *(_DWORD *)v4 = 0;
  }
}
// 7934F8: using guessed type __int64 (__fastcall *__ptr32 menu::Window::execTask)(menu::Window *__hidden this, TASK *);
// 7EF0C0: using guessed type int menu::WindowTask;
// A1B170: using guessed type int menu::WindowList;
// A1B174: using guessed type int dword_A1B174;


/----- (00000000000D49C4) ----------------------------------------------------
void __fastcall menu::Window::Window(menu::Window *this)
{
  menu::Window::Window(this);
}


/----- (00000000000D49E4) ----------------------------------------------------
void __fastcall menu::Window::~Window(menu::Window *const this)
{
  int v2; // r30
  int *v3; // r5
  __int64 back_chain; // [sp+0h] [-B0h]

  *(_DWORD *)this->baseclass_0 = 7623368;
  v2 = menu::WindowList;
  if ( (_DWORD)this == menu::WindowList )
  {
    v2 = 0;
    menu::WindowList = *(_DWORD *)(unsigned int)((_DWORD)this + 32);
  }
  else
  {
    while ( 1 )
    {
      v3 = (int *)(unsigned int)(v2 + 32);
      if ( *v3 == (_DWORD)this )
        break;
      v2 = *v3;
      if ( !*v3 )
      {
        ErrorPrintf(
          "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
          "prev != NULL",
          "common",
          "../yasui/list.h",
          131LL,
          "unlink",
          (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
        ErrorRaise();
        Axa::AxaAssert("../yasui/list.h", 131);
      }
    }
    *v3 = *(_DWORD *)(unsigned int)((_DWORD)this + 32);
  }
  if ( (_DWORD)this == dword_A1B174 )
    dword_A1B174 = v2;
  *(_DWORD *)(unsigned int)((_DWORD)this + 32) = 0;
  *(_DWORD *)this->baseclass_0 = 7623504;
}
// D4A90: variable 'back_chain' is possibly undefined
// A1B170: using guessed type int menu::WindowList;
// A1B174: using guessed type int dword_A1B174;


/----- (00000000000D4B48) ----------------------------------------------------
void __fastcall menu::Window::~Window(menu::Window *this)
{
  void *v2; // r9
  void *v3; // r8
  void *v4; // r7
  void *v5; // r6
  void *v6; // r5
  __int64 v7; // r4

  menu::Window::~Window(this);
  operator delete(this, v7, v6, v5, v4, v3, v2);
}
// D4B64: variable 'v7' is possibly undefined
// D4B64: variable 'v6' is possibly undefined
// D4B64: variable 'v5' is possibly undefined
// D4B64: variable 'v4' is possibly undefined
// D4B64: variable 'v3' is possibly undefined
// D4B64: variable 'v2' is possibly undefined


/----- (00000000000D4B80) ----------------------------------------------------
void __fastcall menu::Window::~Window(menu::Window *this)
{
  menu::Window::~Window(this);
}


->
/----- (000000000060C188) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
void __fastcall menu::TutorialWidget::TutorialWidget(menu::TutorialWidget_0 *const this, int message_id)
{
  __int64 v3; // r30

  v3 = *(_QWORD *)&message_id;
  menu::Widget::Widget((__int64)this);
  this->messageId_ = v3;
  *(_DWORD *)this->baseclass_0 = 7698784;
  this->phase_ = 0;
  YS::WINDOW_TUTORIAL::WINDOW_TUTORIAL((YS::WINDOW_TUTORIAL_0 *const)(unsigned int)((_DWORD)this + 44), v3);
}
// 60C188: variables would overlap: r4.4 and r4.8


/----- (00000000006EDB1C) ----------------------------------------------------
void __fastcall menu::TutorialWidget::~TutorialWidget(menu::TutorialWidget_0 *const this)
{
  __int64 v2; // r27
  __int8 *v3; // r28
  __int64 v4; // r30
  __int8 *v5; // r31

  v2 = 3LL;
  v3 = &this->messageWindow_.baseclass_0[988];
  *(_DWORD *)this->baseclass_0 = 7698784;
  v4 = 3LL;
  *(_DWORD *)this->messageWindow_.baseclass_0 = 7664728;
  v5 = &this->messageWindow_.baseclass_0[988];
  do
  {
    YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)v3 + 3324));
    --v2;
    v3 -= 344;
  }
  while ( (int)v2 >= 0 );
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 2980));
  *(_DWORD *)this->messageWindow_.baseclass_0 = 7664472;
  do
  {
    YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)v5 + 1588));
    --v4;
    v5 -= 344;
  }
  while ( (int)v4 >= 0 );
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 1244));
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 892));
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 528));
  *(_DWORD *)&this->messageWindow_.baseclass_0[132] = 7664856;
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE *)(unsigned int)((_DWORD)this + 176));
  YS::WINDOW::~WINDOW((YS::WINDOW *)(unsigned int)((_DWORD)this + 44));
  *(_DWORD *)this->baseclass_0 = 7623504;
}


/----- (00000000006EDC50) ----------------------------------------------------
void __fastcall menu::TutorialWidget::~TutorialWidget(menu::TutorialWidget *this)
{
  __int64 v2; // r27
  __int8 *v3; // r28
  __int64 v4; // r30
  __int8 *v5; // r31
  void *v6; // r9
  void *v7; // r8
  void *v8; // r7
  void *v9; // r6
  void *v10; // r5

  v2 = 3LL;
  v3 = &this->messageWindow_.baseclass_0[988];
  *(_DWORD *)this->baseclass_0 = 7698784;
  v4 = 3LL;
  *(_DWORD *)this->messageWindow_.baseclass_0 = 7664728;
  v5 = &this->messageWindow_.baseclass_0[988];
  do
  {
    YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)v3 + 3324));
    --v2;
    v3 -= 344;
  }
  while ( (int)v2 >= 0 );
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 2980));
  *(_DWORD *)this->messageWindow_.baseclass_0 = 7664472;
  do
  {
    YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)v5 + 1588));
    --v4;
    v5 -= 344;
  }
  while ( (int)v4 >= 0 );
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 1244));
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 892));
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 528));
  *(_DWORD *)&this->messageWindow_.baseclass_0[132] = 7664856;
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE *)(unsigned int)((_DWORD)this + 176));
  YS::WINDOW::~WINDOW((YS::WINDOW *)(unsigned int)((_DWORD)this + 44));
  *(_DWORD *)this->baseclass_0 = 7623504;
  operator delete(this, 7623504LL, v10, v9, v8, v7, v6);
}
// 6EDD64: variable 'v10' is possibly undefined
// 6EDD64: variable 'v9' is possibly undefined
// 6EDD64: variable 'v8' is possibly undefined
// 6EDD64: variable 'v7' is possibly undefined
// 6EDD64: variable 'v6' is possibly undefined


->
/----- (00000000000D534C) ----------------------------------------------------
void __fastcall menu::Widget::link(menu::Widget_2 *const this, menu::Widget_2 *child)
{
  int v4; // r5
  unsigned __int64 v5; // r6
  __int64 back_chain; // [sp+0h] [-90h]

  if ( *(_DWORD *)&(*child)[28] )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "child->parent_ == NULL",
      "common",
      "C:\\hd25\\kingdom2\\menu\\widget.cpp",
      22LL,
      "link",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\menu\\widget.cpp", 22);
  }
  v4 = *(_DWORD *)&(*this)[12];
  v5 = (unsigned int)((_DWORD)child + 32);
  if ( v4 )
  {
    *(_DWORD *)(unsigned int)(v4 + 32) = (_DWORD)child;
    *(_DWORD *)v5 = 0;
    *(_DWORD *)&(*this)[12] = (_DWORD)child;
  }
  else
  {
    *(_DWORD *)&(*this)[12] = (_DWORD)child;
    *(_DWORD *)&(*this)[8] = (_DWORD)child;
    *(_DWORD *)v5 = 0;
  }
  *(_DWORD *)&(*child)[28] = (_DWORD)this;
}
// D5370: variable 'back_chain' is possibly undefined


---
---
---
appears in:
msn\TT04_MS107\tt04.bdscript
---
---
---
example usage from msn\TT04_MS107\tt04.bdscript
L81:
 pushImmf 12
 gosub 4, L99
 pushImm 16121
 syscall 1, 284 ; trap_tutorial_pause (1 in, 0 out)
 pushFromPWp W0
 pushImm -1
 gosub 4, L121
 ret 
