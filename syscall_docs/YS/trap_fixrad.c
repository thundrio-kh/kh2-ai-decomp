---
---
---
name: trap_fixrad
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
syscall 0, 43 ; trap_fixrad (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
// local variable allocation has failed, the output may be wrong!
/----- (00000000004B8C34) ----------------------------------------------------
void __fastcall YS::trap_fixrad(BD_VALUE_16 *args)
{
  float v2; // [sp+70h] [-10h] BYREF

  v2 = *(float *)&(*args)[0];
  if ( (int)_FDtest((__int64)&v2) <= 0 )
  {
    *(float *)&(*args)[0] = YS::MATH::FixRadian(*(float *)&(*args)[0]);
  }
  else
  {
    if ( *(_DWORD *)args != 2139095040 )
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 532);
    *(_DWORD *)args = 0;
  }
}
->
/----- (0000000000014500) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
void __fastcall Axa::AxaAssert(LPCTSTR file, INT line)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r7
  __int64 v6; // r6
  __int64 (__fastcall *__ptr32 *v7)(SQEX::CDev::Engine::Sd::Driver::Bank *__hidden, SQEX::CDev::Engine::Sd::Driver::ISound *); // r5
  __int64 v9; // r31
  Axa::AxaResourceMan_0 *v10; // r3
  void *v11; // r9
  void *v12; // r8
  void *v13; // r7
  void *v14; // r6
  __int64 v15; // r5
  __int64 v16; // r4
  Axa::AxaSoundManager *v17; // r3
  __int64 v18; // r10
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r7
  __int64 v22; // r6
  __int64 v23; // r5
  __int64 v24; // r4
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r7
  __int64 v29; // r10
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r7
  __int64 v33; // r6
  __int64 v34; // r5
  __int64 v35; // r4
  __int16 v36[260]; // [sp+70h] [-220h] BYREF

  v7 = &SQEX::CDev::Engine::Sd::Driver::Bank::SetStreamSound;
  v9 = *(_QWORD *)&line;
  v10 = (Axa::AxaResourceMan_0 *)(unsigned int)Axa::AxaResourceMan::m_pInstance;
  if ( !Axa::AxaResourceMan::m_pInstance )
  {
    Axa::AxaAssert(".\\COMMON\\AxaResourceMan.h", 395);
    v10 = (Axa::AxaResourceMan_0 *)(unsigned int)Axa::AxaResourceMan::m_pInstance;
  }
  Axa::AxaResourceMan::_debugPrintAll(v10, *(__int64 *)&line, (__int64)v7, v6, v5, v4, v3, v2);
  if ( Axa::AxaSoundManager::m_pInstance )
  {
    v17 = Axa::AxaSoundManager::instance();
    Axa::AxaSoundManager::_debugPrintAll(v17, v24, v23, v22, v21, v20, v19, v18);
  }
  Axa::reportMemory(1, v16, v15, v14, v13, v12, v11);
  sprintf((unsigned int)v36, (__int64)"Assertion Failed!! \n%s(%d) \n", (__int64)file, v9, v28, v27, v26, v25);
  printf((unsigned int)v36, v35, v34, v33, v32, v31, v30, v29);
  Axa::__dummyBusyLoop();
}
// 14500: variables would overlap: r4.4 and r4.8
// 7A0000: using guessed type __int64 (__fastcall *__ptr32 SQEX::CDev::Engine::Sd::Driver::Bank::SetStreamSound)(SQEX::CDev::Engine::Sd::Driver::Bank *__hidden this, SQEX::CDev::Engine::Sd::Driver::ISound *);
// 7A5E38: using guessed type void *__ptr32 Axa::AxaResourceMan::m_pInstance;
// 7A5E4C: using guessed type void *__ptr32 Axa::AxaSoundManager::m_pInstance;


---
---
---
appears in:

---
---
---
example usage from NA

