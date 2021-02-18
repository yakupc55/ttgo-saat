String AYLAR[13] = {"---","Ocak","Subat","Nisan","Mayis","Haziran","Temmuz","Agustos","Eylul","Ekim","Kasım","Aralik"};
String GUNLER[8] = {"---","Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"};

int IMSAK[12][31]={ {401,401,401,401,401,401,401,401,401,400,400,400,399,399,398,398,397,396,396,395,394,393,392,392,391,390,389,388,387,385,384},
{383,382,380,379,378,376,375,373,372,370,369,367,366,364,362,361,359,357,355,353,351,349,348,346,344,342,339,337,0,0,0},
{335,333,331,329,327,324,322,320,317,315,313,310,308,306,303,301,298,296,293,291,288,299,297,294,292,289,287,285,342,340,338},
{335,333,329,327,325,323,320,318,316,313,309,308,306,302,300,298,294,292,290,287,285,282,280,278,275,273,269,268,265,262,0},
{261,258,255,253,250,248,245,243,241,238,236,235,232,230,227,225,223,221,219,217,215,213,210,208,207,205,203,201,200,198,196},
{195,194,192,190,190,187,186,186,185,184,183,181,182,181,180,180,180,179,179,179,179,180,180,180,181,182,182,184,184,185,0},
{185,188,189,189,192,192,194,196,197,199,201,203,205,206,208,210,211,214,216,219,220,223,225,227,229,231,233,235,238,240,241},
{244,246,248,250,253,255,257,259,262,264,266,268,270,272,274,276,279,280,282,284,286,289,290,293,294,296,299,300,302,304,307},
{309,309,312,314,316,318,320,321,323,324,327,329,330,332,334,336,337,338,340,342,345,346,334,336,338,340,342,344,345,347,0},
{349,351,353,354,356,358,359,361,363,365,366,368,370,371,373,375,376,378,379,381,383,384,386,387,329,331,332,334,335,337,338},
{340,341,343,344,346,347,349,350,352,353,355,356,358,359,360,362,363,365,366,367,369,370,371,372,374,375,376,377,379,380,0},
{381,382,383,384,385,386,387,388,389,390,391,392,393,393,394,395,396,396,397,397,398,398,399,399,400,400,400,401,401,401,401} };

int GUNES[12][31]={ {520,521,521,521,521,521,520,520,520,519,518,518,517,517,516,515,514,513,512,511,510,509,508,507,506,504,503,502,501,499,498},
{496,495,493,492,490,488,487,485,483,482,480,478,476,474,473,471,469,467,465,463,461,459,457,455,453,451,449,447,0,0,0},
{442,440,438,436,434,432,429,427,425,423,421,418,416,414,412,410,407,405,403,401,398,396,394,392,389,387,385,383,440,438,436},
{434,431,429,427,425,422,420,418,416,414,412,409,407,405,403,401,399,397,395,393,390,388,386,384,382,381,379,377,375,373,0},
{371,369,367,366,364,362,360,359,357,355,354,352,351,349,348,346,345,344,342,341,340,339,337,336,335,334,333,332,331,330,330},
{329,328,327,327,326,326,325,325,324,324,324,323,323,323,323,323,323,323,323,323,323,324,324,324,325,325,325,326,327,327,0},
{328,329,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,345,346,347,348,350,351,352,354,355,357,358,359,361,362},
{364,365,367,368,370,371,373,374,376,377,379,380,382,384,385,387,388,390,391,393,394,396,398,399,401,402,404,405,407,409,410},
{412,413,415,416,418,419,421,423,424,426,427,429,430,432,433,435,437,438,440,441,443,444,446,448,449,451,452,454,456,457,0},
{459,460,462,464,465,467,468,470,472,473,475,477,478,480,482,483,485,487,488,490,492,493,495,497,439,440,442,444,445,447,449},
{451,452,454,456,458,459,461,463,464,466,468,470,471,473,475,476,478,480,481,483,484,486,488,489,491,492,494,495,497,498,0},
{499,501,502,503,505,506,507,508,509,510,511,512,513,514,515,516,517,517,518,519,519,520,520,520,521,521,521,521,522,522,522} };

