/* $Id$ */

/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file table/roadveh_movement.h Data about how a road vehicle must drive on a tile */

static const RoadDriveEntry _rvdd_ls_x_ne[] = {
	{15, 5},
	{14, 5},
	{13, 5},
	{12, 5},
	{11, 5},
	{10, 5},
	{ 9, 5},
	{ 8, 5},
	{ 7, 5},
	{ 6, 5},
	{ 5, 5},
	{ 4, 5},
	{ 3, 5},
	{ 2, 5},
	{ 1, 5},
	{ 0, 5},
	{RDE_NEXT_TILE | DIAGDIR_NE, 0}
};
static const RoadDriveEntry _rvdd_ls_y_se[] = {
	{5,  0},
	{5,  1},
	{5,  2},
	{5,  3},
	{5,  4},
	{5,  5},
	{5,  6},
	{5,  7},
	{5,  8},
	{5,  9},
	{5, 10},
	{5, 11},
	{5, 12},
	{5, 13},
	{5, 14},
	{5, 15},
	{RDE_NEXT_TILE | DIAGDIR_SE, 0}
};
static const RoadDriveEntry _rvdd_ls_upper_e[] = {
	{5, 0},
	{5, 1},
	{5, 2},
	{4, 3},
	{3, 4},
	{2, 5},
	{1, 5},
	{0, 5},
	{RDE_NEXT_TILE | DIAGDIR_NE, 0}
};
static const RoadDriveEntry _rvdd_ls_lower_e[] = {
	{15,  5},
	{14,  5},
	{13,  5},
	{12,  5},
	{11,  5},
	{10,  5},
	{ 9,  6},
	{ 8,  7},
	{ 7,  8},
	{ 6,  9},
	{ 5, 10},
	{ 5, 11},
	{ 5, 12},
	{ 5, 13},
	{ 5, 14},
	{ 5, 15},
	{RDE_NEXT_TILE | DIAGDIR_SE, 0}
};
static const RoadDriveEntry _rvdd_ls_left_s[] = {
	{ 5, 0},
	{ 5, 1},
	{ 5, 2},
	{ 5, 3},
	{ 5, 4},
	{ 5, 5},
	{ 6, 6},
	{ 7, 7},
	{ 8, 8},
	{ 9, 9},
	{10, 9},
	{11, 9},
	{12, 9},
	{13, 9},
	{14, 9},
	{15, 9},
	{RDE_NEXT_TILE | DIAGDIR_SW, 0}
};
static const RoadDriveEntry _rvdd_ls_right_s[] = {
	{0,  9},
	{1,  9},
	{2,  9},
	{3, 10},
	{4, 11},
	{5, 12},
	{5, 13},
	{5, 14},
	{5, 15},
	{RDE_NEXT_TILE | DIAGDIR_SE, 0}
};
static const RoadDriveEntry _rvdd_ls_rvrev_ne_short[] = {
	{0, 6},
	{0, 7},
	{0, 8},
	{0, 9},
	{RDE_TURNED | DIAGDIR_SW, 0}
};
static const RoadDriveEntry _rvdd_ls_rvrev_se_short[] = {
	{6, 15},
	{7, 15},
	{8, 15},
	{9, 15},
	{RDE_TURNED | DIAGDIR_NW, 0}
};
static const RoadDriveEntry _rvdd_ls_x_sw[] = {
	{ 0, 9},
	{ 1, 9},
	{ 2, 9},
	{ 3, 9},
	{ 4, 9},
	{ 5, 9},
	{ 6, 9},
	{ 7, 9},
	{ 8, 9},
	{ 9, 9},
	{10, 9},
	{11, 9},
	{12, 9},
	{13, 9},
	{14, 9},
	{15, 9},
	{RDE_NEXT_TILE | DIAGDIR_SW, 0}
};
static const RoadDriveEntry _rvdd_ls_y_nw[] = {
	{9, 15},
	{9, 14},
	{9, 13},
	{9, 12},
	{9, 11},
	{9, 10},
	{9,  9},
	{9,  8},
	{9,  7},
	{9,  6},
	{9,  5},
	{9,  4},
	{9,  3},
	{9,  2},
	{9,  1},
	{9,  0},
	{RDE_NEXT_TILE | DIAGDIR_NW, 0}
};
static const RoadDriveEntry _rvdd_ls_upper_w[] = {
	{0, 9},
	{1, 9},
	{2, 9},
	{3, 9},
	{4, 9},
	{5, 9},
	{6, 8},
	{7, 7},
	{8, 6},
	{9, 5},
	{9, 4},
	{9, 3},
	{9, 2},
	{9, 1},
	{9, 0},
	{RDE_NEXT_TILE | DIAGDIR_NW, 0}
};
static const RoadDriveEntry _rvdd_ls_lower_w[] = {
	{ 9, 15},
	{ 9, 14},
	{ 9, 13},
	{10, 12},
	{11, 11},
	{12, 10},
	{13,  9},
	{14,  9},
	{15,  9},
	{RDE_NEXT_TILE | DIAGDIR_SW, 0}
};
static const RoadDriveEntry _rvdd_ls_left_n[] = {
	{15, 5},
	{14, 5},
	{13, 5},
	{12, 4},
	{11, 3},
	{10, 2},
	{ 9, 1},
	{ 9, 0},
	{RDE_NEXT_TILE | DIAGDIR_NW, 0}
};
static const RoadDriveEntry _rvdd_ls_right_n[] = {
	{9, 15},
	{9, 14},
	{9, 13},
	{9, 12},
	{9, 11},
	{9, 10},
	{8,  9},
	{7,  8},
	{6,  7},
	{5,  6},
	{4,  5},
	{3,  5},
	{2,  5},
	{1,  5},
	{0,  5},
	{RDE_NEXT_TILE | DIAGDIR_NE, 0}
};
static const RoadDriveEntry _rvdd_ls_rvrev_sw_short[] = {
	{15, 8},
	{15, 7},
	{15, 6},
	{15, 5},
	{RDE_TURNED | DIAGDIR_NE, 0}
};
static const RoadDriveEntry _rvdd_ls_rvrev_nw_short[] = {
	{8, 0},
	{7, 0},
	{6, 0},
	{5, 0},
	{RDE_TURNED | DIAGDIR_SE, 0}
};
static const RoadDriveEntry _rvdd_rs_x_ne[] = {
	{15, 9},
	{14, 9},
	{13, 9},
	{12, 9},
	{11, 9},
	{10, 9},
	{ 9, 9},
	{ 8, 9},
	{ 7, 9},
	{ 6, 9},
	{ 5, 9},
	{ 4, 9},
	{ 3, 9},
	{ 2, 9},
	{ 1, 9},
	{ 0, 9},
	{RDE_NEXT_TILE | DIAGDIR_NE, 0}
};
static const RoadDriveEntry _rvdd_rs_y_se[] = {
	{9,  0},
	{9,  1},
	{9,  2},
	{9,  3},
	{9,  4},
	{9,  5},
	{9,  6},
	{9,  7},
	{9,  8},
	{9,  9},
	{9, 10},
	{9, 11},
	{9, 12},
	{9, 13},
	{9, 14},
	{9, 15},
	{RDE_NEXT_TILE | DIAGDIR_SE, 0}
};
static const RoadDriveEntry _rvdd_rs_upper_e[] = {
	{9, 0},
	{9, 1},
	{9, 2},
	{9, 3},
	{9, 4},
	{9, 5},
	{8, 6},
	{7, 7},
	{6, 8},
	{5, 9},
	{4, 9},
	{3, 9},
	{2, 9},
	{1, 9},
	{0, 9},
	{RDE_NEXT_TILE | DIAGDIR_NE, 0}
};
static const RoadDriveEntry _rvdd_rs_lower_e[] = {
	{15,  9},
	{14,  9},
	{13,  9},
	{12, 10},
	{11, 11},
	{10, 12},
	{ 9, 13},
	{ 9, 14},
	{ 9, 15},
	{RDE_NEXT_TILE | DIAGDIR_SE, 0}
};
static const RoadDriveEntry _rvdd_rs_left_s[] = {
	{ 9, 0},
	{ 9, 1},
	{10, 2},
	{11, 3},
	{12, 4},
	{13, 5},
	{14, 5},
	{15, 5},
	{RDE_NEXT_TILE | DIAGDIR_SW, 0}
};
static const RoadDriveEntry _rvdd_rs_right_s[] = {
	{0,  5},
	{1,  5},
	{2,  5},
	{3,  5},
	{4,  5},
	{5,  6},
	{6,  7},
	{7,  8},
	{8,  9},
	{9, 10},
	{9, 11},
	{9, 12},
	{9, 13},
	{9, 14},
	{9, 15},
	{RDE_NEXT_TILE | DIAGDIR_SE, 0}
};
static const RoadDriveEntry _rvdd_rs_rvrev_ne_short[] = {
	{0, 8},
	{0, 7},
	{0, 6},
	{0, 5},
	{RDE_TURNED | DIAGDIR_SW, 0}
};
static const RoadDriveEntry _rvdd_rs_rvrev_se_short[] = {
	{8, 15},
	{7, 15},
	{6, 15},
	{5, 15},
	{RDE_TURNED | DIAGDIR_NW, 0}
};
static const RoadDriveEntry _rvdd_rs_x_sw[] = {
	{ 0, 5},
	{ 1, 5},
	{ 2, 5},
	{ 3, 5},
	{ 4, 5},
	{ 5, 5},
	{ 6, 5},
	{ 7, 5},
	{ 8, 5},
	{ 9, 5},
	{10, 5},
	{11, 5},
	{12, 5},
	{13, 5},
	{14, 5},
	{15, 5},
	{RDE_NEXT_TILE | DIAGDIR_SW, 0}
};
static const RoadDriveEntry _rvdd_rs_y_nw[] = {
	{5, 15},
	{5, 14},
	{5, 13},
	{5, 12},
	{5, 11},
	{5, 10},
	{5,  9},
	{5,  8},
	{5,  7},
	{5,  6},
	{5,  5},
	{5,  4},
	{5,  3},
	{5,  2},
	{5,  1},
	{5,  0},
	{RDE_NEXT_TILE | DIAGDIR_NW, 0}
};
static const RoadDriveEntry _rvdd_rs_upper_w[] = {
	{0, 5},
	{1, 5},
	{2, 5},
	{3, 4},
	{4, 3},
	{5, 2},
	{5, 1},
	{5, 0},
	{RDE_NEXT_TILE | DIAGDIR_NW, 0}
};
static const RoadDriveEntry _rvdd_rs_lower_w[] = {
	{ 5, 15},
	{ 5, 14},
	{ 5, 13},
	{ 5, 12},
	{ 5, 11},
	{ 5, 10},
	{ 6,  9},
	{ 7,  8},
	{ 8,  7},
	{ 9,  6},
	{10,  5},
	{11,  5},
	{12,  5},
	{13,  5},
	{14,  5},
	{15,  5},
	{RDE_NEXT_TILE | DIAGDIR_SW, 0}
};
static const RoadDriveEntry _rvdd_rs_left_n[] = {
	{15, 9},
	{14, 9},
	{13, 9},
	{12, 9},
	{11, 9},
	{10, 9},
	{ 9, 9},
	{ 8, 8},
	{ 7, 7},
	{ 6, 6},
	{ 5, 5},
	{ 5, 4},
	{ 5, 3},
	{ 5, 2},
	{ 5, 1},
	{ 5, 0},
	{RDE_NEXT_TILE | DIAGDIR_NW, 0}
};
static const RoadDriveEntry _rvdd_rs_right_n[] = {
	{5, 15},
	{5, 14},
	{5, 13},
	{5, 12},
	{4, 11},
	{3, 10},
	{2,  9},
	{1,  9},
	{0,  9},
	{RDE_NEXT_TILE | DIAGDIR_NE, 0}
};
static const RoadDriveEntry _rvdd_rs_rvrev_sw_short[] = {
	{15, 6},
	{15, 7},
	{15, 8},
	{15, 9},
	{RDE_TURNED | DIAGDIR_NE, 0}
};
static const RoadDriveEntry _rvdd_rs_rvrev_nw_short[] = {
	{6, 0},
	{7, 0},
	{8, 0},
	{9, 0},
	{RDE_TURNED | DIAGDIR_SE, 0}
};
static const RoadDriveEntry _rvdd_ls_station_sw_far[] = {
	{15,  5},
	{14,  5},
	{13,  6},
	{13,  7},
	{13,  8},
	{13,  9},
	{13, 10},
	{13, 11},
	{12, 12},
	{11, 12},
	{10, 12},
	{ 9, 12},
	{ 8, 12},
	{ 7, 12},
	{ 6, 12},
	{ 5, 11},
	{ 5, 10},
	{ 5,  9},
	{ 5,  8},
	{ 5,  7},
	{ 5,  6},
	{ 5,  7},
	{ 5,  8},
	{ 5,  9},
	{ 5, 10},
	{ 5, 11},
	{ 6, 12},
	{ 7, 12},
	{ 8, 12},
	{ 9, 12},
	{10, 12},
	{11, 12},
	{12, 12},
	{13, 11},
	{13, 10},
	{14,  9},
	{15,  9},
	{RDE_NEXT_TILE | DIAGDIR_SW, 0}
};
static const RoadDriveEntry _rvdd_ls_station_nw_far[] = {
	{ 5,  0},
	{ 5,  1},
	{ 6,  2},
	{ 7,  2},
	{ 8,  2},
	{ 9,  2},
	{10,  2},
	{11,  2},
	{12,  3},
	{12,  4},
	{12,  5},
	{12,  6},
	{12,  7},
	{12,  8},
	{12,  9},
	{11, 10},
	{10, 10},
	{ 9, 10},
	{ 8, 10},
	{ 7, 10},
	{ 6, 10},
	{ 7, 10},
	{ 8, 10},
	{ 9, 10},
	{10, 10},
	{11, 10},
	{12,  9},
	{12,  8},
	{12,  7},
	{12,  6},
	{12,  5},
	{12,  4},
	{12,  3},
	{11,  2},
	{10,  2},
	{ 9,  1},
	{ 9,  0},
	{RDE_NEXT_TILE | DIAGDIR_NW, 0}
};
static const RoadDriveEntry _rvdd_ls_station_sw_near[] = {
	{15,  5},
	{14,  5},
	{13,  6},
	{13,  7},
	{13,  8},
	{13,  9},
	{13, 10},
	{13, 11},
	{12, 12},
	{11, 12},
	{10, 12},
	{ 9, 11},
	{ 9, 10},
	{ 9,  9},
	{ 9,  8},
	{ 9,  7},
	{ 9,  6},
	{ 9,  7},
	{ 9,  8},
	{ 9,  9},
	{ 9, 10},
	{ 9, 11},
	{10, 12},
	{11, 12},
	{12, 12},
	{13, 11},
	{13, 10},
	{14,  9},
	{15,  9},
	{RDE_NEXT_TILE | DIAGDIR_SW, 0}
};
static const RoadDriveEntry _rvdd_ls_station_nw_near[] = {
	{ 5, 0},
	{ 5, 1},
	{ 6, 2},
	{ 7, 2},
	{ 8, 2},
	{ 9, 2},
	{10, 2},
	{11, 2},
	{12, 3},
	{12, 4},
	{12, 5},
	{11, 6},
	{10, 6},
	{ 9, 6},
	{ 8, 6},
	{ 7, 6},
	{ 6, 6},
	{ 7, 6},
	{ 8, 6},
	{ 9, 6},
	{10, 6},
	{11, 6},
	{12, 5},
	{12, 4},
	{12, 3},
	{11, 2},
	{10, 2},
	{ 9, 1},
	{ 9, 0},
	{RDE_NEXT_TILE | DIAGDIR_NW, 0}
};
static const RoadDriveEntry _rvdd_ls_station_ne_far[] = {
	{ 0, 9},
	{ 1, 9},
	{ 2, 8},
	{ 2, 7},
	{ 2, 6},
	{ 2, 5},
	{ 2, 4},
	{ 3, 3},
	{ 4, 3},
	{ 5, 3},
	{ 6, 3},
	{ 7, 3},
	{ 8, 3},
	{ 9, 3},
	{10, 4},
	{10, 5},
	{10, 6},
	{10, 7},
	{10, 8},
	{10, 9},
	{10, 8},
	{10, 7},
	{10, 6},
	{10, 5},
	{10, 4},
	{ 9, 3},
	{ 8, 3},
	{ 7, 3},
	{ 6, 3},
	{ 5, 3},
	{ 4, 3},
	{ 3, 3},
	{ 2, 4},
	{ 1, 5},
	{ 0, 5},
	{RDE_NEXT_TILE | DIAGDIR_NE, 0}
};
static const RoadDriveEntry _rvdd_ls_station_se_far[] = {
	{9, 15},
	{9, 14},
	{8, 13},
	{7, 13},
	{6, 13},
	{5, 13},
	{4, 13},
	{3, 12},
	{3, 11},
	{3, 10},
	{3,  9},
	{3,  8},
	{3,  7},
	{3,  6},
	{4,  5},
	{5,  5},
	{6,  5},
	{7,  5},
	{8,  5},
	{9,  5},
	{8,  5},
	{7,  5},
	{6,  5},
	{5,  5},
	{4,  5},
	{3,  6},
	{3,  7},
	{3,  8},
	{3,  9},
	{3, 10},
	{3, 11},
	{3, 12},
	{4, 13},
	{5, 14},
	{5, 15},
	{RDE_NEXT_TILE | DIAGDIR_SE, 0}
};
static const RoadDriveEntry _rvdd_ls_station_ne_near[] = {
	{0, 9},
	{1, 9},
	{2, 8},
	{2, 7},
	{2, 6},
	{2, 5},
	{2, 4},
	{3, 3},
	{4, 3},
	{5, 3},
	{6, 4},
	{6, 5},
	{6, 6},
	{6, 7},
	{6, 8},
	{6, 9},
	{6, 8},
	{6, 7},
	{6, 6},
	{6, 5},
	{6, 4},
	{5, 3},
	{4, 3},
	{3, 3},
	{2, 4},
	{1, 5},
	{0, 5},
	{RDE_NEXT_TILE | DIAGDIR_NE, 0}
};
static const RoadDriveEntry _rvdd_ls_station_se_near[] = {
	{9, 15},
	{9, 14},
	{8, 13},
	{7, 13},
	{6, 13},
	{5, 13},
	{4, 13},
	{3, 12},
	{3, 11},
	{3, 10},
	{4,  9},
	{5,  9},
	{6,  9},
	{7,  9},
	{8,  9},
	{9,  9},
	{8,  9},
	{7,  9},
	{6,  9},
	{5,  9},
	{4,  9},
	{3, 10},
	{3, 11},
	{3, 12},
	{4, 13},
	{5, 14},
	{5, 15},
	{RDE_NEXT_TILE | DIAGDIR_SE, 0}
};
static const RoadDriveEntry _rvdd_rs_station_sw_far[] = {
	{15,  9},
	{14,  9},
	{13, 10},
	{13, 11},
	{12, 12},
	{11, 12},
	{10, 12},
	{ 9, 12},
	{ 8, 12},
	{ 7, 12},
	{ 6, 12},
	{ 5, 11},
	{ 5, 10},
	{ 5,  9},
	{ 5,  8},
	{ 5,  7},
	{ 5,  6},
	{ 5,  7},
	{ 5,  8},
	{ 5,  9},
	{ 5, 10},
	{ 5, 11},
	{ 6, 12},
	{ 7, 12},
	{ 8, 12},
	{ 9, 12},
	{10, 12},
	{11, 12},
	{12, 12},
	{13, 11},
	{13, 10},
	{13,  9},
	{13,  8},
	{13,  7},
	{13,  6},
	{14,  5},
	{15,  5},
	{RDE_NEXT_TILE | DIAGDIR_SW, 0}
};
static const RoadDriveEntry _rvdd_rs_station_nw_far[] = {
	{ 9,  0},
	{ 9,  1},
	{10,  2},
	{11,  2},
	{12,  3},
	{12,  4},
	{12,  5},
	{12,  6},
	{12,  7},
	{12,  8},
	{12,  9},
	{11, 10},
	{10, 10},
	{ 9, 10},
	{ 8, 10},
	{ 7, 10},
	{ 6, 10},
	{ 7, 10},
	{ 8, 10},
	{ 9, 10},
	{10, 10},
	{11, 10},
	{12,  9},
	{12,  8},
	{12,  7},
	{12,  6},
	{12,  5},
	{12,  4},
	{12,  3},
	{11,  2},
	{10,  2},
	{ 9,  2},
	{ 8,  2},
	{ 7,  2},
	{ 6,  2},
	{ 5,  1},
	{ 5,  0},
	{RDE_NEXT_TILE | DIAGDIR_NW, 0}
};
static const RoadDriveEntry _rvdd_rs_station_sw_near[] = {
	{15,  9},
	{14,  9},
	{13, 10},
	{13, 11},
	{12, 12},
	{11, 12},
	{10, 12},
	{ 9, 11},
	{ 9, 10},
	{ 9,  9},
	{ 9,  8},
	{ 9,  7},
	{ 9,  6},
	{ 9,  7},
	{ 9,  8},
	{ 9,  9},
	{ 9, 10},
	{ 9, 11},
	{10, 12},
	{11, 12},
	{12, 12},
	{13, 11},
	{13, 10},
	{13,  9},
	{13,  8},
	{13,  7},
	{13,  6},
	{14,  5},
	{15,  5},
	{RDE_NEXT_TILE | DIAGDIR_SW, 0}
};
static const RoadDriveEntry _rvdd_rs_station_nw_near[] = {
	{ 9, 0},
	{ 9, 1},
	{10, 2},
	{11, 2},
	{12, 3},
	{12, 4},
	{12, 5},
	{11, 6},
	{10, 6},
	{ 9, 6},
	{ 8, 6},
	{ 7, 6},
	{ 6, 6},
	{ 7, 6},
	{ 8, 6},
	{ 9, 6},
	{10, 6},
	{11, 6},
	{12, 5},
	{12, 4},
	{12, 3},
	{11, 2},
	{10, 2},
	{ 9, 2},
	{ 8, 2},
	{ 7, 2},
	{ 6, 2},
	{ 5, 1},
	{ 5, 0},
	{RDE_NEXT_TILE | DIAGDIR_NW, 0}
};
static const RoadDriveEntry _rvdd_rs_station_ne_far[] = {
	{ 0, 5},
	{ 1, 5},
	{ 2, 4},
	{ 3, 3},
	{ 4, 3},
	{ 5, 3},
	{ 6, 3},
	{ 7, 3},
	{ 8, 3},
	{ 9, 3},
	{10, 4},
	{10, 5},
	{10, 6},
	{10, 7},
	{10, 8},
	{10, 9},
	{10, 8},
	{10, 7},
	{10, 6},
	{10, 5},
	{10, 4},
	{ 9, 3},
	{ 8, 3},
	{ 7, 3},
	{ 6, 3},
	{ 5, 3},
	{ 4, 3},
	{ 3, 3},
	{ 2, 4},
	{ 2, 5},
	{ 2, 6},
	{ 2, 7},
	{ 2, 8},
	{ 1, 9},
	{ 0, 9},
	{RDE_NEXT_TILE | DIAGDIR_NE, 0}
};
static const RoadDriveEntry _rvdd_rs_station_se_far[] = {
	{5, 15},
	{5, 14},
	{4, 13},
	{3, 12},
	{3, 11},
	{3, 10},
	{3,  9},
	{3,  8},
	{3,  7},
	{3,  6},
	{4,  5},
	{5,  5},
	{6,  5},
	{7,  5},
	{8,  5},
	{9,  5},
	{8,  5},
	{7,  5},
	{6,  5},
	{5,  5},
	{4,  5},
	{3,  6},
	{3,  7},
	{3,  8},
	{3,  9},
	{3, 10},
	{3, 11},
	{3, 12},
	{4, 13},
	{5, 13},
	{6, 13},
	{7, 13},
	{8, 13},
	{9, 14},
	{9, 15},
	{RDE_NEXT_TILE | DIAGDIR_SE, 0}
};
static const RoadDriveEntry _rvdd_rs_station_ne_near[] = {
	{0, 5},
	{1, 5},
	{2, 4},
	{3, 3},
	{4, 3},
	{5, 3},
	{6, 4},
	{6, 5},
	{6, 6},
	{6, 7},
	{6, 8},
	{6, 9},
	{6, 8},
	{6, 7},
	{6, 6},
	{6, 5},
	{6, 4},
	{5, 3},
	{4, 3},
	{3, 3},
	{2, 4},
	{2, 5},
	{2, 6},
	{2, 7},
	{2, 8},
	{1, 9},
	{0, 9},
	{RDE_NEXT_TILE | DIAGDIR_NE, 0}
};
static const RoadDriveEntry _rvdd_rs_station_se_near[] = {
	{5, 15},
	{5, 14},
	{4, 13},
	{3, 12},
	{3, 11},
	{3, 10},
	{4,  9},
	{5,  9},
	{6,  9},
	{7,  9},
	{8,  9},
	{9,  9},
	{8,  9},
	{7,  9},
	{6,  9},
	{5,  9},
	{4,  9},
	{3, 10},
	{3, 11},
	{3, 12},
	{4, 13},
	{5, 13},
	{6, 13},
	{7, 13},
	{8, 13},
	{9, 14},
	{9, 15},
	{RDE_NEXT_TILE | DIAGDIR_SE, 0}
};

