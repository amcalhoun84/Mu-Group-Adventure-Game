#include "graphics.hpp"
#include <ncurses.h>

Graphics::Graphics()
{	
	std::cout << "We can has graphics now." << std::endl;
}

Graphics::~Graphics()
{
	std::cout << "Now you can't has any grafiks..." << std::endl;
}

void Graphics::splashScreen()
{

	WINDOW *splashWin = newwin(12, 40, 10, 0);
	

	initscr();
	start_color(); 

	init_pair(1, COLOR_GREEN, COLOR_BLACK);
	init_pair(2, COLOR_RED, COLOR_BLACK);

	wborder(splashWin, '|', '|', '-', '-', '+', '+', '+', '+');

	//attron(A_BOLD);
	attron(COLOR_PAIR(1));
	wmove(splashWin, 0, 5);
	mvprintw(0, 10, "                			                         \n");
	mvprintw(1, 10, " @@@@@@@  @@@@@@@   @@@@@@  @@@  @@@ @@@@@@@         \n");
	mvprintw(2, 10, "!@@       @@!  @@@ @@!  @@@ @@!  @@@ @@!  @@@    \n");
	mvprintw(3, 10, "!@! @!@!@ @!@!!@!  @!@  !@! @!@  !@! @!@@!@!     \n");
	mvprintw(4, 10, ":!!   !!: !!: :!!  !!:  !!! !!:  !!! !!:         \n");
	mvprintw(5, 10, " :: :: :   :   : :  : :. :   :.:: :   :          \n");
	mvprintw(6, 10, "                                                 \n");
	attron(COLOR_PAIR(2));

	mvprintw(8, 20, "                                                 \n");
	mvprintw(9, 20, "@@@@@@@@@@  @@@  @@@                             \n");
	mvprintw(10, 20, "@@! @@! @@! @@!  @@@                             \n");
	mvprintw(11, 20, "@!! !!@ @!@ @!@  !@!                             \n");
	mvprintw(12, 20, "!!:     !!: !!:  !!!                             \n");
	mvprintw(13, 20, " :      :    :.:: :                              \n");
	mvprintw(14, 20, "                                                 \n");
	attron(COLOR_PAIR(1));
	mvprintw(16, 10, "                                                 \n");
	mvprintw(17, 10, " @@@@@@@   @@@@@@  @@@@@@@@@@  @@@@@@@@  @@@@@@  \n");
	mvprintw(18, 10, "!@@       @@!  @@@ @@! @@! @@! @@!      !@@      \n");
	mvprintw(19, 10, "!@! @!@!@ @!@!@!@! @!! !!@ @!@ @!!!:!    !@@!!   \n");
	mvprintw(20, 10, ":!!   !!: !!:  !!! !!:     !!: !!:          !:!  \n");
	mvprintw(21, 10, " :: :: :   :   : :  :      :   : :: ::  ::.: :   \n");
	mvprintw(22, 10, "                                         \n");        

	wrefresh(splashWin);
	refresh();
	getch();

	delwin(splashWin);
	endwin();

}