int OGLE[12][31]={ {773,774,774,775,775,775,776,776,777,777,778,778,778,779,779,779,780,780,780,781,781,781,782,782,782,782,783,783,783,783,783},
{784,784,784,784,784,784,784,784,784,784,784,784,784,784,784,784,784,784,784,784,784,784,784,783,783,783,783,783,0,0,0},
{782,782,782,782,782,781,781,781,781,780,780,780,780,779,779,779,778,778,778,778,777,777,777,776,776,776,775,775,835,835,834},
{834,834,833,833,833,833,832,832,832,831,831,831,831,830,830,830,830,829,829,829,829,829,828,828,828,828,828,828,827,827,0},
{827,827,827,827,827,827,827,827,827,826,826,826,826,826,826,826,826,827,827,827,827,827,827,827,827,827,827,827,827,828,828},
{828,828,828,828,829,829,829,829,829,830,830,830,830,830,831,831,831,831,831,832,832,832,832,833,833,833,833,833,834,834,0},
{834,834,834,835,835,835,835,835,835,835,836,836,836,836,836,836,836,836,836,836,837,837,837,837,837,837,837,837,837,837,836},
{836,836,836,836,836,836,836,836,836,835,835,835,835,835,835,834,834,834,834,833,833,833,833,832,832,832,832,831,831,831,830},
{830,830,829,829,829,828,828,828,827,827,827,826,826,826,825,825,825,824,824,824,823,823,822,822,822,821,821,821,820,820,0},
{820,819,819,819,819,818,818,818,817,817,817,817,816,816,816,816,815,815,815,815,815,815,814,814,754,754,754,754,754,754,754},
{754,754,754,754,754,754,754,754,754,754,754,754,754,755,755,755,755,755,755,756,756,756,756,757,757,757,758,758,758,759,0},
{759,759,760,760,761,761,762,762,762,763,763,764,764,765,765,766,766,767,767,768,768,769,769,770,770,771,771,772,772,773,773} };

int IKINDI[12][31]={ {875,876,877,878,879,880,881,882,883,884,886,887,888,889,890,892,893,894,896,897,898,900,901,902,904,905,907,908,909,911,912},
{914,915,917,918,919,921,922,924,925,926,928,929,931,932,934,935,936,938,939,940,942,943,944,946,947,948,949,951,0,0,0},
{953,954,956,957,958,959,960,962,963,964,965,966,967,968,969,970,971,972,973,974,975,976,977,978,979,980,981,982,1043,1044,1045},
{1046,1047,1047,1048,1049,1050,1051,1052,1052,1053,1054,1055,1056,1056,1057,1058,1059,1059,1060,1061,1062,1062,1063,1064,1064,1065,1066,1066,1067,1068,0},
{1068,1069,1070,1070,1071,1072,1072,1073,1073,1074,1075,1075,1076,1076,1077,1078,1078,1079,1079,1080,1080,1081,1081,1082,1082,1083,1083,1084,1084,1085,1085},
{1086,1086,1087,1087,1088,1088,1088,1089,1089,1090,1090,1090,1091,1091,1091,1092,1092,1092,1092,1093,1093,1093,1093,1093,1094,1094,1094,1094,1094,1094,0},
{1094,1094,1094,1094,1094,1094,1094,1094,1094,1094,1093,1093,1093,1093,1093,1092,1092,1092,1091,1091,1091,1090,1090,1089,1089,1088,1088,1087,1087,1086,1085},
{1085,1084,1083,1082,1082,1081,1080,1079,1078,1077,1077,1076,1075,1074,1073,1072,1071,1070,1068,1067,1066,1065,1064,1063,1061,1060,1059,1058,1056,1055,1054},
{1052,1051,1050,1048,1047,1045,1044,1042,1041,1039,1038,1036,1035,1033,1032,1030,1029,1027,1025,1024,1022,1021,1019,1017,1016,1014,1012,1011,1009,1007,0},
{1006,1004,1002,1001,999,997,996,994,992,991,989,987,986,984,982,981,979,978,976,974,973,971,970,968,907,905,904,902,901,899,898},
{896,895,893,892,891,890,888,887,886,885,883,882,881,880,879,878,877,876,875,874,874,873,872,871,871,870,869,869,868,868,0},
{867,867,867,866,866,866,866,866,866,866,866,866,866,866,866,866,867,867,867,868,868,869,869,870,870,871,872,873,873,874,875} };