static const RoadDriveEntry * const _road_road_drive_data[] = {
	_rvdd_ls_x_ne,
	_rvdd_ls_y_se,
	_rvdd_ls_upper_e,
	_rvdd_ls_lower_e,
	_rvdd_ls_left_s,
	_rvdd_ls_right_s,
	_rvdd_ls_rvrev_ne_short,
	_rvdd_ls_rvrev_se_short,
	_rvdd_ls_x_sw,
	_rvdd_ls_y_nw,
	_rvdd_ls_upper_w,
	_rvdd_ls_lower_w,
	_rvdd_ls_left_n,
	_rvdd_ls_right_n,
	_rvdd_ls_rvrev_sw_short,
	_rvdd_ls_rvrev_nw_short,
	_rvdd_rs_x_ne,
	_rvdd_rs_y_se,
	_rvdd_rs_upper_e,
	_rvdd_rs_lower_e,
	_rvdd_rs_left_s,
	_rvdd_rs_right_s,
	_rvdd_rs_rvrev_ne_short,
	_rvdd_rs_rvrev_se_short,
	_rvdd_rs_x_sw,
	_rvdd_rs_y_nw,
	_rvdd_rs_upper_w,
	_rvdd_rs_lower_w,
	_rvdd_rs_left_n,
	_rvdd_rs_right_n,
	_rvdd_rs_rvrev_sw_short,
	_rvdd_rs_rvrev_nw_short,
	_rvdd_ls_station_sw_far,
	_rvdd_ls_station_nw_far,
	_rvdd_ls_station_sw_near,
	_rvdd_ls_station_nw_near,
	_rvdd_ls_station_sw_far,
	_rvdd_ls_station_nw_far,
	_rvdd_ls_station_sw_near,
	_rvdd_ls_station_nw_near,
	_rvdd_ls_station_ne_far,
	_rvdd_ls_station_se_far,
	_rvdd_ls_station_ne_near,
	_rvdd_ls_station_se_near,
	_rvdd_ls_station_ne_far,
	_rvdd_ls_station_se_far,
	_rvdd_ls_station_ne_near,
	_rvdd_ls_station_se_near,
	_rvdd_rs_station_sw_far,
	_rvdd_rs_station_nw_far,
	_rvdd_rs_station_sw_near,
	_rvdd_rs_station_nw_near,
	_rvdd_rs_station_sw_far,
	_rvdd_rs_station_nw_far,
	_rvdd_rs_station_sw_near,
	_rvdd_rs_station_nw_near,
	_rvdd_rs_station_ne_far,
	_rvdd_rs_station_se_far,
	_rvdd_rs_station_ne_near,
	_rvdd_rs_station_se_near,
	_rvdd_rs_station_ne_far,
	_rvdd_rs_station_se_far,
	_rvdd_rs_station_ne_near,
	_rvdd_rs_station_se_near,
};

