---
---
---
name: trap_magic_calc_speed
---
---
---
category: limit
---
---
---
documentation level: untested
---
---
---
push unk1 ; (float)  (Values of -10, -2 used in game)
push unk2 ; (float)  (Values of 100, 200, 500 used in game)
push unk3 ; (float)  (Unknown)
push unk4 ; (float)  (Unkown)
syscall 7, 13 ; trap_magic_calc_speed (4 in, 1 out)
pop speed ; (float) 
---
---
---
description: Calculate the speed of magic
---
---
---
decompiled code:

/----- (0000000000623890) ----------------------------------------------------
void __fastcall Ts::trap_magic_calc_speed(BD_VALUE_24 *args)
{
  double v1; // fp1
  double v2; // fp1

  if ( !((*(float *)&(*args)[4] == 0.0) | (unsigned __int8)~((float)((float)(*(float *)&(*args)[8]
                                                                           - *(float *)&(*args)[12])
                                                                   * (float)-2.0) < 0.0)) )
  {
    v1 = (float)((float)((float)(*(float *)&(*args)[0] * (float)2.0) * (float)(*(float *)&(*args)[0] * (float)2.0))
               - (float)((float)(*(float *)&(*args)[4]
                               * (float)((float)(*(float *)&(*args)[8] - *(float *)&(*args)[12]) * (float)-2.0))
                       * 4.0));
    if ( v1 > 0.0 )
    {
      v2 = __fsqrts(v1);
      _FP1 = (float)((float)((float)-(float)(*(float *)&(*args)[0] * (float)2.0) - (float)v2) / *(float *)&(*args)[4])
           - (float)((float)((float)v2 - (float)(*(float *)&(*args)[0] * (float)2.0)) / *(float *)&(*args)[4]);
      __asm { fsel      f1, f1, f5, f3 }
      *(float *)&(*args)[0] = *(float *)&(*args)[0] + (float)_FP1;
    }
  }
}

//BASIC
---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\beast\limi.bdscript
---
---
---
example usage from limit\aladdin\limi.bdscript
L592:
 pushImmf 0
 popToSp 184
 pushFromFSp 180
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L742
 pushFromFSp 180
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 192
 pushFromPSp 192
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 208
 pushFromPSp 208
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 224
 pushFromPSp 224
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSp 16
 fetchValue 12
 pushImmf 500
 subf 
 infzf 
 jz L724
 pushFromPSp 160
 pushImmf 60
 pushImmf -2
 pushImmf 500
 pushFromPSp 16
 fetchValue 12
 syscall 7, 13 ; trap_magic_calc_speed (4 in, 1 out)
 gosub 52, L1830
 pushFromPSp 160
 gosub 52, L2509
 pushImmf 8
 subf 
 supzf 
 jz L706
 pushFromPSp 160
 pushFromPSp 160
 gosub 52, L2509
 pushImmf -2
 pushImmf 8
 pushImmf 0
 gosub 52, L2458
 jmp L722
