//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "p-music",								2,		1},
	{"", "sb-cpu",								10,		2},
	{"", "sb-nettraf",							1,		2},
	{"", "sb-battery",							2,		2},
	{"\x05  ", "date '+%b %d '",			    30,		3},
	{"\x04  ", "date '+%I:%M%p '",			    3,		4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "\x01 | ";
static unsigned int delimLen = 5;
