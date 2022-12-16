---
---
---
name: trap_pax_start
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
push unk1 ; (unknown)  (pushFromFSpVal: 16) (fetchValue: 16)
push unk2 ; (unknown)  (pushImm: 2,3,4) (pushFromFSp: 64,8)
push unk3 ; (unknown)  (pushImm: 1)
push unk4 ; (unknown)  (pushImm: 0)
syscall 1, 138 ; trap_pax_start (4 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
ryj::EFFECT_145 *__fastcall ryj::PAX::start(ryj::PAX_161 *const this, __int64 id, int flag, __int64 type, __int64 priority, unsigned int *obj, __int64 a7, __int64 a8)
/----- (00000000005096BC) ----------------------------------------------------
void __fastcall YS::trap_pax_start(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  *(_DWORD *)args = (unsigned int)ryj::PAX::start(
                                    (ryj::PAX_161 *const)(*args)[0],
                                    *(int *)&(*args)[4],
                                    *(_DWORD *)&(*args)[8],
                                    1LL,
                                    *(int *)&(*args)[12],
                                    0LL,
                                    a7,
                                    a8);
}
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
magic\LK_BLIZZARD_1\bliz.bdscript
magic\magnet1\magn.bdscript
magic\MAGNET_1\magn.bdscript
magic\MAGNET_1lk\magn.bdscript
magic\MAGNET_2\magn.bdscript
magic\MAGNET_2lk\magn.bdscript
magic\MAGNET_3\magn.bdscript
magic\MAGNET_3lk\magn.bdscript
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
L60:
 pushFromPSpVal 0
 pushFromPSpVal 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 pushImmf 3.141593
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 pushFromFSp 68
 syscall 1, 146 ; trap_obj_hitback (3 in, 0 out)
 pushFromFSp 4
 syscall 0, 53 ; trap_effect_pos (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 48
 pushFromPSpVal 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 32
 pushFromPSpVal 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushFromPSp 48
 fetchValue 4
 memcpy 0
 pushFromFSpVal 16
 pushImm 2
 pushImm 1
 pushImm 0
 syscall 1, 138 ; trap_pax_start (4 in, 1 out)
 popToSpVal 32
 pushFromFSpVal 32
 pushFromPSp 48
 syscall 0, 38 ; trap_effect_set_pos (2 in, 0 out)
 pushFromFSp 0
 pushImm 248
 gosub 24, L377
 popToSpVal 28
 pushFromFSpVal 28
 pushImmf 100
 pushImmf 0
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushFromFSpVal 28
 pushFromPSp 16
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 pushFromFSpVal 28
 pushFromPSp 16
 pushFromPSp 32
 pushImmf 100
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 pushImmf 0.5
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 halt 
 pushImmf 30
 popToSp 64
 pushImm 0
 popToSp 72
