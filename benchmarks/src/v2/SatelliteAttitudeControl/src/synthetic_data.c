#include "synthetic_data.h"
int synthetic_gyro[NUM_GYRO_SAMPLES][3] = {{0, 0, 0},
                                           {0, 0, 0},
                                           {0, 0, 0},
                                           {6060, 6059, 1615},
                                           {8459, 8457, 2255},
                                           {9527, 9523, 2539},
                                           {10098, 10094, 2693},
                                           {10486, 10480, 2796},
                                           {10801, 10794, 2880},
                                           {11091, 11082, 2956},
                                           {11369, 11359, 3031},
                                           {11641, 11631, 3104},
                                           {11911, 11899, 3176},
                                           {12178, 12166, 3247},
                                           {12443, 12429, 3317},
                                           {12705, 12690, 3386},
                                           {12965, 12950, 3455},
                                           {13224, 13208, 3525},
                                           {13480, 13464, 3592},
                                           {13735, 13717, 3660},
                                           {13987, 13969, 3729},
                                           {14236, 14218, 3795},
                                           {14484, 14465, 3860},
                                           {14730, 14710, 3927},
                                           {14973, 14953, 3991},
                                           {15215, 15194, 4056},
                                           {15454, 15433, 4119},
                                           {15691, 15669, 4182},
                                           {15926, 15904, 4245},
                                           {16159, 16136, 4307},
                                           {16389, 16366, 4369},
                                           {16617, 16593, 4429},
                                           {16842, 16818, 4489},
                                           {17065, 17040, 4549},
                                           {17286, 17260, 4607},
                                           {17505, 17479, 4666},
                                           {17722, 17695, 4723},
                                           {17935, 17908, 4781},
                                           {18147, 18120, 4837},
                                           {18356, 18329, 4892},
                                           {18563, 18535, 4947},
                                           {18767, 18739, 5003},
                                           {18969, 18940, 5057},
                                           {19168, 19139, 5109},
                                           {19364, 19335, 5162},
                                           {19558, 19528, 5214},
                                           {19751, 19720, 5265},
                                           {19941, 19910, 5314},
                                           {20127, 20095, 5364},
                                           {20310, 20279, 5413},
                                           {20492, 20460, 5462},
                                           {20671, 20639, 5510},
                                           {20848, 20815, 5557},
                                           {21023, 20990, 5602},
                                           {21194, 21160, 5649},
                                           {21362, 21328, 5693},
                                           {21528, 21494, 5739},
                                           {21692, 21657, 5782},
                                           {21853, 21818, 5824},
                                           {22011, 21975, 5867},
                                           {22166, 22130, 5909},
                                           {22319, 22283, 5949},
                                           {22469, 22433, 5989},
                                           {22618, 22580, 6027},
                                           {22762, 22725, 6066},
                                           {22904, 22866, 6104},
                                           {23044, 23005, 6141},
                                           {23181, 23143, 6177},
                                           {23315, 23276, 6213},
                                           {23447, 23407, 6248},
                                           {23575, 23535, 6283},
                                           {23701, 23661, 6318},
                                           {23825, 23784, 6349},
                                           {23945, 23904, 6381},
                                           {24063, 24022, 6413},
                                           {24178, 24136, 6443},
                                           {24290, 24248, 6473},
                                           {24400, 24357, 6503},
                                           {24507, 24464, 6531},
                                           {24611, 24568, 6559},
                                           {24712, 24668, 6586},
                                           {24811, 24766, 6613},
                                           {24906, 24861, 6637},
                                           {24998, 24953, 6661},
                                           {25090, 25044, 6686},
                                           {25177, 25131, 6709},
                                           {25262, 25216, 6733},
                                           {25344, 25297, 6754},
                                           {25423, 25376, 6775},
                                           {25498, 25451, 6794},
                                           {25572, 25524, 6815},
                                           {25642, 25594, 6834},
                                           {25711, 25662, 6851},
                                           {25776, 25727, 6868},
                                           {25839, 25789, 6884},
                                           {25899, 25849, 6902},
                                           {25956, 25905, 6917},
                                           {26010, 25959, 6931},
                                           {26060, 26009, 6945},
                                           {26109, 26057, 6957},
                                           {26154, 26102, 6970},
                                           {26198, 26145, 6981},
                                           {26238, 26185, 6991},
                                           {26276, 26223, 7001},
                                           {26311, 26257, 7010},
                                           {26344, 26290, 7019},
                                           {26374, 26319, 7027},
                                           {26400, 26344, 7034},
                                           {26424, 26368, 7040},
                                           {26445, 26389, 7045},
                                           {26463, 26407, 7051},
                                           {26480, 26423, 7055},
                                           {26494, 26436, 7058},
                                           {26504, 26446, 7061},
                                           {26511, 26453, 7063},
                                           {26518, 26458, 7065},
                                           {26522, 26459, 7066},
                                           {26523, 26458, 7066},
                                           {26520, 26454, 7065},
                                           {26516, 26448, 7064},
                                           {26508, 26438, 7062},
                                           {26498, 26427, 7059},
                                           {26485, 26411, 7054},
                                           {26470, 26395, 7048},
                                           {26451, 26375, 7043},
                                           {26430, 26353, 7038},
                                           {26407, 26328, 7031},
                                           {26381, 26300, 7024},
                                           {26352, 26271, 7017},
                                           {26320, 26238, 7008},
                                           {26286, 26202, 7000},
                                           {26251, 26164, 6989},
                                           {26214, 26123, 6979},
                                           {26173, 26078, 6968},
                                           {26130, 26032, 6955},
                                           {26087, 25981, 6943},
                                           {26041, 25928, 6930},
                                           {25992, 25874, 6916},
                                           {25941, 25816, 6901},
                                           {25887, 25757, 6885},
                                           {25829, 25695, 6870},
                                           {25769, 25631, 6853},
                                           {25707, 25566, 6837},
                                           {25642, 25497, 6820},
                                           {25573, 25426, 6801},
                                           {25503, 25354, 6782},
                                           {25430, 25279, 6762},
                                           {25355, 25203, 6741},
                                           {25278, 25125, 6721},
                                           {25196, 25043, 6700},
                                           {25114, 24960, 6677},
                                           {25029, 24876, 6654},
                                           {24940, 24787, 6631},
                                           {24849, 24698, 6607},
                                           {24756, 24607, 6582},
                                           {24660, 24513, 6557},
                                           {24563, 24418, 6531},
                                           {24463, 24322, 6506},
                                           {24360, 24222, 6478},
                                           {24257, 24120, 6450},
                                           {24152, 24015, 6422},
                                           {24046, 23905, 6393},
                                           {23936, 23794, 6364},
                                           {23825, 23682, 6336},
                                           {23711, 23568, 6304},
                                           {23596, 23453, 6274},
                                           {23478, 23335, 6243},
                                           {23361, 23213, 6210},
                                           {23241, 23089, 6178},
                                           {23120, 22964, 6145},
                                           {22995, 22836, 6110},
                                           {22868, 22707, 6076},
                                           {22739, 22576, 6042},
                                           {22608, 22444, 6007},
                                           {22476, 22310, 5972},
                                           {22339, 22176, 5936},
                                           {22201, 22041, 5899},
                                           {22059, 21902, 5862},
                                           {21918, 21762, 5824},
                                           {21774, 21620, 5786},
                                           {21629, 21477, 5747},
                                           {21483, 21331, 5708},
                                           {21335, 21184, 5669},
                                           {21183, 21033, 5629},
                                           {21036, 20879, 5589},
                                           {20884, 20726, 5549},
                                           {20729, 20570, 5507},
                                           {20573, 20412, 5465},
                                           {20415, 20253, 5423},
                                           {20256, 20094, 5380},
                                           {20095, 19931, 5338},
                                           {19933, 19768, 5293},
                                           {19769, 19603, 5249},
                                           {19604, 19435, 5206},
                                           {19437, 19266, 5161},
                                           {19271, 19097, 5115},
                                           {19101, 18925, 5070},
                                           {18931, 18753, 5025},
                                           {18758, 18578, 4980},
                                           {18584, 18402, 4933},
                                           {18408, 18226, 4886},
                                           {18232, 18049, 4839},
                                           {18052, 17870, 4791},
                                           {17873, 17690, 4743},
                                           {17691, 17508, 4694},
                                           {17509, 17325, 4645},
                                           {17324, 17140, 4595},
                                           {17140, 16956, 4547},
                                           {16955, 16769, 4497},
                                           {16767, 16581, 4446},
                                           {16579, 16392, 4396},
                                           {16390, 16203, 4345},
                                           {16199, 16011, 4294},
                                           {16007, 15818, 4244},
                                           {15815, 15626, 4192},
                                           {15621, 15431, 4141},
                                           {15427, 15236, 4089},
                                           {15231, 15039, 4035},
                                           {15034, 14841, 3983},
                                           {14836, 14642, 3930},
                                           {14638, 14443, 3877},
                                           {14439, 14242, 3823},
                                           {14240, 14039, 3769},
                                           {14040, 13835, 3715},
                                           {13840, 13631, 3663},
                                           {13639, 13426, 3608},
                                           {13435, 13219, 3554},
                                           {13233, 13013, 3498},
                                           {13028, 12806, 3444},
                                           {12824, 12598, 3389},
                                           {12617, 12389, 3335},
                                           {12410, 12180, 3278},
                                           {12203, 11970, 3223},
                                           {11995, 11760, 3168},
                                           {11786, 11549, 3111},
                                           {11577, 11338, 3055},
                                           {11367, 11126, 2999},
                                           {11156, 10914, 2942},
                                           {10945, 10701, 2886},
                                           {10734, 10488, 2830},
                                           {10521, 10273, 2773},
                                           {10309, 10059, 2716},
                                           {10096, 9845, 2658},
                                           {9882, 9630, 2601},
                                           {9669, 9415, 2544},
                                           {9455, 9199, 2487},
                                           {9240, 8983, 2429},
                                           {9024, 8766, 2372},
                                           {8810, 8550, 2314},
                                           {8595, 8334, 2256},
                                           {8379, 8117, 2198},
                                           {8162, 7898, 2140},
                                           {7945, 7681, 2083},
                                           {7729, 7463, 2025},
                                           {7513, 7245, 1968},
                                           {7295, 7027, 1909},
                                           {7079, 6809, 1850},
                                           {6861, 6590, 1794},
                                           {6644, 6372, 1736},
                                           {6427, 6154, 1678},
                                           {6209, 5935, 1619},
                                           {5992, 5716, 1560},
                                           {5775, 5498, 1503},
                                           {5558, 5280, 1445},
                                           {5341, 5061, 1386},
                                           {5124, 4843, 1328},
                                           {4907, 4625, 1269},
                                           {4690, 4407, 1212},
                                           {4472, 4188, 1155},
                                           {4256, 3971, 1096},
                                           {4039, 3753, 1038},
                                           {3823, 3536, 980},
                                           {3608, 3319, 923},
                                           {3392, 3103, 865},
                                           {3177, 2886, 808},
                                           {2962, 2670, 750},
                                           {2747, 2454, 692},
                                           {2533, 2239, 635},
                                           {2319, 2024, 578},
                                           {2105, 1809, 521},
                                           {1891, 1593, 463},
                                           {1678, 1379, 407},
                                           {1465, 1165, 350},
                                           {1253, 952, 294},
                                           {1041, 739, 236},
                                           {830, 527, 180},
                                           {620, 316, 124},
                                           {411, 105, 67},
                                           {201, -105, 11}};