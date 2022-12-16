---
---
---
name: trap_enemy_add_damage
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
push unk1 ; (unknown)  (pushFromFSp: 0)
push unk2 ; (unknown)  (pushFromFSp: 4)
syscall 2, 36 ; trap_enemy_add_damage (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
Not Found
---
---
---
appears in:
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\F_BB050\f_bb.bdscript ((F) Shadow Stalker (Chandelier) (BB))
obj\F_BB060\f_bb.bdscript ((F) Shadow Stalker (Columns) (BB))
obj\M_EX710\m_ex.bdscript ((M) Morning Star)
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
---
---
---
example usage from obj\B_EX420\b_ex.bdscript
L6918:
 pushFromFSp 0
 pushFromFSp 4
 syscall 2, 36 ; trap_enemy_add_damage (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 1
 syscall 1, 228 ; trap_sheet_hp (2 in, 1 out)
 pushImm 0
 sub 
 eqz 
 jz L6998
 pushFromFSpVal 220
 jz L6953
 pushFromFSp 0
 pushImm 197
 syscall 1, 92 ; trap_obj_scatter_prize (2 in, 0 out)
 jmp L6960
