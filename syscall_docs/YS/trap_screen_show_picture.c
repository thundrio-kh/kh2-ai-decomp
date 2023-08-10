---
---
---
name: trap_screen_show_picture
---
---
---
category: visual
---
---
---
documentation level: untested
---
---
---
push datafile ; (string) (filename?) 
push number ; (int) (ID of picture to show) 
syscall 0, 74 ; trap_screen_show_picture (2 in, 0 out)
---
---
---
description: Shows a picture on the screen
---
---
---
decompiled code:
dk::CacheBuffLayout *__fastcall dk::CacheBuffLayout::create(const char *datafile, int number)
/----- (00000000004B8144) ----------------------------------------------------
void __fastcall YS::trap_screen_show_picture(BD_VALUE_16 *args)
{
  dk::CacheBuffLayout::create((const char *)(*args)[0], *(_DWORD *)&(*args)[4]);
}
->
/----- (000000000005BD9C) ----------------------------------------------------
dk::CacheBuffLayout *__fastcall dk::CacheBuffLayout::create(const char *datafile, int number)
{
  unsigned int *v4; // r28
  unsigned int *v5; // r3
  unsigned int *v6; // r29
  unsigned int *v7; // r29
  unsigned int *v8; // r3
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r7
  __int64 v13; // r6
  __int64 v14; // r5
  __int64 v15; // r4
  Tz::LayFile_21 v17; // [sp+70h] [-40h] BYREF

  v4 = 0LL;
  v5 = Tz::Layout::Alloc(0xA8u);
  v6 = v5;
  if ( (_DWORD)v5 )
  {
    *(_DWORD *)(unsigned int)((_DWORD)v5 + 12) = 0;
    *v5 = 7644656;
    YI::IMAGE_FREEZE::IMAGE_FREEZE((YI::IMAGE_FREEZE_0 *const)(unsigned int)((_DWORD)v5 + 24));
    YI::LAYOUT::LAYOUT((YI::LAYOUT_2 *const)(unsigned int)((_DWORD)v6 + 48));
    v4 = v6;
    *v6 = 7616624;
  }
  v4[41] = (unsigned int)YS::CACHE_BUFF::Alloc(datafile, -1LL);
  Tz::LayFile::LayFile((Tz::LayFile_21 *const)v17);
  Tz::LayFile::buildData((Tz::LayFile_21 *const)v17, (unsigned int *)v4[41]);
  v7 = (unsigned int *)Tz::LayFile::getLadAddress((const Tz::LayFile_21 *const)v17, 0LL);
  v8 = (unsigned int *)Tz::LayFile::getImzAddress((const Tz::LayFile_21 *const)v17, 0LL);
  Tz::Layout::create((Tz::Layout_36 *const)v4, 4800, v7, v8, number, 0);
  Tz::LayFile::~LayFile((Tz::LayFile_21 *const)v17, v15, v14, v13, v12, v11, v10, v9);
  return (dk::CacheBuffLayout *)v4;
}
// 5BEA0: variable 'v15' is possibly undefined
// 5BEA0: variable 'v14' is possibly undefined
// 5BEA0: variable 'v13' is possibly undefined
// 5BEA0: variable 'v12' is possibly undefined
// 5BEA0: variable 'v11' is possibly undefined
// 5BEA0: variable 'v10' is possibly undefined
// 5BEA0: variable 'v9' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

