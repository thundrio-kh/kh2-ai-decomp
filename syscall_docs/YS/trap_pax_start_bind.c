---
---
---
name: trap_pax_start_bind
---
---
---
category: animation
---
---
---
documentation level: untested
---
---
---
push pax ; (ryj::PAX_161 *)  (A PAX effect object)
push id ; (int)  (ID of the animation to start)
push obj ; (YS::OBJ_125)  (Object to bind to)
push flag ; (int)  (Flag to set, possibly a boolean as 0 and 1 are only values used in game)
push priority ; (int)  (Priority for the animation)
syscall 1, 139 ; trap_pax_start_bind (5 in, 1 out)
pop effect ; (ryj::EFFECT_145 *) 
---
---
---
description: Starts and binds a PAX effect
---
---
---
decompiled code:
ryj::EFFECT_145 *__fastcall ryj::PAX::start(ryj::PAX_161 *const this, __int64 id, int flag, __int64 type, __int64 priority, unsigned int *obj, __int64 a7, __int64 a8)
/----- (0000000000509714) ----------------------------------------------------
void __fastcall YS::trap_pax_start_bind(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  ryj::PAX_161 *v9; // r25
  __int64 v10; // r26
  __int64 v11; // r29
  int v12; // r27
  __int64 v13; // r28
  unsigned __int64 v14; // r30
  __int64 back_chain; // [sp+0h] [-B0h]

  v9 = (ryj::PAX_161 *)(*args)[0];
  v10 = *(int *)&(*args)[4];
  v11 = *(unsigned int *)&(*args)[8];
  v12 = *(_DWORD *)&(*args)[12];
  v13 = *(int *)&(*args)[16];
  v14 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v11 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v11 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v14);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  *(_DWORD *)args = (unsigned int)ryj::PAX::start(
                                    v9,
                                    v10,
                                    v12,
                                    1LL,
                                    v13,
                                    (unsigned int *)*(unsigned int *)(v11 + 4),
                                    a7,
                                    a8);
}
// 509760: variable 'back_chain' is possibly undefined
// 509844: variable 'a7' is possibly undefined
// 509844: variable 'a8' is possibly undefined
->
/----- (00000000002B57E4) ----------------------------------------------------
ryj::EFFECT_145 *__fastcall ryj::PAX::start(ryj::PAX_161 *const this, __int64 id, int flag, __int64 type, __int64 priority, unsigned int *obj, __int64 a7, __int64 a8)
{
  int v10; // r30
  int v11; // r29
  __int64 v14; // r9
  int v15; // r25
  ryj::EFFECT_145 *v16; // r23
  int v17; // r24
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
  __int64 v29; // r6
  __int64 v30; // r5
  __int64 v31; // r10
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r7
  __int64 v35; // r6
  __int64 v36; // r5
  __int64 v37; // r4

  v10 = priority;
  v11 = type;
  if ( !*(_DWORD *)this )
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\pax.cpp", 207);
  v14 = *(unsigned int *)&(*this)[4];
  if ( !(_DWORD)v14 )
  {
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\pax.cpp", 208);
    v14 = *(unsigned int *)&(*this)[4];
  }
  v15 = 0;
  v16 = 0LL;
  v17 = *(_DWORD *)(*(unsigned int *)this + 8LL);
  if ( v17 > 0 )
  {
    while ( *(unsigned __int16 *)((unsigned int)v14 + 2LL) != (_DWORD)id )
    {
      ++v15;
      v14 += 80LL;
      if ( v15 >= v17 )
        goto _noname_;
    }
    v16 = ryj::PAX::create(this, (ryj::PAX::ELEM_0 *)(unsigned int)v14, flag, v11, v10, obj);
  }
_noname_:
  if ( v15 == v17 )
  {
    printf(
      (unsigned int)"[%s:%d]",
      (__int64)"C:\\hd25\\kingdom2\\rikeda\\pax.cpp",
      225LL,
      type,
      priority,
      (__int64)obj,
      v14,
      a8);
    printf((unsigned int)"\x1B[31m** WARNING! ", v24, v23, v22, v21, v20, v19, v18);
    printf((unsigned int)"PAX::start() Disable Id. %d", id, v30, v29, v28, v27, v26, v25);
    printf((unsigned int)" **\x1B[00m\n", v37, v36, v35, v34, v33, v32, v31);
  }
  return v16;
}
// 2B58E4: variable 'type' is possibly undefined
// 2B58E4: variable 'priority' is possibly undefined
// 2B58E4: variable 'obj' is possibly undefined
// 2B58E4: variable 'v14' is possibly undefined
// 2B58E4: variable 'a8' is possibly undefined
// 2B58F4: variable 'v24' is possibly undefined
// 2B58F4: variable 'v23' is possibly undefined
// 2B58F4: variable 'v22' is possibly undefined
// 2B58F4: variable 'v21' is possibly undefined
// 2B58F4: variable 'v20' is possibly undefined
// 2B58F4: variable 'v19' is possibly undefined
// 2B58F4: variable 'v18' is possibly undefined
// 2B5908: variable 'v30' is possibly undefined
// 2B5908: variable 'v29' is possibly undefined
// 2B5908: variable 'v28' is possibly undefined
// 2B5908: variable 'v27' is possibly undefined
// 2B5908: variable 'v26' is possibly undefined
// 2B5908: variable 'v25' is possibly undefined
// 2B5918: variable 'v37' is possibly undefined
// 2B5918: variable 'v36' is possibly undefined
// 2B5918: variable 'v35' is possibly undefined
// 2B5918: variable 'v34' is possibly undefined
// 2B5918: variable 'v33' is possibly undefined
// 2B5918: variable 'v32' is possibly undefined
// 2B5918: variable 'v31' is possibly undefined


