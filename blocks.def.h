//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"^c#5699af^", 		"sb-ip",		2,			0},
	{"^c#da8548^", 		"sb-internet",		1,			0},
	{"^c#ff6c6b^", 		"sb-nettraf",		1,			0},
	{"^c#98be65^Mem: ", 	"sb-memory",		5,			0},
	{"^c#c678dd^Vol: ", 	"sb-volume",		10,			30},
	{"^c#da8548^Battery: ", "sb-battery",		2,			0},
	{"^c#51afef^", "date '+%b %d (%a) %I:%M%p'",	5,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