/** Table of road stop stop frames, when to stop at a road stop. */
extern const byte _road_stop_stop_frame[] = {
	/* Duplicated left and right because of "entered stop" bit */
	20, 20, 16, 16,  20, 20, 16, 16,
	19, 19, 15, 15,  19, 19, 15, 15,
	16, 16, 12, 12,  16, 16, 12, 12,
	15, 15, 11, 11,  15, 15, 11, 11
};

static const RoadDriveEntry _rvdd_ls_rvrev_ne_long[] = {
	{15, 5},
	{14, 5},
	{13, 5},
	{12, 5},
	{11, 5},
	{10, 5},
	{ 9, 5},
	{ 8, 5},
	{ 7, 5},
	{ 6, 5},
	{ 5, 5},
	{ 4, 5},
	{ 3, 5},
	{ 2, 5},
	{ 1, 5},
	{ 0, 5},
	{ 0, 6},
	{ 0, 7},
	{ 0, 8},
	{ 0, 9},
	{RDE_TURNED | DIAGDIR_SW, 0},
	{ 1, 9},
	{ 2, 9},
	{ 3, 9},
	{ 4, 9},
	{ 5, 9},
	{ 6, 9},
	{ 7, 9},
	{ 8, 9},
	{ 9, 9},
	{10, 9},
	{11, 9},
	{12, 9},
	{13, 9},
	{14, 9},
	{15, 9},
	{RDE_NEXT_TILE | DIAGDIR_SW, 0}
};

