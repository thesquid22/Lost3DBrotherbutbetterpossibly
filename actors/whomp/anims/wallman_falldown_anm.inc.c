static const short wallman_falldown_prm[]={
	    0,    5,  180,  104,    0,    0,    0,    0,
	    1,    1,    1,    1,    0,    0,    0,    0,
	    0,    0,    0,-15887,-16017,-16327,-16698,-17008,
	-17138,-17096,-16984,-16820,-16626,-16421,-16224,-16056,
	-15938,-15887,    0,    0,    2,    5,    7,    8,
	    7,    7,    6,    4,    3,    2,    1,    0,
	    0,    0,    0,    0,    0,    1,    1,    1,
	    1,    0,    0,    0,    0,    0,    0,    0,
	-15887,-16017,-16327,-16698,-17008,-17138,-17096,-16984,
	-16820,-16626,-16421,-16224,-16056,-15938,-15887,    3,
	    3,    4,    4,    5,    6,    6,    7,    8,
	    9,   10,   10,   11,   11,   11, 6675, 6953,
	 7734, 8934,10470,12260,14219,16266,18317,20290,
	22101,23668,24907,25736,26071,-16380,-16380,-16381,
	-16381,-16381,-16382,-16382,-16383,-16384,-16384,-16385,
	-16385,-16385,-16386,-16386,    0,    0,    1,    3,
	    6,    9,   13,   16,   20,   23,   26,   29,
	   31,   33,   33,-6362,-6647,-7444,-8670,-10239,
	-12067,-14069,-16159,-18255,-20270,-22120,-23720,-24986,
	-25833,-26176,-16384,-16384,-16384,-16384,-16384,-16383,
	-16383,-16383,-16383,-16383,-16382,-16382,-16382,-16382,
	-16382, 8226,16383,-8226, 8226,16383,-8226, 8226,
	16383,-8226, 8226,16383,-8226,    0, -151, -513,
	 -946,-1308,-1460,-1411,-1279,-1089, -862, -622,
	 -393, -198,  -59,    0,16453,16453,16453,16453,
	16453,16453,16453,16453,16453,16453,16453,16453,
	16453,16453,16453,};

static unsigned short wallman_falldown_tbl[]= {
	     1,     1,	/* chn18(11) */
	     1,     2,
	     1,     0,
	     1,     0,	/* chn18(11) */
	     1,     0,
	     1,     3,
	     1,     0,	/* ichi_body(10) */
	    15,   181,
	    15,   196,
	     1,   178,	/* chn21(9) */
	     1,   179,
	     1,   180,
	     1,     0,	/* ichi_Rfoot(0) */
	    15,     4,
	    15,    19,
	     1,   175,	/* chn19(8) */
	     1,   176,
	     1,   177,
	    15,    34,	/* ichi_Lfoot(1) */
	    15,    49,
	    15,    64,
	     1,   172,	/* chn28(7) */
	     1,   173,
	     1,   174,
	    15,    79,	/* ichi_Rarm(3) */
	    15,    94,
	    15,   109,
	     1,     0,	/* ichi_Rhand(2) */
	     1,     0,
	     1,     0,
	     1,   169,	/* chn26(6) */
	     1,   170,
	     1,   171,
	    15,   124,	/* ichi_Larm(5) */
	    15,   139,
	    15,   154,
	     1,     0,	/* ichi_Lhand(4) */
	     1,     0,
	     1,     0,
};

static const struct Animation wallman_falldown_anm={
	1,	/* attr 	*/
	0,					/* code 	*/
	0,					/* start 	*/
	0,					/* loop 	*/
	15,
	12,
	wallman_falldown_prm,
	wallman_falldown_tbl,
	0,
};