void Graphics::introScreen()
{

	WINDOW *titleScreen = newwin(0, 0, 0, 0);
	initscr();

	start_color();

	init_pair(1, COLOR_BLUE, COLOR_BLACK);
	init_pair(2, COLOR_BLACK, COLOR_GREEN);
	init_pair(3, COLOR_GREEN, COLOR_BLACK);
	init_pair(4, COLOR_WHITE, COLOR_GREEN);
	init_pair(5, COLOR_RED, COLOR_BLACK);


	printw("\n\n\n\n");
	attron(COLOR_PAIR(5));
	printw("	THE SUMMERWORTH					 \n");
	printw("		HORROR 						 \n");
	attron(COLOR_PAIR(3));
	printw("               		      .     .\n");
	printw("       		              !!!!!!!\n");
	printw("                      .       [[[|]]]    .\n");
	printw("                      !!!!!!!!|--_--|!!!!!   \n");
	printw("                      [[[[[[[[\\_(X)_/]]]]]\n");
	printw("              .-.     /-_--__-/_--_-\\-_--\\ \n");
	printw("              |=|    /-_---__/__-__-_\\__-_\\ \n");
	printw("          . . |=| ._/-__-__\\===========/-__\\_\n");
	printw("          !!!!!!!!!\\========[ /]]|[[\\ ]=====/\n");
	printw("         /-_--_-_-_[[[[[[[[[||==  == ||]]]]]]\n");
	printw("        /-_--_--_--_|=  === ||=/^|^\\ ||== =|\n");
	printw("       /-_-/^|^\\-_--| /^|^\\=|| | | | ||^\\= |\n");
	printw("      /_-_-| | |-_--|=| | | ||=|_|_|=||=|==|\n");
	printw("     /-__--|_|_|_-_-| |_|_|=||______=||_| =|\n");
	printw("    /_-__--_-__-___-|_=__=_.`---------/._=_|__\n");
	printw("   /-----------------------\\===========/-----/\n");
	printw("  ^^^\\^^^^^^^^^^^^^^^^^^^^^^[[|]]|[[|]]=====/\n");
	printw("      |.` ..==::`=`::==.. `.[ /~~~~~\\ ]]]]]]]\n");
	printw("      | .'=[[[|]]|[[|]]]=`._||==  =  || =\\ ]\n");
	printw("      ||== =|/ _____ \\|== = ||=/^|^\\=||^\\ ||\n");
	printw("      || == `||-----||' = ==|| | | |=|| |=||\n");
	printw("      ||= == ||:^s^:|| = == ||=| | | || |=||\n");
	printw("      || = = ||:___:||= == =|| |_|_| ||_|=||\n");
	printw("     _||_ = =||o---.|| = ==_||_= == =||==_||_\n");
	printw("     \\__/= = ||:   :||= == \\__/[][][][][]\\__/\n");
	printw("     [||]= ==||:___:|| = = [||]\\//\\//\\[||]\n");
	printw("      }{- --`|`-----`|`- -- }{\\//\\//\\//\\}{\n");
	printw("   __[==]__________________[==]\\//\\//\\[==]_\n");
	printw("  |`|~~~~|================|~~~~|~~~~~~~~|~~~~||\n");
	printw("  |^| ^  |================|^   | ^ ^^ ^ |  ^ ||\n");
	printw(" \\|//\\/^|/==============\\|/^\\\\^/^.\\^///\\//|///\n");
	printw("\\///\\\\//===============\\//\\///\\\\////\\\\/////\n");
   	printw(" To Start Press Any Key... hey, where's the any key? \n");


	refresh();
	delwin(titleScreen);
	getch();
	endwin();

}

void Graphics::creditsScreen()
{

	WINDOW *creditScreen = newwin(0,0,0,0);

	initscr();

	printw("Andrew M. Calhoun\nRick Sunstrom\nKyle Johnson\n");

	refresh();
	delwin(creditScreen);
	getch();
	endwin();
}

