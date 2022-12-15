---
---
---
name: trap_sheet_get_drive_time
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
syscall 10, 45 ; trap_sheet_get_drive_time (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000613EA4) ----------------------------------------------------
void __fastcall kn::trap_sheet_get_drive_time(BD_VALUE_22 *args)
{
  *(float *)&(*args)[0] = *(float *)(*(unsigned int *)args + 0x1B4LL);
}

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

