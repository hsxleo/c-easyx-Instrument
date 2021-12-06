#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include <windows.h>
#include <mmsystem.h>

#pragma comment(lib,"winmm.lib")

IMAGE background, piano, flute, zither, helpbk, helpw, helpq;
IMAGE p1, p2, p3, p4, p5, f1, f2, z1, z2, z3, z4;

void key_P (char s);
void draw_P (char t);
void key_F (char s);
void draw_F (char t);


void key_P (char s) {
	switch (s) {
	case 'w':case 'W':
		PlaySound ("C5.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'e':case 'E':
		PlaySound ("D5.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'r':case 'R':
		PlaySound ("E5.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 't':case 'T':
		PlaySound ("F5.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'y':case 'Y':
		PlaySound ("G5.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'u':case 'U':
		PlaySound ("A5.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'i':case 'I':
		PlaySound ("B5.wav", NULL, SND_FILENAME | SND_ASYNC); break;

	case 's':case 'S':
		PlaySound ("C4.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'd':case 'D':
		PlaySound ("D4.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'f':case 'F':
		PlaySound ("E4.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'g':case 'G':
		PlaySound ("F4.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'h':case 'H':
		PlaySound ("G4.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'j':case 'J':
		PlaySound ("A4.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'k':case 'K':
		PlaySound ("B4.wav", NULL, SND_FILENAME | SND_ASYNC); break;

	case 'z':case 'Z':
		PlaySound ("C3.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'x':case 'X':
		PlaySound ("D3.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'c':case 'C':
		PlaySound ("E3.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'v':case 'V':
		PlaySound ("F3.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'b':case 'B':
		PlaySound ("G3.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'n':case 'N':
		PlaySound ("A3.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'm':case 'M':
		PlaySound ("B3.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	}
}

void key_F (char s) {
	switch (s) {
	case 's':case 'S':
		PlaySound ("降6.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'd':case 'D':
		PlaySound ("降7.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'f':case 'F':
		PlaySound ("1.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'g':case 'G':
		PlaySound ("2.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'h':case 'H':
		PlaySound ("3.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'j':case 'J':
		PlaySound ("4.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'k':case 'K':
		PlaySound ("5.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'l':case 'L':
		PlaySound ("6.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	}
}

void key_Z (char s) {
	switch (s) {
	case 'z':case 'Z':
		PlaySound ("超低音1.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'x':case 'X':
		PlaySound ("超低音2.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'c':case 'C':
		PlaySound ("超低音3.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'v':case 'V':
		PlaySound ("超低音5.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'b':case 'B':
		PlaySound ("超低音6.wav", NULL, SND_FILENAME | SND_ASYNC); break;/* 超低音 */

	case 's':case 'S':
		PlaySound ("低音1.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'd':case 'D':
		PlaySound ("低音2.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'f':case 'F':
		PlaySound ("低音3.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'g':case 'G':
		PlaySound ("低音5.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'h':case 'H':
		PlaySound ("低音6.wav", NULL, SND_FILENAME | SND_ASYNC); break;/* 低音 */

	case 'w':case 'W':
		PlaySound ("中音1.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'e':case 'E':
		PlaySound ("中音2.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'r':case 'R':
		PlaySound ("中音3.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 't':case 'T':
		PlaySound ("中音5.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case 'y':case 'Y':
		PlaySound ("中音6.wav", NULL, SND_FILENAME | SND_ASYNC); break;/* 中音 */

	case '1':
		PlaySound ("高音1.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case '2':
		PlaySound ("高音2.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case '3':
		PlaySound ("高音3.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case '4':
		PlaySound ("高音5.wav", NULL, SND_FILENAME | SND_ASYNC); break;
	case '5':
		PlaySound ("高音6.wav", NULL, SND_FILENAME | SND_ASYNC); break;/* 高音 */

	case '6':
		PlaySound ("超高音1.wav", NULL, SND_FILENAME | SND_ASYNC); break;/* 超高音 */
	}



}

void draw_P (char t) {
	cleardevice ();
	putimage (0, 0, &piano);
	setfillcolor (YELLOW);  //这是颜色  不喜欢可以自己改
	switch (t) {
	case 'z':case 'Z':
		fillrectangle (133, 330, 163, 403); break;
	case 'x':case 'X':
		fillrectangle (166, 330, 196, 403); break;
	case 'c':case 'C':
		fillrectangle (199, 330, 229, 403); break;
	case 'v':case 'V':
		fillrectangle (232, 330, 262, 403); break;
	case 'b':case 'B':
		fillrectangle (265, 330, 295, 403); break;
	case 'n':case 'N':
		fillrectangle (298, 330, 328, 403); break;
	case 'm':case 'M':
		fillrectangle (331, 330, 361, 403); break;

	case 's':case 'S':
		fillrectangle (364, 330, 394, 403); break;
	case 'd':case 'D':
		fillrectangle (397, 330, 427, 403); break;
	case 'f':case 'F':
		fillrectangle (430, 330, 460, 403); break;
	case 'g':case 'G':
		fillrectangle (463, 330, 493, 403); break;
	case 'h':case 'H':
		fillrectangle (496, 330, 526, 403); break;
	case 'j':case 'J':
		fillrectangle (529, 330, 559, 403); break;
	case 'k':case 'K':
		fillrectangle (562, 330, 592, 403); break;


	case 'w':case 'W':
		fillrectangle (595, 330, 625, 403); break;
	case 'e':case 'E':
		fillrectangle (628, 330, 658, 403); break;
	case 'r':case 'R':
		fillrectangle (661, 330, 691, 403); break;
	case 't':case 'T':
		fillrectangle (694, 330, 724, 403); break;
	case 'y':case 'Y':
		fillrectangle (727, 330, 757, 403); break;
	case 'u':case 'U':
		fillrectangle (758, 330, 788, 403); break;
	case 'i':case 'I':
		fillrectangle (100, 330, 130, 403); break;

	default:
		break;
	}
}

void draw_F (char t) {
	cleardevice ();
	putimage (0, 0, &flute);
	setfillcolor (YELLOW);
	switch (t) {
	case 's':case 'S':
		fillcircle (385, 178, 10); break;
	case 'd':case 'D':
		fillcircle (420, 178, 10); break;
	case 'f':case 'F':
		fillcircle (455, 178, 10); break;
	case 'g':case 'G':
		fillcircle (495, 178, 10); break;
	case 'h':case 'H':
		fillcircle (530, 178, 10); break;
	case 'j':case 'J':
		fillcircle (565, 178, 10); break;
	case 'k':case 'K':
		fillcircle (680, 178, 10); break;
	case 'l':case 'L':
		fillcircle (710, 178, 10); break;
	default:
		break;
	}
}

void draw_Z (char t) {
	cleardevice ();
	putimage (0, 0, &zither);
	setfillcolor (RED);
	switch (t) {
	case 'z':case 'Z':
		fillrectangle (10, 30, 400, 40); break;
	case 'x':case 'X':
		fillrectangle (10, 55, 400, 65); break;
	case 'c':case 'C':
		fillrectangle (10, 75, 400, 85); break;
	case 'v':case 'V':
		fillrectangle (10, 90, 400, 100); break;
	case 'b':case 'B':
		fillrectangle (10, 110, 400, 120); break;
	case 'n':case 'N':
		fillrectangle (10, 130, 400, 140); break;
	case 'm':case 'M':
		fillrectangle (10, 155, 400, 165); break;

	case 's':case 'S':
		fillrectangle (10, 175, 400, 185); break;
	case 'd':case 'D':
		fillrectangle (10, 195, 400, 205); break;
	case 'f':case 'F':
		fillrectangle (10, 215, 400, 225); break;
	case 'g':case 'G':
		fillrectangle (10, 240, 400, 250); break;
	case 'h':case 'H':
		fillrectangle (10, 260, 400, 270); break;
	case 'j':case 'J':
		fillrectangle (10, 285, 400, 295); break;
	case 'k':case 'K':
		fillrectangle (10, 305, 400, 315); break;


	case 'w':case 'W':
		fillrectangle (10, 330, 400, 340); break;
	case 'e':case 'E':
		fillrectangle (10, 350, 400, 360); break;
	case 'r':case 'R':
		fillrectangle (10, 370, 400, 380); break;
	case 't':case 'T':
		fillrectangle (10, 390, 400, 400); break;
	case 'y':case 'Y':
		fillrectangle (10, 410, 400, 420); break;
	case 'u':case 'U':
		fillrectangle (10, 430, 400, 440); break;
	case 'i':case 'I':
		fillrectangle (10, 450, 400, 460); break;

	default:
		break;
	}
}

void draw_help () {
	cleardevice ();
	putimage (0, 0, &helpbk);
	//文字布局
	settextcolor (WHITE);                            //设置字体颜色
	settextstyle (30, 0, "华文新魏"); //设置文字样式
	setbkmode (TRANSPARENT);                         //文字背景透明

	outtextxy (460, 100, "W、操作说明");
	outtextxy (460, 150, "Q、制作者信息");
	outtextxy (460, 200, "E、返回菜单");
	char s;
	while (1) {
		if (kbhit ()) {
			s = getch ();
			switch (s) {
			case 'w':case 'W':
				cleardevice ();
				putimage (0, 0, &helpw);
				_getch ();
				break;
			case 'q':case 'Q':
				cleardevice ();
				putimage (0, 0, &helpq);
				outtextxy (150, 100, "hsxleo");
				_getch ();
				break;
			case 'e':case 'E':
				return;
				break;
			default:
				break;
			}
			cleardevice ();
			putimage (0, 0, &helpbk);
			outtextxy (460, 100, "W、操作说明");
			outtextxy (460, 150, "Q、制作者信息");
			outtextxy (460, 200, "E、返回菜单");
		}
	}
}

void draw_spectrum () {
	cleardevice ();
	putimage (0, 0, &helpbk);
	//文字布局
	settextcolor (WHITE);                            //设置字体颜色
	settextstyle (20, 0, "华文新魏"); //设置文字样式
	setbkmode (TRANSPARENT);                         //文字背景透明

	outtextxy (10, 100, "1、笛子《错位时空》");
	outtextxy (10, 150, "2、笛子《最亲的人》");
	outtextxy (220, 100, "3、钢琴《风吹麦浪》-1");
	outtextxy (220, 150, "4、钢琴《风吹麦浪》-2");
	outtextxy (220, 200, "5、钢琴《青花瓷》-1");
	outtextxy (220, 250, "6、钢琴《青花瓷》-2");
	outtextxy (220, 300, "7、钢琴《青花瓷》-3");
	outtextxy (460, 100, "8、古筝《雾里》-1");
	outtextxy (460, 150, "9、古筝《雾里》-2");
	outtextxy (460, 200, "q、古筝《用力活着》-1");
	outtextxy (460, 250, "w、古筝《用力活着》-2");
	outtextxy (460, 300, "0、返回菜单");
	char s;
	while (1) {
		if (kbhit ()) {
			s = getch ();
			switch (s) {
			case '1':
				cleardevice ();
				putimage (0, 0, &f1);
				_getch ();
				break;
			case '2':
				cleardevice ();
				putimage (0, 0, &f2);
				_getch ();
				break;
			case '3':
				cleardevice ();
				putimage (0, 0, &p1);
				_getch ();
				break;
			case '4':
				cleardevice ();
				putimage (0, 0, &p2);
				_getch ();
				break;
			case '5':
				cleardevice ();
				putimage (0, 0, &p3);
				_getch ();
				break;
			case '6':
				cleardevice ();
				putimage (0, 0, &p4);
				_getch ();
				break;
			case '7':
				cleardevice ();
				putimage (0, 0, &p5);
				_getch ();
				break;
			case '8':
				cleardevice ();
				putimage (0, 0, &z1);
				_getch ();
				break;
			case '9':
				cleardevice ();
				putimage (0, 0, &z2);
				_getch ();
				break;
			case 'q':case 'Q':
				cleardevice ();
				putimage (0, 0, &z3);
				_getch ();
				break;
			case 'w':case 'W':
				cleardevice ();
				putimage (0, 0, &z4);
				_getch ();
				break;
			case '0':
				return;
				break;
			default:
				break;
			}
			cleardevice ();
			putimage (0, 0, &helpbk);
			outtextxy (10, 100, "1、笛子《错位时空》");
			outtextxy (10, 150, "2、笛子《最亲的人》");
			outtextxy (220, 100, "3、钢琴《风吹麦浪》-1");
			outtextxy (220, 150, "4、钢琴《风吹麦浪》-2");
			outtextxy (220, 200, "5、钢琴《青花瓷》-1");
			outtextxy (220, 250, "6、钢琴《青花瓷》-2");
			outtextxy (220, 300, "7、钢琴《青花瓷》-3");
			outtextxy (460, 100, "8、古筝《雾里》-1");
			outtextxy (460, 150, "9、古筝《雾里》-2");
			outtextxy (460, 200, "q、古筝《用力活着》-1");
			outtextxy (460, 250, "w、古筝《用力活着》-2");
			outtextxy (460, 300, "0、返回菜单");
		}
	}
}

void draw_main () {
	initgraph (800, 500);
	//菜单背景图片
	putimage (0, 0, &background);

	//文字布局
	settextcolor (WHITE);                            //设置字体颜色
	settextstyle (30, 0, "华文新魏"); //设置文字样式
	setbkmode (TRANSPARENT);                         //文字背景透明

	outtextxy (460, 100, "1、钢琴");
	outtextxy (460, 150, "2、笛子");
	outtextxy (460, 200, "3、古筝");
	outtextxy (460, 250, "4、音谱");
	outtextxy (460, 300, "5、帮助");
	outtextxy (460, 350, "0、退出");

	char s;
	char ch = '-1';
	while (1) {
		if (kbhit ()) {
			s = getch ();
			switch (s) {
			case '1':
				cleardevice ();
				putimage (0, 0, &piano);
				do {
					if (kbhit ()) {
						ch = getch ();
						draw_P (ch);
						key_P (ch);
					}
				} while (ch != '0');
				return;
				break;
			case '2':
				cleardevice ();
				putimage (0, 0, &flute);
				do {
					if (kbhit ()) {
						ch = getch ();
						draw_F (ch);
						key_F (ch);
					}
				} while (ch != '0');
				return;
				break;
			case '3':
				cleardevice ();
				putimage (0, 0, &zither);
				do {
					if (kbhit ()) {
						ch = getch ();
						draw_Z (ch);
						key_Z (ch);
					}
				} while (ch != '0');
				return;
				break;
			case '4':
				draw_spectrum ();
				return;
				break;
			case '5':
				draw_help ();
				return;
				break;
			case '0':
				exit (1);
				break;
			default:
				break;
			}
		}
	}
}

void load_resouce () {
	loadimage (&background, "background.jpg", 800, 500);
	loadimage (&piano, "piano.jpg", 800, 500);
	loadimage (&flute, "flute.jpg", 800, 500);
	loadimage (&zither, "zither.jpg", 800, 500);
	loadimage (&helpbk, "helpbk.jpg", 800, 500);
	loadimage (&helpw, "helpw.jpg", 800, 500);
	loadimage (&helpq, "helpq.jpg", 800, 500);
	loadimage (&p1, "p1.jpg", 800, 500);
	loadimage (&p2, "p2.jpg", 800, 500);
	loadimage (&p3, "p3.jpg", 800, 500);
	loadimage (&p4, "p4.jpg", 800, 500);
	loadimage (&p5, "p5.jpg", 800, 500);
	loadimage (&f1, "f1.jpg", 800, 500);
	loadimage (&f2, "f2.jpg", 800, 500);
	loadimage (&z1, "z1.jpg", 800, 500);
	loadimage (&z2, "z2.jpg", 800, 500);
	loadimage (&z3, "z3.jpg", 800, 500);
	loadimage (&z4, "z4.jpg", 800, 500);
}

int main () {
	load_resouce ();
	while (1) {
		draw_main ();
	}
}