void Graphics::oneWhoSleeps()
{

	WINDOW *OWS = newwin(0,0,0,0);
	initscr();

	start_color();

	init_pair(1, COLOR_RED, COLOR_BLACK);

	attron(COLOR_PAIR(1));
	attron(A_BOLD);
	//attron(A_BLINK);
	printw("````````````````````````````````..............-------------------------...............``````````````\n");
	printw("```````````````````````````............---------------..-------------------............`````````````\n");
	printw("````````````````````````........--------------------.  `--::::::::------------..........````````````\n");
	printw("````````````````````.......------------::::::::::--`    `-::::::::::::::---------.........``````````\n");
	printw("`````````````````......----------:::::::::::::::-`       `-:::::::::::::::::--------........````````\n");
	printw("`````````````.......`  `.--:::::::::::::::::::-.           .::::::::::::::::--::-------.......``````\n");
	printw("``````````.......`  `---:::::--::::::::::::::-              `-:::::::::::::::..::::------.......````\n");
	printw("``````.........`  `--:::::::.``::::::::::::-`        ..       .-::::::::::::-  .::::::------......``\n");
	printw("```.........--`  `-::::::::.   `-:::::::-.`        `-::-        `-:::::::::-`  `.:::::::-.```.......\n");
	printw(" ```.....----.   -::::::::.`     `....``          --```.-`         `.----.`     `-::::::::--.``.....\n");
	printw("      `.-----`  .::::::::-`                      ..     `-`                      `:::::::::::-. `-..\n");
	printw("``      `.---   -::.:::::.                       .`  ``  ..                      `-/////::::::-  .--\n");
	printw("--..      `-.  `:::-.::::`                       `..````--                        .///////:::::  .--\n");
	printw("-----.`    ``  `::::.://:`                         .-::.`                         `:////////:::  .-`\n");
	printw("------.        `:::-:///:`    ```                    .`                  ``...``  `://///-////-  `  \n");
	printw("------`        `::://///:```.-----.`     `.-..`            ``..`       `-::::::-.`.//////--//:`     \n");
	printw("------   `      -///////:`.:::::::::`     `..!.`          `.!..`       -:::::::::..///////--:`      \n");
	printw("-----`  `:`      -///////`::////////-                                 .:////:::::.-////////.`     `-\n");
	printw("----.   .::`      ://////-://///////:`                             `.:://///////:.////////:`     .:/\n");
	printw("---.    .::-      .//////:://////////:.            `  `           `-:///////////:://////:.     `-///\n");
	printw("--`     .:::-     `://////////////////:` ````   ` ` ` `  `  `     `:::////////////////:.      `:////\n");
	printw(".  `--  .::/:`     -/////:--//////////-   ...`` . . . -` . .`..    -:////////////////-` ``   -://///\n");
	printw("`.-:::  .:://:     `://---://////::::.     ``.`....`.`-`...`..      .-:////////////:` `-`   -///////\n");
	printw("-:::::` .:////.     :/--/////////:---...``   `.``.. .```````     ````.---:://///-:.  .:.   `///////-\n");
	printw("::::::` .///:/-     ::.////////:-.-//:///::.`     ` `` `    `..-::::--:::://////:   -/-    -///////`\n");
	printw("::::::`  :/:./:    `//.///::-.`  `----/:--:/:.`           `-::::/:--:-``-://////.  ./:    `///////- \n");
	printw("::-:::.  ./:.//`    :/-::.`  ````::://-`-////:-.        `.::://-.:::-.``` `.-//-  `:/.    -///////. \n");
	printw("::`:::.   :.://.    -//--    -..:///:- :///:.-::-`    `.::::.://:-.:/: .:.  .:/.  ./:    `:////:/:  \n");
	printw("::`:::.   ..://-    `..`     `.------..//:-` -//:--..-:::::..`:///-`::`-`.  `:/`  .:`    .////:./.  \n");
	printw("::.-::-     :::-               -/////`-//:  .://:.:--:/:---`  .::::`...-`     `          .////.::  `\n");
	printw("``` ``.`    `.--              `-:-..- -::.  .-:/:`.://////-   `-`..`````                 .://---` `:\n");
	printw("              `                ``     ```     -:...//://::.                              `--.-.  .::\n");
	printw("                                              ..-:---:/-::-.                              ...`  --.`\n");
	printw("                                               :::/-...:///:`    ````            `                  \n");
	printw(" ````````                          ```         `-.:/:.`-`..`     ..`              .`                \n");
	printw("  `-::::--.`       `` `          `..`             .-::.           `              `-`                \n");
	printw(".   `.-----.`      `` ``         .-`          ``    ``                          ```          ``     \n");
	printw(":-.`  `----.``                   -.           `:`                                       ``.--.`    `\n");
	printw("::::-`  `-:-.`                   -:           `:`                                      `...``   `-::\n");
	printw("`.--::.`  `.`                    .:-`         `::.`.-             ..`                   `   ``.`-:::\n");
	printw("    `.--.                         `.-.``       .:///:.           .-`                     `.-:::-..-:\n");
	printw("`                                   .:::--:..` `-://:-  ````` ``..`                      `.---::-...\n");
	printw("..`                                 .:///:/:-::`..:/:-`-:::--.-::.`                                 \n");
	printw("                         ``...`  ``.--.-:://::/--:://:.//:::-::-.`       ``                  `......\n");
	printw("                       `.-....```.-::::.`.-:///:-:://::///:--.``.-::-----.`                    `..--\n");
	printw("          `                       `.:::/:.-:////::-://///:-`.-:::///::-.`     ` `.``               `\n");
	printw("          ``                       `.-::::://////:`://///:.-:/:/:::.``        ``.:--.               \n");
	printw(".---.`    ````                     ``.---:///////: ://///::/::--.`                ``-`              \n");
	printw(":----`                           `.::///:////////- :////////--::--.                 `            ```\n");
	printw("--:::.                      ``..-::::::::///:///:-`:////////::::/::`                   `.`      .---\n");
	printw(":::-`                       ``   `````.://:-:///:--::://::::::-.-:::-.`               `.`   `` `----\n");
	
	refresh();
	delwin(OWS);
	getch();
	endwin();

}


