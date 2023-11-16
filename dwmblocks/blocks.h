//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" 🔊 ", 	"pamixer --get-volume-human",			  1, 0},

	{" 📅 ", 	"date '+%d %B %Y'",				 60, 0},

	{" 🕒 ", 	"date '+%H:%M'",				  5, 0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