int AKSAM[12][31]={ {1015,1016,1017,1018,1019,1020,1022,1023,1024,1025,1027,1028,1030,1031,1033,1034,1036,1037,1039,1040,1042,1044,1045,1047,1049,1050,1052,1054,1056,1057,1059},
{1061,1063,1064,1066,1068,1070,1072,1073,1075,1077,1079,1081,1082,1084,1086,1088,1089,1091,1093,1095,1097,1098,1100,1102,1104,1105,1107,1109,0,0,0},
{1112,1114,1116,1118,1119,1121,1123,1124,1126,1128,1130,1131,1133,1135,1136,1138,1140,1141,1143,1145,1146,1148,1150,1151,1153,1155,1156,1158,1219,1221,1223},
{1224,1226,1228,1229,1231,1233,1234,1236,1238,1239,1241,1242,1244,1246,1247,1249,1251,1252,1254,1256,1257,1259,1260,1262,1264,1265,1267,1269,1270,1272,0},
{1273,1275,1277,1278,1280,1281,1283,1284,1286,1288,1289,1291,1292,1294,1295,1297,1298,1299,1301,1302,1304,1305,1306,1308,1309,1310,1311,1313,1314,1315,1316},
{1317,1318,1319,1320,1321,1322,1323,1324,1325,1325,1326,1327,1327,1328,1328,1329,1329,1330,1330,1330,1331,1331,1331,1331,1331,1331,1331,1331,1331,1330,0},
{1330,1330,1329,1329,1329,1328,1327,1327,1326,1325,1325,1324,1323,1322,1321,1320,1319,1318,1317,1316,1315,1313,1312,1311,1309,1308,1307,1305,1304,1302,1301},
{1299,1297,1296,1294,1292,1291,1289,1287,1285,1284,1282,1280,1278,1276,1274,1272,1270,1268,1266,1264,1262,1260,1258,1256,1254,1252,1249,1247,1245,1243,1241},
{1239,1236,1234,1232,1230,1227,1225,1223,1221,1219,1216,1214,1212,1209,1207,1205,1203,1200,1198,1196,1193,1191,1189,1187,1184,1182,1180,1178,1175,1173,0},
{1171,1169,1166,1164,1162,1160,1157,1155,1153,1151,1149,1147,1144,1142,1140,1138,1136,1134,1132,1130,1128,1126,1124,1122,1060,1058,1056,1054,1052,1050,1049},
{1047,1045,1043,1042,1040,1038,1037,1035,1033,1032,1030,1029,1027,1026,1025,1023,1022,1021,1020,1019,1017,1016,1015,1014,1013,1013,1012,1011,1010,1009,0},
{1009,1008,1008,1007,1007,1006,1006,1006,1006,1005,1005,1005,1005,1005,1005,1006,1006,1006,1006,1007,1007,1008,1008,1009,1010,1010,1011,1012,1013,1014,1015} };

int YATSI[12][31]={ {1130,1131,1132,1133,1134,1135,1136,1137,1138,1139,1141,1142,1143,1144,1145,1147,1148,1149,1151,1152,1153,1155,1156,1158,1159,1160,1162,1163,1165,1166,1168},
{1169,1171,1172,1174,1176,1177,1179,1180,1182,1183,1185,1187,1188,1190,1191,1193,1195,1196,1198,1200,1201,1203,1205,1206,1208,1210,1211,1213,0,0,0},
{1215,1217,1218,1220,1222,1224,1225,1227,1229,1231,1233,1234,1236,1238,1240,1242,1244,1245,1247,1249,1251,1237,1239,1241,1243,1244,1247,1248,1310,1311,1313},
{1315,1316,1318,1321,1322,1324,1326,1327,1330,1332,1333,1336,1338,1339,1341,1343,1345,1347,1349,1351,1353,1355,1357,1359,1361,1364,1365,1368,1369,1371,0},
{1374,1375,1377,1380,1382,1385,1385,1388,1391,1393,1394,1395,1398,1400,1402,1404,1407,1408,1410,1412,1414,1416,1417,1419,1422,1424,1425,1426,1429,1430,1431},
{1432,1435,1436,1438,1439,1439,2,3,4,5,6,6,8,8,9,9,11,11,11,12,12,11,12,12,12,12,12,11,11,10,0},
{9,9,9,7,7,5,5,4,2,1,0,1439,1438,1436,1435,1433,1431,1430,1428,1427,1425,1423,1421,1420,1418,1416,1414,1411,1410,1407,1405},
{1403,1401,1399,1396,1395,1393,1391,1388,1386,1384,1381,1379,1376,1374,1371,1369,1367,1365,1363,1360,1357,1355,1352,1350,1348,1345,1343,1340,1338,1336,1333},
{1331,1328,1326,1324,1321,1319,1317,1314,1311,1308,1306,1304,1301,1299,1297,1295,1292,1289,1287,1284,1282,1280,1292,1290,1288,1285,1283,1280,1278,1275,0},
{1273,1271,1268,1266,1264,1261,1259,1257,1255,1253,1250,1248,1246,1244,1242,1240,1238,1236,1234,1232,1230,1228,1226,1225,1163,1161,1159,1158,1156,1154,1153},
{1151,1149,1148,1146,1145,1144,1142,1141,1140,1138,1137,1136,1135,1134,1133,1132,1131,1130,1129,1128,1127,1126,1125,1125,1124,1123,1123,1122,1122,1121,0},
{1121,1121,1120,1120,1120,1120,1120,1119,1119,1119,1119,1120,1120,1120,1120,1120,1121,1121,1121,1122,1122,1123,1123,1124,1124,1125,1126,1127,1127,1128,1129} };