static const RoadDriveEntry _rvdd_rs_rvrev_ne_long[] = {
	{15, 9},
	{14, 9},
	{13, 9},
	{12, 9},
	{11, 9},
	{10, 9},
	{ 9, 9},
	{ 8, 9},
	{ 7, 9},
	{ 6, 9},
	{ 5, 9},
	{ 4, 9},
	{ 3, 9},
	{ 2, 9},
	{ 1, 9},
	{ 0, 9},
	{ 0, 8},
	{ 0, 7},
	{ 0, 6},
	{ 0, 5},
	{RDE_TURNED | DIAGDIR_SW, 0},
	{ 1, 5},
	{ 2, 5},
	{ 3, 5},
	{ 4, 5},
	{ 5, 5},
	{ 6, 5},
	{ 7, 5},
	{ 8, 5},
	{ 9, 5},
	{10, 5},
	{11, 5},
	{12, 5},
	{13, 5},
	{14, 5},
	{15, 5},
	{RDE_NEXT_TILE | DIAGDIR_SW, 0}
};

static const RoadDriveEntry _rvdd_ls_rvrev_se_long[] = {
	{5,  0},
	{5,  1},
	{5,  2},
	{5,  3},
	{5,  4},
	{5,  5},
	{5,  6},
	{5,  7},
	{5,  8},
	{5,  9},
	{5, 10},
	{5, 11},
	{5, 12},
	{5, 13},
	{5, 14},
	{5, 15},
	{6, 15},
	{7, 15},
	{8, 15},
	{9, 15},
	{RDE_TURNED | DIAGDIR_NW, 0},
	{9, 14},
	{9, 13},
	{9, 12},
	{9, 11},
	{9, 10},
	{9,  9},
	{9,  8},
	{9,  7},
	{9,  6},
	{9,  5},
	{9,  4},
	{9,  3},
	{9,  2},
	{9,  1},
	{9,  0},
	{RDE_NEXT_TILE | DIAGDIR_NW, 0}
};

