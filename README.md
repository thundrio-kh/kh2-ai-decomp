Decompilation of the AI related code in Kingdom Hearts 2, done using the OpenKH tooling

Contains two directories, and one script for adding informational comments to bdscripts

# add_txt_labels.py

Idemptotently makes the following changes and comments to all of the bdscripts

- ___ai - comment placed on lines indicating the ai txt command being referenced
- ___ref - comment placed on lines that were originally not decompiled into a reference, but as a known argument we know it is a reference to a specific line
- ___possible_ref - comment placed on lines that we think could be references based on the code-revealer line, but could also be values
- ___unk_ref - comment placed on lines that are known arguments which should be references, but those references are not found in the code-revealer line

# bdscript

Disassembled AI for every file in the game, with the exception of the following 47 "obj" that fail to decode using OpenKh.Tools.Bdxio

- obj\B_EX270\b_ex.bdx
- obj\B_EX340\b_ex.bdx
- obj\B_EX350\b_ex.bdx
- obj\F_HE040\f_he.bdx
- obj\F_HE050\f_he.bdx
- obj\F_HE090\f_he.bdx
- obj\F_TR040\f_tr.bdx
- obj\F_TR140\f_tr.bdx
- obj\G_EC123\g_ec.bdx
- obj\G_EC124\g_ec.bdx
- obj\G_EX900_MASTER\g_ex.bdx
- obj\G_OA300\g_oa.bdx
- obj\G_OA400\g_oa.bdx
- obj\G_OA500\g_oa.bdx
- obj\G_OA600\g_oa.bdx
- obj\G_OC160\g_oc.bdx
- obj\G_OC170\g_oc.bdx
- obj\G_OC180\g_oc.bdx
- obj\G_OD100\g_od.bdx
- obj\G_OD110\g_od.bdx
- obj\G_OD120\g_od.bdx
- obj\G_OD130\g_od.bdx
- obj\G_OD140\g_od.bdx
- obj\G_OD200\g_od.bdx
- obj\G_OD210\g_od.bdx
- obj\G_OD220\g_od.bdx
- obj\G_OD230\g_od.bdx
- obj\G_OD240\g_od.bdx
- obj\G_OD300\g_od.bdx
- obj\G_OD310\g_od.bdx
- obj\G_OD320\g_od.bdx
- obj\G_OD330\g_od.bdx
- obj\G_OD340\g_od.bdx
- obj\G_OD400\g_od.bdx
- obj\G_OD500\g_od.bdx
- obj\G_PP500\g_pp.bdx
- obj\G_PP510\g_pp.bdx
- obj\G_PP520\g_pp.bdx
- obj\G_PP600\g_pp.bdx
- obj\G_PP610\g_pp.bdx
- obj\G_PP620\g_pp.bdx
- obj\M_EX350\m_ex.bdx
- obj\N_BB010_TSURU\test.bdx
- obj\N_BB050_TSURU\test.bdx
- obj\PO06_F_ZZ000\test.bdx
- obj\P_MU010\p_mu.bdx
- obj\WM_CHECKER\wm_c.bdx

# source

Contains some decompiled C for functions in the main ELF that seem related to the AI, in the hope that they can help with understanding the bdscript files.
