---
---
---
name: trap_thread_start
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
push unk1 ; (unknown)  (pushImm: 0,1) (pushFromFSpVal: 80)
push unk2 ; (unknown)  (pushImm: L10444,L10747,L108,L11616,L118,L11899,L119,L124,L12692,L13116,L13156,L13283,L13393,L135,L13509,L13625,L13654,L13675,L13687,L137,L13950,L13988,L141,L143,L14334,L14686,L15416,L1706,L176,L18105,L182,L18258,L18498,L18651,L1933,L194,L195,L207,L209,L23762,L247,L257,L278,L2827,L287,L299,L300,L30936,L3096,L32047,L322,L337,L3500,L36295,L363,L364,L415,L4569,L4896,L59,L598,L6334,L642,L652,L665,L784,L81,L823,L87,L88,L8969,L91,L93,L9397,L98) (pushFromFSp: 4)
push unk3 ; (unknown)  (pushImm: 0)
push unk4 ; (unknown)  (pushFromFSp: 0) (pushImm: 0) (pushFromPWp: W0,W4228)
syscall 0, 9 ; trap_thread_start (4 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::VM::stop(YS::VM_377 *const this, int mask, int match)
YS::VM_377 *__fastcall YS::VM::Start(unsigned int *code, YS::OBJ_175 *owner)
/----- (00000000004B7A5C) ----------------------------------------------------
void __fastcall YS::trap_thread_start(BD_VALUE_16 *args)
{
  YS::VM_377 *v2; // r6
  int v3; // r5
  YS::VM_377 *v4; // r3
  YS::VM_377 *v5; // r4
  int v6; // r3
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = (YS::VM_377 *)(unsigned int)YS::VM::Current;
  if ( !YS::VM::Current )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "VM::Current != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp",
      262LL,
      "trap_thread_start",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 262);
    v2 = (YS::VM_377 *)(unsigned int)YS::VM::Current;
  }
  v3 = *(_DWORD *)args;
  v4 = v2;
  if ( *(_DWORD *)args )
  {
    YS::VM::stop(v2, *(_DWORD *)args, v3);
    v3 = *(_DWORD *)args;
    v4 = (YS::VM_377 *)(unsigned int)YS::VM::Current;
  }
  v5 = YS::VM::start(
         v4,
         v3,
         *(_DWORD *)&(*args)[4],
         (BD_VALUE_0 *)(unsigned int)((_DWORD)args + 12),
         (_cntlzw(*(_DWORD *)&(*args)[12]) & 0x20) == 0);
  v6 = *(_DWORD *)&(*args)[8];
  if ( v6 )
    *(_DWORD *)&(*v5)[36] = v6;
  *(_DWORD *)args = (_DWORD)v5;
}
// 4B7A7C: variable 'back_chain' is possibly undefined
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;

//COMPLICATED YS::VM::stop YS::VM::start
->
/----- (00000000004B5D18) ----------------------------------------------------
void __fastcall YS::VM::stop(YS::VM_377 *const this, int mask, int match)
{
  __int64 v6; // r27
  __int64 v7; // r28
  int v8; // r21
  unsigned __int64 v9; // r7
  unsigned __int64 v10; // r3
  __int64 back_chain; // [sp+0h] [-D0h]

  v6 = *(unsigned int *)&(*this)[44];
  if ( (_DWORD)v6 )
  {
    do
    {
      v7 = *(unsigned int *)(unsigned int)(v6 + 40);
      if ( (*(_DWORD *)(v6 + 32) & mask) == match )
      {
        v8 = *(_DWORD *)&(*this)[44];
        if ( (_DWORD)v6 == v8 )
        {
          v8 = 0;
          *(_DWORD *)&(*this)[44] = *(_DWORD *)(unsigned int)(v6 + 40);
        }
        else
        {
          while ( 1 )
          {
            v9 = (unsigned int)(v8 + 40);
            if ( *(_DWORD *)v9 == (_DWORD)v6 )
              break;
            v8 = *(_DWORD *)v9;
            if ( !*(_DWORD *)v9 )
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
          *(_DWORD *)v9 = *(_DWORD *)(unsigned int)(v6 + 40);
        }
        if ( (_DWORD)v6 == *(_DWORD *)&(*this)[48] )
          *(_DWORD *)&(*this)[48] = v8;
        *(_DWORD *)(unsigned int)(v6 + 40) = 0;
        if ( (_DWORD)v6 )
        {
          YS::VM::~VM((YS::VM_377 *const)v6);
          v10 = (unsigned int)YS::Allocator;
          if ( !YS::Allocator )
          {
            ErrorPrintf(
              "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
              "Allocator != NULL",
              "common",
              "C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp",
              74LL,
              "operator delete",
              (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
            ErrorRaise();
            Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp", 74);
            v10 = (unsigned int)YS::Allocator;
          }
          ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)v10 + 0xCLL))();
        }
      }
      v6 = v7;
    }
    while ( (_DWORD)v7 );
  }
}
// 4B5DF0: variable 'back_chain' is possibly undefined
// 2AB0580: using guessed type int YS::Allocator;