static const RoadDriveEntry _rvdd_rs_rvrev_se_long[] = {
	{9,  0},
	{9,  1},
	{9,  2},
	{9,  3},
	{9,  4},
	{9,  5},
	{9,  6},
	{9,  7},
	{9,  8},
	{9,  9},
	{9, 10},
	{9, 11},
	{9, 12},
	{9, 13},
	{9, 14},
	{9, 15},
	{8, 15},
	{7, 15},
	{6, 15},
	{5, 15},
	{RDE_TURNED | DIAGDIR_NW, 0},
	{5, 14},
	{5, 13},
	{5, 12},
	{5, 11},
	{5, 10},
	{5,  9},
	{5,  8},
	{5,  7},
	{5,  6},
	{5,  5},
	{5,  4},
	{5,  3},
	{5,  2},
	{5,  1},
	{5,  0},
	{RDE_NEXT_TILE | DIAGDIR_NW, 0}
};

static const RoadDriveEntry _rvdd_ls_rvrev_sw_long[] = {
	{ 0, 9},
	{ 1, 9},
	{ 2, 9},
	{ 3, 9},
	{ 4, 9},
	{ 5, 9},
	{ 6, 9},
	{ 7, 9},
	{ 8, 9},
	{ 9, 9},
	{10, 9},
	{11, 9},
	{12, 9},
	{13, 9},
	{14, 9},
	{15, 9},
	{15, 8},
	{15, 7},
	{15, 6},
	{15, 5},
	{RDE_TURNED | DIAGDIR_NE, 0},
	{14, 5},
	{13, 5},
	{12, 5},
	{11, 5},
	{10, 5},
	{ 9, 5},
	{ 8, 5},
	{ 7, 5},
	{ 6, 5},
	{ 5, 5},
	{ 4, 5},
	{ 3, 5},
	{ 2, 5},
	{ 1, 5},
	{ 0, 5},
	{RDE_NEXT_TILE | DIAGDIR_NE, 0}
};
static const RoadDriveEntry _rvdd_rs_rvrev_sw_long[] = {
	{ 0, 5},
	{ 1, 5},
	{ 2, 5},
	{ 3, 5},
	{ 4, 5},
	{ 5, 5},
	{ 6, 5},
	{ 7, 5},
	{ 8, 5},
	{ 9, 5},
	{10, 5},
	{11, 5},
	{12, 5},
	{13, 5},
	{14, 5},
	{15, 5},
	{15, 6},
	{15, 7},
	{15, 8},
	{15, 9},
	{RDE_TURNED | DIAGDIR_NE, 0},
	{14, 9},
	{13, 9},
	{12, 9},
	{11, 9},
	{10, 9},
	{ 9, 9},
	{ 8, 9},
	{ 7, 9},
	{ 6, 9},
	{ 5, 9},
	{ 4, 9},
	{ 3, 9},
	{ 2, 9},
	{ 1, 9},
	{ 0, 9},
	{RDE_NEXT_TILE | DIAGDIR_NE, 0}
};

