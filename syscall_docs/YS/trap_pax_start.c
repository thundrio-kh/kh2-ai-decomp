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
push unk1 ; (unknown) 
push unk2 ; (unknown) 
push unk3 ; (unknown) 
push unk4 ; (unknown) 
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

---
---
---
example usage from NA

