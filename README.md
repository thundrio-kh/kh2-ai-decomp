Decompilation of the AI related code in Kingodm Hearts 2, done using the OpenKH tooling

Contains two directories.

bdscript: Disassembled AI for every file in the game, with the exception of the following 47 "obj" that fail to decode using OpenKh.Tools.Bdxio

obj\B_EX270\b_ex.bdx
B_EX340\b_ex.bdx
B_EX350\b_ex.bdx
F_HE040\f_he.bdx
F_HE050\f_he.bdx
F_HE090\f_he.bdx
F_TR040\f_tr.bdx
F_TR140\f_tr.bdx
G_EC123\g_ec.bdx
G_EC124\g_ec.bdx
G_EX900_MASTER\g_ex.bdx
G_OA300\g_oa.bdx
G_OA400\g_oa.bdx
G_OA500\g_oa.bdx
G_OA600\g_oa.bdx
G_OC160\g_oc.bdx
G_OC170\g_oc.bdx
G_OC180\g_oc.bdx
G_OD100\g_od.bdx
G_OD110\g_od.bdx
G_OD120\g_od.bdx
G_OD130\g_od.bdx
G_OD140\g_od.bdx
G_OD200\g_od.bdx
G_OD210\g_od.bdx
G_OD220\g_od.bdx
G_OD230\g_od.bdx
G_OD240\g_od.bdx
G_OD300\g_od.bdx
G_OD310\g_od.bdx
G_OD320\g_od.bdx
G_OD330\g_od.bdx
G_OD340\g_od.bdx
G_OD400\g_od.bdx
G_OD500\g_od.bdx
G_PP500\g_pp.bdx
G_PP510\g_pp.bdx
G_PP520\g_pp.bdx
G_PP600\g_pp.bdx
G_PP610\g_pp.bdx
G_PP620\g_pp.bdx
M_EX350\m_ex.bdx
N_BB010_TSURU\test.bdx
N_BB050_TSURU\test.bdx
PO06_F_ZZ000\test.bdx
P_MU010\p_mu.bdx
WM_CHECKER\wm_c.bdx

source: Contains some decompiled C for functions in the main ELF that seem related to the AI, in the hope that they can help with understanding the bdscript files.