/----- (00000000002B5CDC) ----------------------------------------------------
ryj::EFFECT_145 *__fastcall ryj::PAX::start(ryj::PAX_161 *const this, __int64 id, ryj::PAX_161::USER_BIND_ARGS *args, __int64 flag, __int64 type, __int64 priority, __int64 a7, __int64 a8)
{
  int v9; // r31
  int v10; // r30
  int v11; // r29
  __int64 v14; // r9
  int v15; // r25
  ryj::EFFECT_145 *v16; // r23
  int v17; // r24
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
  __int64 v29; // r6
  __int64 v30; // r5
  __int64 v31; // r10
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r7
  __int64 v35; // r6
  __int64 v36; // r5
  __int64 v37; // r4

  v9 = priority;
  v10 = type;
  v11 = flag;
  if ( !*(_DWORD *)this )
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\pax.cpp", 235);
  v14 = *(unsigned int *)&(*this)[4];
  if ( !(_DWORD)v14 )
  {
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\pax.cpp", 236);
    v14 = *(unsigned int *)&(*this)[4];
  }
  v15 = 0;
  v16 = 0LL;
  v17 = *(_DWORD *)(*(unsigned int *)this + 8LL);
  if ( v17 > 0 )
  {
    while ( *(unsigned __int16 *)((unsigned int)v14 + 2LL) != (_DWORD)id )
    {
      ++v15;
      v14 += 80LL;
      if ( v15 >= v17 )
        goto _noname_;
    }
    v16 = ryj::PAX::create(this, (ryj::PAX::ELEM_0 *)(unsigned int)v14, v11, v10, v9, args);
  }
_noname_:
  if ( v15 == v17 )
  {
    printf(
      (unsigned int)"[%s:%d]",
      (__int64)"C:\\hd25\\kingdom2\\rikeda\\pax.cpp",
      250LL,
      flag,
      type,
      priority,
      v14,
      a8);
    printf((unsigned int)"\x1B[31m** WARNING! ", v24, v23, v22, v21, v20, v19, v18);
    printf((unsigned int)"PAX::start() Disable Id. %d", id, v30, v29, v28, v27, v26, v25);
    printf((unsigned int)" **\x1B[00m\n", v37, v36, v35, v34, v33, v32, v31);
  }
  return v16;
}
// 2B5DDC: variable 'flag' is possibly undefined
// 2B5DDC: variable 'type' is possibly undefined
// 2B5DDC: variable 'priority' is possibly undefined
// 2B5DDC: variable 'v14' is possibly undefined
// 2B5DDC: variable 'a8' is possibly undefined
// 2B5DEC: variable 'v24' is possibly undefined
// 2B5DEC: variable 'v23' is possibly undefined
// 2B5DEC: variable 'v22' is possibly undefined
// 2B5DEC: variable 'v21' is possibly undefined
// 2B5DEC: variable 'v20' is possibly undefined
// 2B5DEC: variable 'v19' is possibly undefined
// 2B5DEC: variable 'v18' is possibly undefined
// 2B5E00: variable 'v30' is possibly undefined
// 2B5E00: variable 'v29' is possibly undefined
// 2B5E00: variable 'v28' is possibly undefined
// 2B5E00: variable 'v27' is possibly undefined
// 2B5E00: variable 'v26' is possibly undefined
// 2B5E00: variable 'v25' is possibly undefined
// 2B5E10: variable 'v37' is possibly undefined
// 2B5E10: variable 'v36' is possibly undefined
// 2B5E10: variable 'v35' is possibly undefined
// 2B5E10: variable 'v34' is possibly undefined
// 2B5E10: variable 'v33' is possibly undefined
// 2B5E10: variable 'v32' is possibly undefined
// 2B5E10: variable 'v31' is possibly undefined