static const RoadDriveEntry _rvdd_ls_rvrev_nw_long[] = {
	{9, 15},
	{9, 14},
	{9, 13},
	{9, 12},
	{9, 11},
	{9, 10},
	{9,  9},
	{9,  8},
	{9,  7},
	{9,  6},
	{9,  5},
	{9,  4},
	{9,  3},
	{9,  2},
	{9,  1},
	{9,  0},
	{8,  0},
	{7,  0},
	{6,  0},
	{5,  0},
	{RDE_TURNED | DIAGDIR_SE, 0},
	{5,  1},
	{5,  2},
	{5,  3},
	{5,  4},
	{5,  5},
	{5,  6},
	{5,  7},
	{5,  8},
	{5,  9},
	{5, 10},
	{5, 11},
	{5, 12},
	{5, 13},
	{5, 14},
	{5, 15},
	{RDE_NEXT_TILE | DIAGDIR_SE, 0}
};
static const RoadDriveEntry _rvdd_rs_rvrev_nw_long[] = {
	{5, 15},
	{5, 14},
	{5, 13},
	{5, 12},
	{5, 11},
	{5, 10},
	{5,  9},
	{5,  8},
	{5,  7},
	{5,  6},
	{5,  5},
	{5,  4},
	{5,  3},
	{5,  2},
	{5,  1},
	{5,  0},
	{6,  0},
	{7,  0},
	{8,  0},
	{9,  0},
	{RDE_TURNED | DIAGDIR_SE, 0},
	{9,  1},
	{9,  2},
	{9,  3},
	{9,  4},
	{9,  5},
	{9,  6},
	{9,  7},
	{9,  8},
	{9,  9},
	{9, 10},
	{9, 11},
	{9, 12},
	{9, 13},
	{9, 14},
	{9, 15},
	{RDE_NEXT_TILE | DIAGDIR_SE, 0}
};

