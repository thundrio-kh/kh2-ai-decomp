## trap_signal_reserve_min_hp* (system)

`syscall 1, 142 ; trap_signal_reserve_min_hp (3 in, 0 out)`

Signal an object to reserve an minimum HP value

#### Input parameters
| Name | Type | Description
|------|------|------------
| arg   | int   | Argument to call signal with




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\AL00_MS101\ms_a.bdscript       |           
| msn\BB01_MS101\ms_a.bdscript       |           
| msn\CA01_MS101\ms_a.bdscript       |           
| msn\CA01_MS102\ms_d.bdscript       |           
| msn\HB09_MS101\ms_d.bdscript       |           
| msn\HB09_MS501\ms_d.bdscript       |           
| msn\HB09_MS901\ms_d.bdscript       |           
| msn\HE06_MS101\ms_a.bdscript       |           
| msn\HE19_MS204\ms_a.bdscript       |           
| msn\MU07_MS201\mu07.bdscript       |           
| msn\NM00_MS101\ms_d.bdscript       |           
| msn\TT03_MS601\ms_d.bdscript       |           
| msn\TT04_MS301\tt04.bdscript       |           
| msn\TT08_MS701\ms_a.bdscript       |           
| msn\TT14_MS109\tt_d.bdscript       |           
| msn\TT14_MS110\tt14.bdscript       |           
| msn\TT25_MS801\ms_d.bdscript       |           
| msn\TT32_MS302\tt32.bdscript       |           

</details>

<details>
	<summary>Example Usage From msn\AL00_MS101\ms_a.bdscript</summary>
```
L228:
 pushFromFSp 36
 pushFromPAi L374 ; ___ai 'INT' (L374)
 syscall 0, 0 ; trap_puti (2 in, 0 out)
 pushFromFSp 32
 pushFromFSp 36
 pushImm 0
 syscall 1, 231 ; trap_sheet_set_min_hp (3 in, 0 out)
 pushFromPSp 16
 pushImm 20
 pushImm 0
 syscall 1, 142 ; trap_signal_reserve_min_hp (3 in, 0 out)
 ret
```
</details>