---
---
---
appears in:
magic\blizzard1\bliz.bdscript
magic\BLIZZARD_1\bliz.bdscript
magic\BLIZZARD_1lk\bliz.bdscript
magic\BLIZZARD_2\bliz.bdscript
magic\BLIZZARD_2lk\bliz.bdscript
magic\BLIZZARD_3\bliz.bdscript
magic\BLIZZARD_3lk\bliz.bdscript
magic\cure1\cure.bdscript
magic\CURE_1\cure.bdscript
magic\CURE_1lk\cure.bdscript
magic\CURE_2\cure.bdscript
magic\CURE_2lk\cure.bdscript
magic\CURE_3\cure.bdscript
magic\CURE_3lk\cure.bdscript
magic\fire1\fire.bdscript
magic\FIRE_1\fire.bdscript
magic\FIRE_1lk\fire.bdscript
magic\FIRE_2\fire.bdscript
magic\FIRE_2lk\fire.bdscript
magic\FIRE_3\fire.bdscript
magic\FIRE_3lk\fire.bdscript
magic\LK_BLIZZARD_1\bliz.bdscript
magic\magnet1\magn.bdscript
magic\MAGNET_1\magn.bdscript
magic\MAGNET_1lk\magn.bdscript
magic\MAGNET_2\magn.bdscript
magic\MAGNET_2lk\magn.bdscript
magic\MAGNET_3\magn.bdscript
magic\MAGNET_3lk\magn.bdscript
magic\reflect1\refl.bdscript
magic\REFLECT_1\refl.bdscript
magic\REFLECT_1lk\refl.bdscript
magic\REFLECT_2\refl.bdscript
magic\REFLECT_2lk\refl.bdscript
magic\REFLECT_3\refl.bdscript
magic\REFLECT_3lk\refl.bdscript
magic\thunder1\thun.bdscript
magic\THUNDER_1\thun.bdscript
magic\THUNDER_1lk\thun.bdscript
magic\THUNDER_2\thun.bdscript
magic\THUNDER_2lk\thun.bdscript
magic\THUNDER_3\thun.bdscript
magic\THUNDER_3lk\thun.bdscript
---
---
---
example usage from magic\blizzard1\bliz.bdscript
L362:
 pushFromFSpVal 16
 pushFromFSp 4
 pushFromPSpVal 0
 pushImm 1
 pushImm 0
 syscall 1, 139 ; trap_pax_start_bind (5 in, 1 out)
 ret 