->
/----- (00000000004B5F58) ----------------------------------------------------
YS::VM_377 *__fastcall YS::VM::Start(unsigned int *code, YS::OBJ_175 *owner)
{
  YS::VM_377 *v4; // r28
  YS::VM_377 *v5; // r3
  YS::VM_377 *v6; // r29

  v4 = 0LL;
  v5 = (YS::VM_377 *)YS::VM::operator new(0x40u);
  v6 = v5;
  if ( (_DWORD)v5 )
  {
    YS::VM::VM(v5, code, 0LL, owner);
    v4 = v6;
  }
  return v4;
}


---
---
---
appears in:
limit\tron\limi.bdscript
msn\AL13_TRAP\al13.bdscript
msn\AL13_TRAP_FREE\al13.bdscript
msn\AL13_TRAP_FREE2\al13.bdscript
msn\CA01_MS204\ca01.bdscript
msn\CA07_MS105\ca07.bdscript
msn\CA09_MEDAL\ca_m.bdscript
msn\CA10_MEDAL\ca_m.bdscript
msn\CA10_MS107\ca10.bdscript
msn\CA12_MEDAL\ca_m.bdscript
msn\CA13_MEDAL\ca_m.bdscript
msn\CA14_MEDAL\ca_m.bdscript
msn\CA15_MEDAL\ca_m.bdscript
msn\DC00_MS101\dc_m.bdscript
msn\DC02_MS100\dc_m.bdscript
msn\DC02_MS101\dc_m.bdscript
msn\EH20_MS113\eh20.bdscript
msn\EH20_MS113_RE\eh20.bdscript
msn\HB08_MS102\hb08.bdscript
msn\HB16_MS404D\hb16.bdscript
msn\HE00_MS104B\he00.bdscript
msn\HE02_MS104C\he02.bdscript
msn\HE02_MS104D\he02.bdscript
msn\HE08_MS106\he08.bdscript
msn\HE_COLOSSEUM_2_FOG\he_c.bdscript
msn\HE_COLOSSEUM_6_FOG\he_c.bdscript
msn\HE_COL_2_10\he_c.bdscript
msn\HE_COL_4_9\he_c.bdscript
msn\HE_COL_6_10\he_c.bdscript
msn\HE_COL_8_30\he_c.bdscript
msn\HE_COL_8_6\he_c.bdscript
msn\LK02_MS102\lk02.bdscript
msn\MU01_MS102\mu01.bdscript
msn\MU01_MS103C\mu01.bdscript
msn\MU02_MS103A\mu02.bdscript
msn\MU02_MS103B\mu02.bdscript
msn\MU03_MS104\mu03.bdscript
msn\MU07_MS106\mu07.bdscript
msn\MU09_KINOKO_VEX\kino.bdscript
msn\MU09_MS108\mu09.bdscript
msn\TR01_MS101\tr01.bdscript
msn\TR04_MS202\tr04.bdscript
msn\TR07_MS203\tr07.bdscript
msn\TT04_MS107\tt04.bdscript
msn\TT12_WORK_BOX\tt12.bdscript
msn\TT14_MS110\tt14.bdscript
msn\TT32_MS302\tt32.bdscript
msn\WI02_MS103\wi02.bdscript
msn\WI05_MS102D\wi05.bdscript
msn\WI06_MS102B\wi06.bdscript
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX170\b_ex.bdscript ((B) Xemnas)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\F_HB100\f_hb.bdscript ((F) ??? (HB))
obj\F_NM080\f_nm.bdscript ((F) Oogie’s present box (NM))
obj\F_TR020\f_tr.bdscript ((F) Energy core’s cube (TR))
obj\F_TR020_CORE\f_tr.bdscript ()
obj\F_TR030\f_tr.bdscript ((F) ??? (TR))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\F_TR170\f_tr.bdscript ((F) ??? (TR))
obj\M_EX530\m_ex.bdscript ((M) Bookmaster)
obj\M_EX530_HB\m_ex.bdscript ((M) Runemaster)
obj\M_EX530_TR\m_ex.bdscript ((M) Bookmaster (TR))
obj\N_AL070_BTL\n_al.bdscript ((N) Jafar clone (BTL) (AL))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
---
---
---
example usage from limit\tron\limi.bdscript
L4479:
 popToSp 0
 pushImm 0
 pushImm L4569
 pushImm 0
 pushFromFSp 0
 syscall 0, 9 ; trap_thread_start (4 in, 1 out)
 drop 
 pushFromPSpVal 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPSpVal 32
 pushFromPSp 16
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSpVal 16, 32