static const RoadDriveEntry * const _road_tram_drive_data[] = {
	_rvdd_ls_x_ne,
	_rvdd_ls_y_se,
	_rvdd_ls_upper_e,
	_rvdd_ls_lower_e,
	_rvdd_ls_left_s,
	_rvdd_ls_right_s,
	_rvdd_ls_rvrev_ne_long,
	_rvdd_ls_rvrev_se_long,
	_rvdd_ls_x_sw,
	_rvdd_ls_y_nw,
	_rvdd_ls_upper_w,
	_rvdd_ls_lower_w,
	_rvdd_ls_left_n,
	_rvdd_ls_right_n,
	_rvdd_ls_rvrev_sw_long,
	_rvdd_ls_rvrev_nw_long,
	_rvdd_rs_x_ne,
	_rvdd_rs_y_se,
	_rvdd_rs_upper_e,
	_rvdd_rs_lower_e,
	_rvdd_rs_left_s,
	_rvdd_rs_right_s,
	_rvdd_rs_rvrev_ne_long,
	_rvdd_rs_rvrev_se_long,
	_rvdd_rs_x_sw,
	_rvdd_rs_y_nw,
	_rvdd_rs_upper_w,
	_rvdd_rs_lower_w,
	_rvdd_rs_left_n,
	_rvdd_rs_right_n,
	_rvdd_rs_rvrev_sw_long,
	_rvdd_rs_rvrev_nw_long,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};

static const RoadDriveEntry * const * const _road_drive_data[2] = {
	_road_road_drive_data,
	_road_tram_drive_data,
};