void Graphics::deathScreen()
{
	WINDOW *gameOver = newwin(0,0,0,0);
	initscr();


                                                                                 
/*printw("\t\t                             `-`           \n");                 
printw("\t\t                          ``-:::-.`        \n");                 
printw("\t\t    YOU HAVE DIED         `-.....-:/.      \n");                 
printw("\t\t                       .:``- `-::` `.      \n");                 
printw("\t\t      GAME            .o-`.-..:+o`         \n");                 
printw("\t\t      OVER            `:/-o+o/--.:.        \n");                 
printw("\t\t                         -..  `` .-`       \n");                 
printw("\t\t                                `..        \n");                 
printw("\t\t                               `-.`        \n");                 
printw("\t\t                            `-/::.`        \n");                 
printw("\t\t                          `.:oho+.         \n");                 
printw("\t\t                      -+yddhmMMMMNdo:      \n");                 
printw("\t\t                   ``mmho+sshyhdhyo+yms:   \n");                 
printw("\t\t                  `dmyo/:o:``/o+--...+hmd- \n");                 
printw("\t\t                  hmho+//:``-s` `-.`-.`.om-\n");                 
printw("\t\t                 :Ndyhs/-``::oo/:o:`     . \n");                 
printw("\t\t                 oNdmy:/+/:yyos+s/`    ``  \n");                 
printw("\t\t                 yMNmssyo++osodsoy+`.-:+o. \n");                 
printw("\t\t                 +MMNhs/-.`.yssd+o/-:--+oys\n");                
printw("\t\t                  yMMhs//:-//://+:/`./+:.- \n");                 
printw("\t\t                   :mmyhhyo--::+yo+s+/`    \n");                 
printw("\t\t          ``..---:::/mMNNdo/:/+smhhy/`     \n");                 
printw("\t\t`shddmmNMMMMMMMMMMMMMMMMMMmhddyymNNd+:--`  \n");                 
printw("\t\t `-://++oossssyyyyyyyyyyys++/////::-       \n");                 
*/                                                            

                                                   
                                                                                
printw("\t\t        GAME OVER:      `                       \n");                 
printw("\t\t         YOU HAVE       `                       \n");                 
printw("\t\t           DIED         `                       \n");                 
printw("\t\t        `               `    `                  \n");                 
printw("\t\t          `    ` `   .  `  `-```     ``         \n");                 
printw("\t\t           ````  `...:-./....-.``  ``           \n");                 
printw("\t\t            .-.`.``//+o+s+/---`   ``     `      \n");                 
printw("\t\t              ```-:ooyddmhhyo+.``  `   `.`      \n");                 
printw("\t\t            ``:`-:-sydNmmNNds+-//.``            \n");                 
printw("\t\t        ```-``+/---+hdmdhmdy/--+/-.` .`         \n");                 
printw("\t\t          `..`+ss+://+yy+hhy/:+oo+/-``          \n");                 
printw("\t\t          ``.. ```./oo+://+o+-.````-`           \n");                 
printw("\t\t          ` .-      `..ss+``       ..`.`   ``   \n");                 
printw("\t\t            .:``    -/+-./.:.     `-. `    ```  \n");                 
printw("\t\t           `:y/:::++y+:  `/os/-..:os.           \n");                 
printw("\t\t          ``.+o:-..-+/    -:.`.`..::`     `     \n");                 
printw("\t\t          ````     `.-``.``:`                   \n");                 
printw("\t\t      ``  .-      `./+-++:-:..                  \n");                 
printw("\t\t     ``` `.   ` ``-./o/ys/y-+-`        `        \n");                 
printw("\t\t                :`-+:/.o:/:.o.-     ```  `    ` \n");                 
printw("\t\t               ..  /``      :`  ` `` ```        \n");                 
printw("\t\t             `` .` .        .                   \n");                 
printw("\t\t               `- ` `       ` ` ``              \n");                 
printw("\t\t              ``` -`..`...`` ``   .             \n");                 
printw("\t\t             ``   `-..---....`       `       `  \n");                 
printw("\t\t                    -:-//-/+.         `         \n");                 
printw("\t\t                     `+o/s-   .`                \n");                 
printw("\t\t                               .                \n");                 
printw("\t\t                     `                          \n");                 
printw("\t\t                          .                     \n");                 



	refresh();
	delwin(gameOver);
	getch();
	endwin();
}

