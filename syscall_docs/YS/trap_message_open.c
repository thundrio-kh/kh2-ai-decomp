---
---
---
name: trap_message_open
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
push unk1 ; (unknown) 
push unk2 ; (unknown) 
syscall 1, 32 ; trap_message_open (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::WINDOW_BALLOON::WINDOW_BALLOON(YS::WINDOW_BALLOON_0 *const this, __int64 message_id, __int64 priority)
void __fastcall YS::WINDOW_OBJ2D::WINDOW_OBJ2D(YS::WINDOW_OBJ2D_1 *const this, YS::WINDOW_8 *window)
/----- (00000000005031B4) ----------------------------------------------------
void __fastcall YS::trap_message_open(BD_VALUE_21 *args)
{
  YS::WINDOW_8 *v2; // r30
  __int64 v3; // r27
  __int64 v4; // r28
  YS::WINDOW_BALLOON_0 *v5; // r3
  YS::WINDOW_8 *v6; // r29
  YS::WINDOW_OBJ2D_1 *v7; // r3

  v2 = 0LL;
  v3 = *(int *)args;
  v4 = *(int *)&(*args)[4];
  v5 = (YS::WINDOW_BALLOON_0 *)AREA::Alloc(0xB6Cu);
  v6 = (YS::WINDOW_8 *)v5;
  if ( (_DWORD)v5 )
  {
    YS::WINDOW_BALLOON::WINDOW_BALLOON(v5, v3, v4);
    v2 = v6;
  }
  v7 = (YS::WINDOW_OBJ2D_1 *)AREA::Alloc(0x1Cu);
  if ( (_DWORD)v7 )
    YS::WINDOW_OBJ2D::WINDOW_OBJ2D(v7, v2);
  *(_DWORD *)args = (_DWORD)v2;
}

//COMPLICATED YS::WINDOW_BALLOON::WINDOW_BALLOON YS::WINDOW_OBJ2D::WINDOW_OBJ2D
->
/----- (00000000004BD3E8) ----------------------------------------------------
void __fastcall YS::WINDOW_BALLOON::WINDOW_BALLOON(YS::WINDOW_BALLOON_0 *const this, __int64 message_id, __int64 priority)
{
  YS::WINDOW_BASE::WINDOW_BASE((YS::WINDOW_BASE_1 *const)this, 3LL, 5LL, message_id, priority, 128LL, 104LL, 0);
  *(_DWORD *)&this->baseclass_0[104] = 1065353216;
  *(_DWORD *)this->baseclass_0 = 7664536;
}


/----- (00000000006CC55C) ----------------------------------------------------
void __fastcall YS::WINDOW_BALLOON::~WINDOW_BALLOON(YS::WINDOW_8 *this)
{
  __int64 v2; // r29
  __int8 *v3; // r31

  v2 = 3LL;
  v3 = &(*this)[1032];
  *(_DWORD *)this = 7664472;
  do
  {
    YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)v3 + 1544));
    --v2;
    v3 -= 344;
  }
  while ( (int)v2 >= 0 );
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 1200));
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 848));
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 484));
  *(_DWORD *)&(*this)[132] = 7664856;
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE *)(unsigned int)((_DWORD)this + 132));
  YS::WINDOW::~WINDOW(this);
}


/----- (00000000006CCBD8) ----------------------------------------------------
void __fastcall YS::WINDOW_BALLOON::~WINDOW_BALLOON(YS::WINDOW_BALLOON *this)
{
  __int64 v2; // r29
  __int8 *v3; // r31

  v2 = 3LL;
  v3 = &this->baseclass_0[1032];
  *(_DWORD *)this->baseclass_0 = 7664472;
  do
  {
    YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)v3 + 1544));
    --v2;
    v3 -= 344;
  }
  while ( (int)v2 >= 0 );
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 1200));
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 848));
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 484));
  *(_DWORD *)&this->baseclass_0[132] = 7664856;
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE *)(unsigned int)((_DWORD)this + 132));
  YS::WINDOW::~WINDOW((YS::WINDOW_8 *const)this);
  AREA::Free((unsigned int *)this);
}


->
/----- (00000000004BC7A0) ----------------------------------------------------
void __fastcall YS::WINDOW_OBJ2D::WINDOW_OBJ2D(YS::WINDOW_OBJ2D_1 *const this, YS::WINDOW_8 *window)
{
  int v2; // r4

  *(_DWORD *)&(*this)[24] = (_DWORD)window;
  *(_DWORD *)(unsigned int)((_DWORD)this + 12) = 0;
  v2 = *(_DWORD *)&(*window)[120];
  *(_DWORD *)this = 7664376;
  dk::Obj2D::create((dk::Obj2D_11 *const)this, v2 + 25000, 0);
}


/----- (00000000006CC95C) ----------------------------------------------------
void __fastcall YS::WINDOW_OBJ2D::~WINDOW_OBJ2D(YS::WINDOW_OBJ2D_1 *const this)
{
  unsigned int *v2; // r3
  __int64 v3; // r5

  v2 = (unsigned int *)*(unsigned int *)&(*this)[24];
  if ( (_DWORD)v2 )
  {
    v3 = *v2;
    *(_DWORD *)this = 7664376;
    ((void (*)(void))*(unsigned int *)*(unsigned int *)(v3 + 8))();
  }
  *(_DWORD *)this = 7618296;
}


/----- (00000000006CC9C8) ----------------------------------------------------
void __fastcall YS::WINDOW_OBJ2D::~WINDOW_OBJ2D(YS::WINDOW_OBJ2D *this)
{
  unsigned int *v2; // r3
  __int64 v3; // r5

  v2 = (unsigned int *)*(unsigned int *)&(*this)[24];
  if ( (_DWORD)v2 )
  {
    v3 = *v2;
    *(_DWORD *)this = 7664376;
    ((void (*)(void))*(unsigned int *)*(unsigned int *)(v3 + 8))();
  }
  *(_DWORD *)this = 7618296;
  AREA::Free((unsigned int *)this);
}


---
---
---
appears in:

---
---
---
example usage from NA

