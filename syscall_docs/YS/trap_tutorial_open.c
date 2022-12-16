---
---
---
name: trap_tutorial_open
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
push unk1 ; (unknown)  (pushImm: 15740,15741,16038,16040,16078,16079,16115,16119,16125,16126,16130,16132,17625,17627,17628,17820,17822,19155,20540) (pushFromFSp: 0)
syscall 1, 296 ; trap_tutorial_open (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::WINDOW_SYSTEM_TUTORIAL::WINDOW_SYSTEM_TUTORIAL(YS::WINDOW_SYSTEM_TUTORIAL *const this, __int64 message_id)
void __fastcall YS::WINDOW_OBJ2D::WINDOW_OBJ2D(YS::WINDOW_OBJ2D_1 *const this, YS::WINDOW_8 *window)
/----- (000000000050B7DC) ----------------------------------------------------
void __fastcall YS::trap_tutorial_open(BD_VALUE_21 *args)
{
  YS::WINDOW_8 *v1; // r31
  int v2; // r29
  YS::WINDOW_SYSTEM_TUTORIAL *v3; // r3
  YS::WINDOW_8 *v4; // r30
  YS::WINDOW_OBJ2D_1 *v5; // r3

  v1 = 0LL;
  v2 = *(_DWORD *)args;
  v3 = (YS::WINDOW_SYSTEM_TUTORIAL *)AREA::Alloc(0x1230u);
  v4 = (YS::WINDOW_8 *)v3;
  if ( (_DWORD)v3 )
  {
    YS::WINDOW_SYSTEM_TUTORIAL::WINDOW_SYSTEM_TUTORIAL(v3, v2);
    v1 = v4;
  }
  v5 = (YS::WINDOW_OBJ2D_1 *)AREA::Alloc(0x1Cu);
  if ( (_DWORD)v5 )
    YS::WINDOW_OBJ2D::WINDOW_OBJ2D(v5, v1);
}

//COMPLICATED YS::WINDOW_SYSTEM_TUTORIAL::WINDOW_SYSTEM_TUTORIAL YS::WINDOW_OBJ2D::WINDOW_OBJ2D
->
/----- (00000000004BD9B0) ----------------------------------------------------
void __fastcall YS::WINDOW_SYSTEM_TUTORIAL::WINDOW_SYSTEM_TUTORIAL(YS::WINDOW_SYSTEM_TUTORIAL *const this, __int64 message_id)
{
  __int64 v3; // r28
  unsigned int *v4; // r27
  YI::IMAGE_21 *v5; // r3
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r7
  __int64 v10; // r6
  YS::WINDOW_SYSTEM_TUTORIAL *v11; // r29
  int v12; // r5
  int v13; // r3
  __int64 back_chain; // [sp+0h] [-A0h]

  YS::WINDOW_BASE::WINDOW_BASE((YS::WINDOW_BASE_1 *const)this, 0LL, 6LL, message_id, 0LL, 256LL, 52LL, 4);
  v3 = 0LL;
  *(_DWORD *)this->baseclass_0 = 7664728;
  this->Arrow.Type = 0;
  YI::SEQUENCE::SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 2936));
  v4 = YS::FONT::GetSequence();
  v5 = YS::FONT::GetImage();
  YI::SEQUENCE::Init((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 2936), v4, v5, v10, v9, v8, v7, v6);
  v11 = this;
  do
  {
    YI::SEQUENCE::SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)v11 + 3280));
    ++v3;
    v11 = (YS::WINDOW_SYSTEM_TUTORIAL *)((char *)v11 + 344);
  }
  while ( (int)v3 < 4 );
  YS::MESSAGEDRAW::set_font_size((YS::MESSAGEDRAW_158 *const)(unsigned int)((_DWORD)this + 12), 16);
  v12 = *(_DWORD *)&this->baseclass_0[8];
  v13 = *(_DWORD *)&this->baseclass_0[96] >> 1;
  *(_DWORD *)&this->baseclass_0[104] = 0;
  *(_DWORD *)this->baseclass_0 = 7664792;
  *(_DWORD *)&this->baseclass_0[8] = v12 + v13;
  if ( YS::IsSystemTutorialWindowOpen )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "!IsSystemTutorialWindowOpen",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\window.cpp",
      813LL,
      "WINDOW_SYSTEM_TUTORIAL",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\window.cpp", 813);
  }
  YS::IsSystemTutorialWindowOpen = 1;
  YS::SELECTOR::SetPauseMode(12);
  dk::Timer::pauseOn(8u);
}
// 4BDA40: variable 'v10' is possibly undefined
// 4BDA40: variable 'v9' is possibly undefined
// 4BDA40: variable 'v8' is possibly undefined
// 4BDA40: variable 'v7' is possibly undefined
// 4BDA40: variable 'v6' is possibly undefined
// 4BDAB0: variable 'back_chain' is possibly undefined
// 7FEC3A: using guessed type char YS::IsSystemTutorialWindowOpen;


