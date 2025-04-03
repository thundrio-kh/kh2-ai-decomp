---
---
---
name: trap_bg_get_random_pos_air
---
---
---
category: position
---
---
---
documentation level: untested
---
---
---
push center ; (kn::FVector *)  (center value to use)
push near ; (float)  (how near to the center to look)
push far ; (float)  (how far from the center to look)
push low ; (float)  (how low from the center to look)
push high ; (float)  (how high from the center to look)
syscall 1, 248 ; trap_bg_get_random_pos_air (5 in, 1 out)
pop pos ; (kn::FVector *) (random position in the air) 
---
---
---
description: Gets a random open position in the air
---
---
---
decompiled code:
void __fastcall YS::BG::RandomPosAir(const kn::FVector *center, const kn::FVector *a2, double near, double far, double low, int type, int a7, double high)
/----- (00000000005037AC) ----------------------------------------------------
void __fastcall YS::trap_bg_get_random_pos_air(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  kn::FVector v7; // [sp+70h] [-30h] BYREF

  YS::BG::RandomPosAir(
    &v7,
    (const kn::FVector *)(*args)[0],
    *(float *)&(*args)[4],
    *(float *)&(*args)[8],
    *(float *)&(*args)[12],
    a6,
    2,
    *(float *)&(*args)[16]);
  kn::FVector::operator=((kn::FVector *const)&ResultVector, &v7);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 2B75D50: using guessed type float ResultVector;
->
/----- (000000000040E478) ----------------------------------------------------
void __fastcall YS::BG::RandomPosAir(const kn::FVector *center, const kn::FVector *a2, double near, double far, double low, int type, int a7, double high)
{
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r7
  YS::BG::RANDOM_POS v15; // [sp+70h] [-50h] BYREF

  YS::BG::RANDOM_POS::RANDOM_POS(&v15, a2, near, far, a7);
  YS::BG::RANDOM_POS::search_air((YS::BG::RANDOM_POS *const)center, (__int64)&v15, low, high, v14, v13, v12, v11);
}
// 40E4C0: variable 'v14' is possibly undefined
// 40E4C0: variable 'v13' is possibly undefined
// 40E4C0: variable 'v12' is possibly undefined
// 40E4C0: variable 'v11' is possibly undefined


---
---
---
appears in:
limit\donald\limi.bdscript
limit\donald_wi\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\tron\limi.bdscript
magic\THUNDER_1\thun.bdscript
magic\THUNDER_1lk\thun.bdscript
magic\THUNDER_2\thun.bdscript
magic\THUNDER_2lk\thun.bdscript
magic\THUNDER_3\thun.bdscript
magic\THUNDER_3lk\thun.bdscript
obj\B_AL110\b_al.bdscript ((B) Volcanic Lord’s lava pool)
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX380\b_ex.bdscript ((F) Zexion’s book)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\F_WI020\f_wi.bdscript ((F) Burning building (WI))
obj\F_WI020_BOSS\f_wi.bdscript ((F) Burning building (BOSS) (WI))
obj\F_WI020_BTL\f_wi.bdscript ()
obj\M_EX130\m_ex.bdscript ((M) Crimson Jazz)
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\M_EX530\m_ex.bdscript ((M) Bookmaster)
obj\M_EX530_HB\m_ex.bdscript ((M) Runemaster)
obj\M_EX530_TR\m_ex.bdscript ((M) Bookmaster (TR))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_HE000\p_he.bdscript ((P) Auron)
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
obj\P_TR010\p_tr.bdscript ((P) ??? (TR))
---
---
---
example usage from limit\donald\limi.bdscript
L4039:
 popToSp 0
 gosub 12, L1148
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImmf 200
 pushImmf 250
 pushImmf -150
 pushImmf -150
 syscall 1, 248 ; trap_bg_get_random_pos_air (5 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromFSp 0
 pushFromPSp 16
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 pushFromFSp 0
 gosub 12, L178
 ret 
