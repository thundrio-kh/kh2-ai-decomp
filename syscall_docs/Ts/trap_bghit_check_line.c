---
---
---
name: trap_bghit_check_line
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
syscall 6, 51 ; trap_bghit_check_line (4 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall YS::BGHIT::check_line(YS::BGHIT_0 *const this, const kn::FVector *from, const kn::FVector *to, int type)
/----- (0000000000627668) ----------------------------------------------------
void __fastcall Ts::trap_bghit_check_line(BD_VALUE_25 *args)
{
  kn::FVector v2; // [sp+70h] [-40h] BYREF
  kn::FVector v3; // [sp+80h] [-30h] BYREF

  v2.z = 0.0;
  v2.y = 0.0;
  v2.x = 0.0;
  v2.w = 1.0;
  v3.z = 0.0;
  v3.y = 0.0;
  v3.x = 0.0;
  v3.w = 1.0;
  kn::FVector::operator=(&v2, (const kn::FVector *)*(unsigned int *)&(*args)[4]);
  kn::FVector::operator=(&v3, (const kn::FVector *)*(unsigned int *)&(*args)[8]);
  v2.w = 1.0;
  v3.w = 1.0;
  *(_DWORD *)args = YS::BGHIT::check_line((YS::BGHIT_0 *const)(*args)[0], &v2, &v3, *(_DWORD *)&(*args)[12]);
}
->
/----- (000000000040ED30) ----------------------------------------------------
bool __fastcall YS::BGHIT::check_line(YS::BGHIT_0 *const this, const kn::FVector *from, const kn::FVector *to, int type)
{
  dk::Line v8; // [sp+70h] [-50h] BYREF
  u_short v9[8]; // [sp+90h] [-30h] BYREF

  v8.m_begin.z = 0.0;
  v8.m_begin.y = 0.0;
  v8.m_begin.x = 0.0;
  v8.m_begin.w = 1.0;
  v8.m_end.z = 0.0;
  v8.m_end.y = 0.0;
  v8.m_end.x = 0.0;
  v8.m_end.w = 1.0;
  kn::FVector::operator=(&v8.m_begin, from);
  kn::FVector::operator=(&v8.m_end, to);
  v8.m_begin.w = 1.0;
  v8.m_end.w = 1.0;
  *(_DWORD *)&(*this)[20] = -1;
  if ( (type & 0x10000) != 0 )
  {
    if ( (unsigned int)dk::Octree::intersectLine(
                         &v8,
                         (kn::FVector *)this,
                         v9,
                         (dk::ObjOcc_6 **)(unsigned int)((_DWORD)this + 16),
                         (unsigned __int16)type) )
      *(_DWORD *)&(*this)[20] = v9[0];
  }
  else
  {
    *(_DWORD *)&(*this)[16] = 0;
    if ( (unsigned int)dk::Octree::intersectLineMap(&v8, (kn::FVector *)this, v9, type) )
      *(_DWORD *)&(*this)[20] = v9[0];
  }
  return (_cntlzw(*(_DWORD *)&(*this)[20] + 1) & 0x20) == 0;
}


---
---
---
appears in:

---
---
---
example usage from NA