void Graphics::insanityScreen()
{

	WINDOW *insane = newwin(0,0,0,0);
	initscr();

printw(",,,,:::,::::,::::::::::::::::::::::::::::::::::::::::::~~:::::::::::::::::::::::\n");
printw(",,,:,::,,,,,,::::::::::::::::::::::,:::~::::::::::::::~~::::::::::::::::::::::::\n");
printw(",,,,,:,,,,,,::::::::::::::::::::::::.:~::::::::::::~::~::::::::::::::~:::::::::~\n");
printw(",,,,,,:::,,:,::::::::::::::::::::::::..~.~:::::::::::~~::::::::::::::~:::::::::~\n");
printw(",,,,,,::,::::::::::::::,:::::::::::~::...:::~::::~:::~:::::::::::::::::::::::::~\n");
printw(",,,,,,,,:::::::::::::::.::.:.,:::~~~:::.....~::::::~::::::::::::::::::::::::::~~\n");
printw(":,,,:,,::::::::::::::::::...,::,,~~:~,:.,....:,::::~~:::::::::::::::::::::::::::\n");
printw(",:,::,:::::::::::::::::::::....................~::~~~~::::::::::::::::::::::::::\n");
printw(":,:::::  YOUR LAST  :::::::.:............,......:~:::::::~:::::::::::::::::~:~::\n");
printw(",::::::  SHRED OF   :::::::::....................~~:::::::::::~::::::::::::::~::\n");
printw(":::::::  SANITY IS  ::::::::,.....................~~~~~~~~~:::::::::::::::::::::\n");
printw(":::::::::: LOST ::::::::::::.,...............,.....,~~~:::::~:~:::::::::::::::::\n");
printw("::::::::::::::::::::::~:.::....,...................,~::~~~~:::::::::::::::::::~~\n");
printw("::::::::: GAME OVER::::::~:...........................:~:~::::::::::::::~:::::::\n");
printw("::::::::::::::::::::::::,.,...........................:~~~:::~:::::::::~::::~:::\n");
printw("::::::::::::::::::::~::::~~.......,,,,........,......~~~:~~~~~:::::::::::::~~:~:\n");
printw("::::::::::::::::::::~~::~~~.....,.:::,.....,:::,.....~~~~:~~:::~::::::~:::~:~::~\n");
printw("::::::::::::::::::::::~~~~........:::,...,,,:::,.....~~::~::~~~~~~~:~~~:::::::~~\n");
printw("::::::::::::::::::::::~:~~~...,.....,,......,........~~~~~~~::~~:~~:~~~~~~::~~~:\n");
printw("::::::::::::::::::::::~~~~~,......................,..~~:::~~~~~~~~~~~~~~~~::::~~\n");
printw(":::::::::::::::::::~:~~~~~~.,.......................~.~~~~~~~~~~~~~~~~~~~~~~:::~\n");
printw(":::::::::::::::::~~~~~~~~~:,~,..+,.............7...~~,~:~:~~~~~~~~~~:~~~~~~~~::~\n");
printw("::::::::::::::~~~~~~~~~:,.......=??....,......7=....~:~~~~~~~~~~~~~~~:~:~~~~~::~\n");
printw(":::::::~:::~:::~~~~~~.:..........7+7=. 7=?777+7=.......~.~~~~~~~~~~~~~~~~~~~~~~~\n");
printw("::::::::::::~~~~~~~~~~~,.........I7+? 7 7~ I =?........~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printw(":::::::~:~~~~~~~~~~~~~~............77?+  7, 7...........~~~~~~~~~~~~:~~~~~~~~~~~\n");
printw(":::::~~~~~~~~~~~~~~~~,..........,..,I7 777,......................,.,~~~~~~~~~~~~\n");
printw("::::~:~~~~~:~~~~~~~~~...,..............................,.........~~~=~~~~~~~~~~~\n");
printw("::::~~~~~~~~~~~~~,..:................................,...........~~~~~~~~~~~~~~~\n");
printw("::::~~~~~~~~~.::.:............:.......,..........................,,.:=~~~~~~~~~~\n");
printw(":~~~~~~~~~:~.....,......,........................................,,..~~~~~~~~~~~\n");
printw(":~~~~~~.~,.,,..:...................,.....................,........:...~:=~~~~~~~\n");
printw("~~~~~~~~:............:..........................,..:..........,.......,~==~~~~~~\n");
printw("~~~~~~~~~...............:.........................................:..,,~~==~~~~~\n");
printw("~~~~~~~:~:..~......,..,...........:..............................:...::=~~~~~~~~\n");
printw("~~~~~~~~,:...........,.........,..........,.......................:...~~~~~~~~~~\n");
printw("~~~~~~~,~:.,.............::....................................,....:::=~~=~=~~~\n");
printw("~~~~~~~:~~...................,................................,.....,~~=;===~~~=\n");

	refresh();
	delwin(insane);
	getch();
	endwin();

}

// tester main
int main()
{
	Graphics g;
	
//	g.splashScreen();
	// g.introScreen();
	//g.oneWhoSleeps();
	//g.deathScreen();
	g.insanityScreen();

	return 0;
}