/----- (00000000004BDB58) ----------------------------------------------------
void __fastcall YS::WINDOW_SYSTEM_TUTORIAL::~WINDOW_SYSTEM_TUTORIAL(YS::WINDOW_SYSTEM_TUTORIAL *const this)
{
  __int64 v2; // r27
  __int8 *v3; // r28
  __int64 v4; // r29
  __int8 *v5; // r30
  __int64 back_chain; // [sp+0h] [-A0h]

  *(_DWORD *)this->baseclass_0 = 7664792;
  if ( !YS::IsSystemTutorialWindowOpen )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "IsSystemTutorialWindowOpen",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\window.cpp",
      822LL,
      "~WINDOW_SYSTEM_TUTORIAL",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\window.cpp", 822);
  }
  YS::IsSystemTutorialWindowOpen = 0;
  YS::SELECTOR::ResetPauseMode(12);
  dk::Timer::pauseOff(8u);
  v2 = 3LL;
  v3 = &this->baseclass_0[1032];
  v4 = 3LL;
  v5 = &this->baseclass_0[1032];
  *(_DWORD *)this->baseclass_0 = 7664728;
  do
  {
    YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)v3 + 3280));
    --v2;
    v3 -= 344;
  }
  while ( (int)v2 >= 0 );
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 2936));
  *(_DWORD *)this->baseclass_0 = 7664472;
  do
  {
    YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)v5 + 1544));
    --v4;
    v5 -= 344;
  }
  while ( (int)v4 >= 0 );
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 1200));
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 848));
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 484));
  *(_DWORD *)&this->baseclass_0[132] = 7664856;
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE *)(unsigned int)((_DWORD)this + 132));
  YS::WINDOW::~WINDOW((YS::WINDOW_8 *const)this);
}
// 4BDB88: variable 'back_chain' is possibly undefined
// 7FEC3A: using guessed type char YS::IsSystemTutorialWindowOpen;


/----- (00000000004BDD08) ----------------------------------------------------
void __fastcall YS::WINDOW_SYSTEM_TUTORIAL::~WINDOW_SYSTEM_TUTORIAL(YS::WINDOW_SYSTEM_TUTORIAL *this)
{
  YS::WINDOW_SYSTEM_TUTORIAL::~WINDOW_SYSTEM_TUTORIAL(this);
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
ard\bb03\bb.bdscript
ard\eh18\full.bdscript
ard\hb10\moog.bdscript
ard\hb13\magi.bdscript
ard\mu00\chan.bdscript
ard\mu07\limi.bdscript
ard\tt06\camp.bdscript
ard\tt14\jimi.bdscript
ard\tt28\driv.bdscript
ard\tt28\jigs.bdscript
ard\tt32\game.bdscript
msn\HB13_MS902\hb13.bdscript
msn\LM02_MS101\lm02.bdscript
msn\MU01_MS102\mu01.bdscript
msn\TT02_MS201\save.bdscript
msn\TT04_MS107\tt04.bdscript
msn\TT07_MS101\tt07.bdscript
msn\TT07_MS103\tt07.bdscript
msn\TT07_MS105\tt07.bdscript
msn\TT14_MS110\tt14.bdscript
msn\TT32_MS302\tt32.bdscript
msn\TT32_MS303\tt32.bdscript
---
---
---
example usage from ard\bb03\bb.bdscript
TR3:
 pushImm 39
 syscall 0, 59 ; trap_saveflag_check (1 in, 1 out)
 eqz 
 jz L56
 syscall 1, 337 ; trap_command_set_side_b (0 in, 0 out)
 pushImm 38
 syscall 0, 59 ; trap_saveflag_check (1 in, 1 out)
 eqz 
 jz L39
 pushImm 17627
 syscall 1, 296 ; trap_tutorial_open (1 in, 0 out)
 jmp L44
