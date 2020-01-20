#include <iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
class Compshop
{
	public:
	twinkle()
	{
	int i;
	for(i=0;i<=13;i++)
	{
	setbkcolor(i);
	setcolor(i+1);
	settextstyle(8,0,5);
	outtextxy(130,30,"WELCOME TO THE");
	settextstyle(8,0,5);
	outtextxy(185,80,"DELL STORE");

	settextstyle(8,0,3);
	outtextxy(80,160,"[ COMPUTER SHOP MANGEMENT SYSTEM ]");
	setcolor(i-1);
	settextstyle(8,0,3);
	outtextxy(370,440,"MADE BY : MOTASIM");
	delay(100);
	}
	return 0;
	}
	dell_logo()
	{
	setcolor(1);
	circle(320,370,60);
	circle(320,370,59);
	circle(320,370,58);
	circle(320,370,57);
	settextstyle(1,0,5);
	outtextxy(275,345,"DELL");
	return 0;
	}
	dell_strip()

	{
	setcolor(15);
	rectangle(0,0,60,479);
	setfillstyle(SOLID_FILL,1);
	floodfill(2,2,15);
	circle(30,70,30);
	circle(30,70,29);
	circle(30,70,28);
	circle(30,70,27);
	setcolor(15);
	settextstyle(1,0,1);
	outtextxy(10,58,"DELL");
	return 0;
	}
	entry()
	{
	dell_logo();
	dell_strip();
	setbkcolor(7);
	setcolor(14);
	settextstyle(8,0,5);

	outtextxy(130,30,"WELCOME TO THE");
	settextstyle(8,0,5);
	outtextxy(185,80,"DELL STORE");
	settextstyle(8,0,3);
	outtextxy(80,160,"[ COMPUTER SHOP MANGEMENT SYSTEM ]");
	int i;
	for(i=0;i<=12;i++)
	{
	sound(40+(i*40));
	setcolor(i);
	settextstyle(7,0,2);
	outtextxy(150,250,"[ PRESS ENTER TO CONTINUE ! ]");
	delay(60);
	nosound();
	}
	setcolor(4);
	settextstyle(8,0,3);
	outtextxy(370,440,"MADE BY : MOTASIM");
	delay(100);
	return 0;

	}
	front()
	{
	int i,j;
	setbkcolor(12);
	setcolor(8);
	for(i=0;i<=639;i++)
	{
	if(i==60||i==580)
	{
	line (i,0,i,479);
	}
	}
	for(j=0;j<=479;j++)
	{
	if(j==30||j==450)
	{
	line(0,j,639,j);
	}
	}
	for (i=0;i<=8;i++)

	{
	setcolor(i);
	settextstyle(1,0,4);
	outtextxy(170,70,"JAMIA MILLIA ISLAMIA");
	settextstyle(1,0,1);
	outtextxy(210,100,"UNIVERSITY POLYTECHNIC");
	settextstyle(1,0,4);
	outtextxy(235,150,"ASSIGNMENT");
	settextstyle(8,0,1);
	outtextxy(170,180,"OBJECT ORIENTED PROGRAMMING");
	outtextxy(270,200,"[DCO-302]");
	outtextxy(70,380,"SUBMITTED BY :");
	outtextxy(400,380,"SUBMITTED TO :");
	outtextxy(70,400,"MOTASIM");
	outtextxy(400,400,"MR. SUNIL");
	outtextxy(70,420,"[17-DCS055]");
	delay(100);
	}
	return 0;

	}
	products()

	{
	setbkcolor(3);
	setcolor(4);
	settextstyle(3,0,4);
	outtextxy(170,20,"AVAILABLE PRODUCTS.");
	setcolor(4);
	settextstyle(2,0,6);
	outtextxy(20,80,"1 :");
	outtextxy(20,120,"2 :");
	outtextxy(20,160,"3 :");
	outtextxy(20,200,"4 :");
	outtextxy(20,240,"5 :");
	outtextxy(20,280,"6 :");
	outtextxy(20,320,"7 :");
	outtextxy(20,360,"8 :");
	outtextxy(20,400,"9 :");
	outtextxy(20,440,"10:");
	setcolor(10);
	settextstyle(2,0,6);
	outtextxy(50,80,"Dell Inspiron 15 5559(Z566136HIN9) Laptop.");
	outtextxy(40,95,"(Core i3 6th Gen/4GB/1TB/Windows 10)");

	outtextxy(50,120,"Dell Inspiron 15 5567(Z563506SIN9) Laptop.");
	outtextxy(40,135,"(Core i7 7th Gen/16GB/2TB/Windows 10)");
	outtextxy(50,160,"Dell Inspiron 15 5567(Z563505SIN9) Laptop.");
	outtextxy(40,175,"(Core i7 7th Gen/8GB/1TB/Windows 10)");
	outtextxy(50,200,"Dell Inspiron 15 5559(I5559-7080SLV) Laptop.");
	outtextxy(40,215,"(Core i7 6th Gen/8GB/1TB/Windows 10)");
	outtextxy(50,240,"Dell Inspiron 15 3568(Z553511UIN9) Laptop.");
	outtextxy(40,255,"(Pentium Dual Core/4GB/1TB/Ubunto)");
	outtextxy(50,280,"Dell Inspiron 15 5559(Y566513HIN9) Laptop.");
	outtextxy(40,295,"(Core i7 6th Gen/16GB/2TB/Windows 10)");
	outtextxy(50,320,"Dell Inspiron 15 3567(3567341TBiB1) Laptop.");
	outtextxy(40,335,"(Core i3 6th Gen/4GB/1TB/Windows 10)");
	outtextxy(50,360,"Dell Inspiron 15 3565(A561226SIN9) Laptop.");
	outtextxy(40,375,"(AMD Dual Core A9/6GB/1TB/Windows 10)");
	outtextxy(50,400,"Dell Inspiron 15 5567(Z563503SIN9) Laptop.");
	outtextxy(40,415,"(Core i5 7th Gen/8GB/1TB/Windows 10)");
	outtextxy(50,440,"Dell Inspiron 14 3467(A561202SIN9) Laptop.");
	outtextxy(40,455,"(Core i3 6th Gen/4GB/1TB/Windows 10)");
	exitbox0();
	setcolor(4);
	settextstyle(11,0,3);

	outtextxy(500,470,"MADE BY : MOTASIM");
	return 0;
	}
	detailbox()
	{
	int i;
	cleardevice();
	setbkcolor(7);
	setcolor(12);
	settextstyle(3,0,7);
	outtextxy(220,30,"DETAILS");
	setcolor(4);
	settextstyle(11,0,3);
	outtextxy(500,470,"MADE BY : MOTASIM");
	setcolor(15);
	for (i=0;i<=639;i++)
	{
	if(i<1||i==159||i==320||i==478||i>638)
	{
	line(i,150,i,400);
	}

	if(i==150||i==400||i==190)
	{
	line(0,i,639,i);
	}
	}
	setcolor(12);
	settextstyle(3,0,3);
	outtextxy(7,155,"PERFORMANCE");
	outtextxy(200,155,"DESIGN");
	outtextxy(350,155,"STORAGE");
	outtextxy(510,155,"BATTERY");
	return 0;
	}
	details()
	{
	int n;
	cin>>n;
	obj.detailbox();
	obj.exitbox();
	obj.buy();
	obj.back();

	switch(n)
	{
	case 1:
	obj.detail_1();
	break;
	case 2:
	obj.detail_2();
	break;
	case 3:
	obj.detail_3();
	break;
	case 4:
	obj.detail_4();
	break;
	case 5:
	obj.detail_5();
	break;
	case 6:
	obj.detail_6();
	break;
	case 7:

	obj.detail_7();
	break;
	case 8:
	obj.detail_8();
	break;
	case 9:
	obj.detail_9();
	break;
	case 10:
	obj.detail_10();
	break;
	case 0:
	exit(0);
	default:
	cleardevice();
	obj.products();
	sound(1000);
	delay(200);
	nosound();
	setcolor(6);
	rectangle(500,80,580,190);

	setcolor(4);
	settextstyle(11,0,8);
	outtextxy(510,90,"*PLEASE");
	outtextxy(520,110,"ENTER");
	outtextxy(520,130,"THE");
	outtextxy(520,150,"CORRECT");
	outtextxy(520,170,"NUMBER");
	obj.details();
	break;
	}
	return 0;
	}
	detail_1()
	{
	//heading
	setcolor(3);
	settextstyle(1,0,3);
	outtextxy(10,115,"*Dell Inspiron 15 5559(Z566136HIN9) Laptop.");
	setcolor(1);
	settextstyle(2,0,5);
	//performance

	outtextxy(10,220,"~ Core i3 6th Gen");
	outtextxy(10,240,"~ 2.3 Ghz");
	outtextxy(10,260,"~ 4 GB DDR3 RAM");
	//design
	outtextxy(165,220,"~ 15.6 inches");
	outtextxy(180,235,"(39.62cm)");
	outtextxy(165,250,"~ 1366*768 pixels");
	outtextxy(165,270,"~ 2.3 Kg");
	outtextxy(165,290,"~ 32.7 mm thick");
	//storage
	outtextxy(325,220,"~ 1 TB HDD");
	outtextxy(325,240,"~ SATA");
	outtextxy(325,260,"~ 5400 RPM");
	//battery
	outtextxy(484,220,"~ Li-Ion");
	outtextxy(484,240,"~ 4 Cell");
	char n;
	cin>>n;
	switch(n)
	{
	case 'e':

	exit(0);
	case 'g':
	obj.buypage();
	obj.buypage_1();
	break;
	case 'b':
	cleardevice();
	obj.products();
	obj.details();
	break;
	}
	return 0;

	}
	detail_2()
	{
	//heading
	setcolor(3);
	settextstyle(1,0,3);
	outtextxy(10,115,"*Dell Inspiron 15 5567(Z563506SIN9) Laptop.");
	setcolor(1);
	settextstyle(2,0,5);

	//performance
	outtextxy(10,220,"~ Core i7 7th Gen");
	outtextxy(10,240,"~ 2.7 Ghz");
	outtextxy(10,260,"~ 16 GB DDR4 RAM");
	outtextxy(10,280,"~ 4 GB Graphics");
	//design
	outtextxy(165,220,"~ 15.6 inches");
	outtextxy(180,235,"(39.62cm)");
	outtextxy(165,250,"~ 1920*1080 pixels");
	outtextxy(165,270,"~ 2.3 Kg");
	outtextxy(165,290,"~ 23.3 mm thick");
	//storage
	outtextxy(325,220,"~ 2 TB HDD");
	outtextxy(325,240,"~ SATA");
	outtextxy(325,260,"~ 5400 RPM");
	//battery
	outtextxy(484,220,"~ Li-Ion");
	outtextxy(484,240,"~ 3 Cell");
	char n;
	cin>>n;
	switch(n)

	{
	case 'e':
	exit(0);
	case 'g':
	obj.buypage();
	obj.buypage_2();
	break;
	case 'b':
	cleardevice();
	obj.products();
	obj.details();

	}
	return 0;

	}
	detail_3()
	{
	//heading
	setcolor(3);
	settextstyle(1,0,3);
	outtextxy(10,115,"*Dell Inspiron 15 5567(Z563505SIN9) Laptop.");
	setcolor(1);

	settextstyle(2,0,5);
	//performance
	outtextxy(10,220,"~ Core i7 7th Gen");
	outtextxy(10,240,"~ 2.7 Ghz");
	outtextxy(10,260,"~ 8 GB DDR4 RAM");
	outtextxy(10,280,"~ 4 GB Graphics");
	//design
	outtextxy(165,220,"~ 15.6 inches");
	outtextxy(165,235,"(39.62cm)");
	outtextxy(165,250,"~ 1920*1080 pixels");
	outtextxy(165,270,"~ 2.6 Kg");
	outtextxy(165,290,"~ 23.3 mm thick");
	//storage
	outtextxy(325,220,"~ 1 TB HDD");
	outtextxy(325,240,"~ 64 GB SSD");
	outtextxy(325,260,"~ SATA");
	outtextxy(325,280,"~ 5400 RPM");
	//battery
	outtextxy(484,220,"~ Li-Ion");
	outtextxy(484,240,"~ 3 Cell");
	outtextxy(484,260,"~ 6 Hrs");

	char n;
	cin>>n;
	switch(n)
	{
	case 'e':
	exit(0);
	case 'g':
	obj.buypage();
	obj.buypage_3();
	break;
	case 'b':
	cleardevice();
	obj.products();
	obj.details();

	}
	return 0;

	}
	detail_4()
	{
	//heading

	setcolor(3);
	settextstyle(1,0,3);
	outtextxy(10,115,"*Dell Inspiron 15 5559(I5559-7080SLV) Laptop.");
	setcolor(1);
	settextstyle(2,0,5);
	//performance
	outtextxy(10,220,"~ Core i7 6th Gen");
	outtextxy(10,240,"~ 2.5 Ghz");
	outtextxy(10,260,"~ 8 GB DDR3 RAM");
	outtextxy(10,280,"~ 4 GB DDR4 RAM");
	//design
	outtextxy(165,220,"~ 15.6 inches");
	outtextxy(180,235,"(39.62cm)");
	outtextxy(165,250,"~ 1920*1080 pixels");
	outtextxy(165,270,"~ 2.3 Kg");
	outtextxy(165,290,"~ 23.7 mm thick");
	//storage
	outtextxy(325,220,"~ 1 TB HDD");
	outtextxy(325,240,"~ SATA");
	outtextxy(325,260,"~ 5400 RPM");
	//battery

	outtextxy(484,220,"~ Li-Ion");
	outtextxy(484,240,"~ 4 Cell");
	outtextxy(484,260,"~ 7 Hrs");
	char n;
	cin>>n;
	switch(n)
	{
	case 'e':
	exit(0);
	case 'g':
	obj.buypage();
	obj.buypage_4();
	break;
	case 'b':
	cleardevice();
	obj.products();
	obj.details();

	}
	return 0;

	}
	detail_5()

	{
	//heading
	setcolor(3);
	settextstyle(1,0,3);
	outtextxy(10,115,"*Dell Inspiron 15 3568(Z553511UIN9) Laptop.");
	setcolor(1);
	settextstyle(2,0,5);
	//performance
	outtextxy(10,220,"~ Pentium Dual-Core");
	outtextxy(10,240,"~ 2.1 Ghz");
	outtextxy(10,260,"~ 4 GB DDR4 RAM");
	//design
	outtextxy(165,220,"~ 15.6 inches");
	outtextxy(180,235,"(39.62cm)");
	outtextxy(165,250,"~ 1366*768 pixels");
	outtextxy(165,270,"~ 2.2 Kg");
	outtextxy(165,290,"~ 23.6 mm thick");
	//storage
	outtextxy(325,220,"~ 1 TB HDD");
	outtextxy(325,240,"~ SATA");
	outtextxy(325,260,"~ 5400 RPM");

	//battery
	outtextxy(484,220,"~ Li-Ion");
	outtextxy(484,240,"~ 4 Cell");
	char n;
	cin>>n;
	switch(n)
	{
	case 'e':
	exit(0);
	case 'g':
	obj.buypage();
	obj.buypage_5();
	break;
	case 'b':
	cleardevice();
	obj.products();
	obj.details();

	}
	return 0;

	}
	detail_6()

	{
	//heading
	setcolor(3);
	settextstyle(1,0,3);
	outtextxy(10,115,"*Dell Inspiron 15 5559(Y566513HIN9) Laptop.");
	setcolor(1);
	settextstyle(2,0,5);
	//performance
	outtextxy(10,220,"~ Core i7 6th Gen");
	outtextxy(10,240,"~ 2.5 Ghz");
	outtextxy(10,260,"~ 16 GB DDR3 RAM");
	outtextxy(10,280,"~ 4 GB Graphics");
	//design
	outtextxy(165,220,"~ 15.6 inches");
	outtextxy(180,235,"(39.62cm)");
	outtextxy(165,250,"~ 1920*1080 pixels");
	outtextxy(165,270,"~ 2.3 Kg");
	outtextxy(165,290,"~ 23.7 mm thick");
	//storage
	outtextxy(325,220,"~ 2 TB HDD");
	outtextxy(325,240,"~ SATA");

	outtextxy(325,260,"~ 5400 RPM");
	//battery
	outtextxy(484,220,"~ Li-Ion");
	outtextxy(484,240,"~ 4 Cell");
	char n;
	cin>>n;
	switch(n)
	{
	case 'e':
	exit(0);
	case 'g':
	obj.buypage();
	obj.buypage_6();
	break;
	case 'b':
	cleardevice();
	obj.products();
	obj.details();

	}
	return 0;

	}

	detail_7()
	{
	//heading
	setcolor(3);
	settextstyle(1,0,3);
	outtextxy(10,115,"*Dell Inspiron 15 3567(3567341TBiB1) Laptop.");
	setcolor(1);
	settextstyle(2,0,5);
	//performance
	outtextxy(10,220,"~ Core i3 6th Gen");
	outtextxy(10,240,"~ 2.0 Ghz");
	outtextxy(10,260,"~ 4 GB DDR3 RAM");
	//design
	outtextxy(165,220,"~ 15.6 inches");
	outtextxy(180,235,"(39.62cm)");
	outtextxy(165,250,"~ 1366*768 pixels");
	outtextxy(165,270,"~ 2.2 Kg");
	outtextxy(165,290,"~ 23.6 mm thick");
	//storage
	outtextxy(325,220,"~ 1 TB HDD");
	outtextxy(325,240,"~ SATA");

	outtextxy(325,260,"~ 5400 RPM");
	//battery
	outtextxy(484,220,"~ Li-Ion");
	outtextxy(484,240,"~ 4 Cell");
	outtextxy(484,260,"~ 8 Hrs");
	char n;
	cin>>n;
	switch(n)
	{
	case 'e':
	exit(0);
	case 'g':
	obj.buypage();
	obj.buypage_7();
	break;
	case 'b':
	cleardevice();
	obj.products();
	obj.details();

	}
	return 0;

	}
	detail_8()
	{
	//heading
	setcolor(3);
	settextstyle(1,0,3);
	outtextxy(10,115,"*Dell Inspiron 15 5559(Z566136HIN9) Laptop.");
	setcolor(1);
	settextstyle(2,0,5);
	//performance
	outtextxy(10,220,"~ AMD Dual-Core A9");
	outtextxy(10,240,"~ 2.4 Ghz");
	outtextxy(10,260,"~ 6 GB DDR4 RAM");
	//design
	outtextxy(165,220,"~ 15.6 inches");
	outtextxy(180,235,"(39.62cm)");
	outtextxy(165,250,"~ 1366*768 pixels");
	outtextxy(165,270,"~ 2.3 Kg");
	outtextxy(165,290,"~ 24 mm thick");
	//storage
	outtextxy(325,220,"~ 1 TB HDD");

	outtextxy(325,240,"~ SATA");
	outtextxy(325,260,"~ 5400 RPM");
	//battery
	outtextxy(484,220,"~ Li-Ion");
	outtextxy(484,240,"~ 4 Cell");
	outtextxy(484,260,"~ 5 Hrs");
	char n;
	cin>>n;
	switch(n)
	{
	case 'e':
	exit(0);
	case 'g':
	obj.buypage();
	obj.buypage_8();
	break;
	case 'b':
	cleardevice();
	obj.products();
	obj.details();

	}

	return 0;

	}
	detail_9()
	{
	//heading
	setcolor(3);
	settextstyle(1,0,3);
	outtextxy(10,115,"*Dell Inspiron 15 5567(Z563503SIN9) Laptop.");
	setcolor(1);
	settextstyle(2,0,5);
	//performance
	outtextxy(10,220,"~ Core i5 7th Gen");
	outtextxy(10,240,"~ 2.5 Ghz");
	outtextxy(10,260,"~ 8 GB DDR4 RAM");
	outtextxy(10,280,"~ 4 GB Graphics");
	//design
	outtextxy(165,220,"~ 15.6 inches");
	outtextxy(180,235,"(39.62cm)");
	outtextxy(165,250,"~ 1920*1080 pixels");
	outtextxy(165,270,"~ 2.3 Kg");
	outtextxy(165,290,"~ 23.3 mm thick");

	//storage
	outtextxy(325,220,"~ 1 TB HDD");
	outtextxy(325,240,"~ SATA");
	outtextxy(325,260,"~ 5400 RPM");
	//battery
	outtextxy(484,220,"~ Li-Ion");
	outtextxy(484,240,"~ 3 Cell");
	char n;
	cin>>n;
	switch(n)
	{
	case 'e':
	exit(0);
	case 'g':
	obj.buypage();
	obj.buypage_9();
	break;
	case 'b':
	cleardevice();
	obj.products();
	obj.details();

	}
	return 0;

	}
	detail_10()
	{
	//heading
	setcolor(3);
	settextstyle(1,0,3);
	outtextxy(10,115,"*Dell Inspiron 14 3467(A561202SIN9) Laptop.");
	setcolor(1);
	settextstyle(2,0,5);
	//performance
	outtextxy(10,220,"~ Core i3 6th Gen");
	outtextxy(10,240,"~ 2.0 Ghz");
	outtextxy(10,260,"~ 4 GB DDR4 RAM");
	//design
	outtextxy(165,220,"~ 14.0 inches");
	outtextxy(180,235,"(35.56cm)");
	outtextxy(165,250,"~ 1366*768 pixels");
	outtextxy(165,270,"~ 1.9 Kg");
	outtextxy(165,290,"~ 23.3 mm thick");

	//storage
	outtextxy(325,220,"~ 1 TB HDD");
	outtextxy(325,240,"~ SATA");
	outtextxy(325,260,"~ 5400 RPM");
	//battery
	outtextxy(484,220,"~ Li-Ion");
	outtextxy(484,240,"~ 4 Cell");
	outtextxy(484,260,"~ 5 Hrs");
	char n;
	cin>>n;
	switch(n)
	{
	case 'e':
	exit(0);
	case 'g':
	obj.buypage();
	obj.buypage_10();
	break;
	case 'b':
	cleardevice();
	obj.products();

	obj.details();
	break;
	}
	return 0;

	}
	exitbox()
	{
	setcolor(6);
	rectangle(500,420,620,450);
	setcolor(4);
	settextstyle(2,0,4);
	outtextxy(510,430,"Enter 'E' For EXIT");
	return 0;
	}
	exitbox0()
	{
	setcolor(6);
	rectangle(500,420,620,450);
	setcolor(4);
	settextstyle(2,0,4);
	outtextxy(510,430,"Enter '0' For EXIT");

	return 0;
	}
	buy()
	{
	setcolor(6);
	rectangle(375,420,495,450);
	setcolor(4);
	settextstyle(2,0,4);
	outtextxy(385,430,"Enter 'G' For BUY");
	return 0;
	}
	back()
	{
	setcolor(6);
	rectangle(250,420,370,450);
	setcolor(4);
	settextstyle(2,0,4);
	outtextxy(260,430,"Enter 'B' For BACK");
	return 0;
	}
	buypageback()

	{
	setcolor(6);
	rectangle(250,400,370,430);
	setcolor(4);
	settextstyle(2,0,4);
	outtextxy(260,410,"Enter 'B' For BACK");
	return 0;
	}
	buypageconfirm()
	{
	setcolor(6);
	rectangle(125,400,245,430);
	setcolor(4);
	settextstyle(2,0,4);
	outtextxy(130,410,"Enter 'C' To Confirm");
	return 0;
	}
	buypage()
	{
	cleardevice();
	int i,j;

	setbkcolor(14);
	setcolor(9);
	for(i=0;i<=639;i++)
	{
	if(i==60||i==580)
	{
	line (i,0,i,479);
	}
	}
	for(j=0;j<=479;j++)
	{
	if(j==30||j==450)
	{
	line(0,j,639,j);
	}
	}
	setcolor(12);
	rectangle(70,40,570,350);
	setcolor(4);
	settextstyle(1,0,3);
	outtextxy(80,50,"ITEM NAME");

	outtextxy(80,80,"MODEL NO");
	outtextxy(80,110,"PRICE");
	for (i=0;i<=639;i++)
	{
	for (j=0;j<=439;j++)
	{
	if (i==240&&(j==50||j==80||j==110))
	{
	outtextxy(i,j,":");
	}
	}
	}

	obj.dell_strip();
	obj.description();
	setcolor(4);
	settextstyle(11,0,3);
	outtextxy(65,440,"E-mail : makkimotasim@gmail.com");
	setcolor(4);
	settextstyle(11,0,3);
	outtextxy(500,470,"MADE BY : MOTASIM");

	return 0;
	}
	seal()
	{
	sound(50);
	delay(100);
	nosound();
	setcolor(1);
	circle(500,370,40);
	circle(500,370,39);
	circle(500,370,38);
	settextstyle(1,0,3);
	outtextxy(475,355,"DELL");
	settextstyle(11,0,5);
	outtextxy(475,415,"MOTASIM");
	outtextxy(460,425,"@9105658388");
	return 0;
	}
	confirmedbox()
	{
	setcolor(3);

	rectangle(415,370,580,425);
	rectangle(416,371,579,424);
	rectangle(417,372,578,423);
	setcolor(4);
	settextstyle(3,0,4);
	outtextxy(420,375,"CONFIRMED");
	return 0;
	}
	buypage_1()
	{
	setcolor(5);
	settextstyle(1,0,3);
	outtextxy(260,50,"Dell Inspiron");
	outtextxy(260,80,"DI 15 5559");
	outtextxy(260,110,"Rs. 30,771");
	description_1();
	buypageback();
	buypageconfirm();
	char n;
	cin>>n;
	switch(n)

	{
	case 'b':
	cleardevice();
	obj.products();
	obj.details();
	break;
	case 'c':
	confirmedbox();
	seal();
	break;
	}
	return 0;
	}
	buypage_2()
	{
	setcolor(5);
	settextstyle(1,0,3);
	outtextxy(260,50,"Dell Inspiron");
	outtextxy(260,80,"DI 15 5567");
	outtextxy(260,110,"Rs. 91,000");
	description_2();

	buypageback();
	buypageconfirm();
	char n;
	cin>>n;
	switch(n)
	{
	case 'b':
	cleardevice();
	obj.products();
	obj.details();
	break;
	case 'c':
	confirmedbox();
	seal();
	break;
	}
	return 0;
	}
	buypage_3()
	{
	setcolor(5);

	settextstyle(1,0,3);
	outtextxy(260,50,"Dell Inspiron");
	outtextxy(260,80,"DI 15 5567");
	outtextxy(260,110,"Rs. 64,999");
	description_3();
	buypageback();
	buypageconfirm();
	char n;
	cin>>n;
	switch(n)
	{
	case 'b':
	cleardevice();
	obj.products();
	obj.details();
	break;
	case 'c':
	confirmedbox();
	seal();
	break;
	}

	return 0;
	}
	buypage_4()
	{
	setcolor(5);
	settextstyle(1,0,3);
	outtextxy(260,50,"Dell Inspiron");
	outtextxy(260,80,"DI 15 5559");
	outtextxy(260,110,"Rs. 62,000");
	description_4();
	buypageback();
	buypageconfirm();
	char n;
	cin>>n;
	switch(n)
	{
	case 'b':
	cleardevice();
	obj.products();
	obj.details();
	break;

	case 'c':
	confirmedbox();
	seal();
	break;
	}
	return 0;
	}
	buypage_5()
	{
	setcolor(5);
	settextstyle(1,0,3);
	outtextxy(260,50,"Dell Inspiron");
	outtextxy(260,80,"DI 15 3568");
	outtextxy(260,110,"Rs. 20,947");
	description_5();
	buypageback();
	buypageconfirm();
	char n;
	cin>>n;
	switch(n)
	{

	case 'b':
	cleardevice();
	obj.products();
	obj.details();
	break;
	case 'c':
	confirmedbox();
	seal();
	break;
	}
	return 0;
	}
	buypage_6()
	{
	setcolor(5);
	settextstyle(1,0,3);
	outtextxy(260,50,"Dell Inspiron");
	outtextxy(260,80,"DI 15 5559");
	outtextxy(260,110,"Rs. 77,100");
	description_6();
	buypageback();

	buypageconfirm();
	char n;
	cin>>n;
	switch(n)
	{
	case 'b':
	cleardevice();
	obj.products();
	obj.details();
	break;
	case 'c':
	confirmedbox();
	seal();
	break;
	}
	return 0;
	}
	buypage_7()
	{
	setcolor(5);
	settextstyle(1,0,3);

	outtextxy(260,50,"Dell Inspiron");
	outtextxy(260,80,"DI 15 3567");
	outtextxy(260,110,"Rs. 26,991");
	description_7();
	buypageback();
	buypageconfirm();
	char n;
	cin>>n;
	switch(n)
	{
	case 'b':
	cleardevice();
	obj.products();
	obj.details();
	break;
	case 'c':
	confirmedbox();
	seal();
	break;
	}
	return 0;

	}
	buypage_8()
	{
	setcolor(5);
	settextstyle(1,0,3);
	outtextxy(260,50,"Dell Inspiron");
	outtextxy(260,80,"DI 15 3565");
	outtextxy(260,110,"Rs. 31,990");
	description_8();
	buypageback();
	buypageconfirm();
	char n;
	cin>>n;
	switch(n)
	{
	case 'b':
	cleardevice();
	obj.products();
	obj.details();
	break;
	case 'c':

	confirmedbox();
	seal();
	break;
	}
	return 0;
	}
	buypage_9()
	{
	setcolor(5);
	settextstyle(1,0,3);
	outtextxy(260,50,"Dell Inspiron");
	outtextxy(260,80,"DI 15 5567");
	outtextxy(260,110,"Rs. 62,990");
	description_9();
	buypageback();
	buypageconfirm();
	char n;
	cin>>n;
	switch(n)
	{
	case 'b':

	cleardevice();
	obj.products();
	obj.details();
	break;
	case 'c':
	confirmedbox();
	seal();
	break;
	}
	return 0;
	}
	buypage_10()
	{
	setcolor(5);
	settextstyle(1,0,3);
	outtextxy(260,50,"Dell Inspiron");
	outtextxy(260,80,"DI 14 3467");
	outtextxy(260,110,"Rs. 29,653");
	description_10();
	buypageback();
	buypageconfirm();

	char n;
	cin>>n;
	switch(n)
	{
	case 'b':
	cleardevice();
	obj.products();
	obj.details();
	break;
	case 'c':
	confirmedbox();
	seal();
	break;
	}
	return 0;
	}
	description()
	{
	setcolor(4);
	settextstyle(1,0,1);
	outtextxy(80,170,"DESCRIPTION :");

	return 0;
	}

	description_1()
	{
	setcolor(6);
	settextstyle(11,0,5);
	outtextxy(80,210,"The Dell Inspiron 15 5567 (Z563506SIN9) Laptop is one");
	outtextxy(80,225,"of the better featured laptop from a better placed brand");
	outtextxy(80,240,"This said, the outstanding configuration, along with a");
	outtextxy(80,255,"massive RAM, and especially the dedicated graphicsprocessor");
	outtextxy(80,270,"allows you to run high-end softwares and play high-endgames.");
	outtextxy(80,285,"So, if you a looking for a laptop that works like a race");
	outtextxy(80,300,"horse,you can choose this one with closed eyes.");
	return 0;
	}
	description_2()
	{
	setcolor(6);
	settextstyle(11,0,5);

	outtextxy(80,210,"As per the Dell Inspiron 15 5559 (Z566136HIN9) Laptop");
	outtextxy(80,225,"review,the user friendly Windows 10 OS along with a");
	outtextxy(80,240,"decent configuration and good storage space makes it");
	outtextxy(80,255,"a nice choice to go with. However,the absence of a");
	outtextxy(80,270,"dedicated graphics card in this price range limits the");
	outtextxy(80,285,"gaming freedom. The trendy design and colour grabs the");
	outtextxy(80,300,"attention.The Dell Inspiron 15 5559 (Z566136HIN9) Laptop");
	outtextxy(80,315,"price in India is a bit high for this device.");
	return 0;
	}
	description_3()
	{
	setcolor(6);
	settextstyle(11,0,5);
	outtextxy(80,210,"Dell Inspiron 15 5567 (Z563503SIN9) laptop has a ");
	outtextxy(80,225,"display for your daily needs. This laptop is powered by");
	outtextxy(80,240,"processor,coupled with 8 GB GB of RAM and has 1 TBHDD");
	outtextxy(80,255,"storage at this price point. As far as the graphics card");
	outtextxy(80,270,"is concerned this notebook has graphics card to manage the");
	outtextxy(80,285,"graphical functions. To keep it alive, it has a battery");
	outtextxy(80,300,"and weighs.");
	return 0;
	}
	description_4()
	{
	setcolor(6);
	settextstyle(11,0,5);
	outtextxy(80,210,"The Dell Vostro 15 3568 (Z553511UIN9) Laptop");
	outtextxy(80,225,"is meant for those of you who wants a simple laptop");
	outtextxy(80,240,"with limited features without worrying about budget.");
	outtextxy(80,255,"The performance of the laptop is good and it also");
	outtextxy(80,270,"comes with a large hard disk drive to store all your");
	outtextxy(80,285,"important stuff. The presence of an user friendly OS");
	outtextxy(80,300,"would have made it a better option to go for though.");
	outtextxy(80,315,"Nonetheless, considering the budget, you can definitely");
	outtextxy(80,330,"check this one out.");
	return 0;
	}
	description_5()
	{
	setcolor(6);

	settextstyle(11,0,5);
	outtextxy(80,210,"Speaking about Dell Inspiron 15 5559 (Y566513HIN9)Laptop,");
	outtextxy(80,225,"the brand has always been highly rated owing to the quality");
	outtextxy(80,240,"of laptop it produces. Same goes with this laptop as well.");
	outtextxy(80,255,"The powerful specs, great configuration and good display");
	outtextxy(80,270,"makes it an obvious option if you are looking for a high-end");
	outtextxy(80,285,"laptop for your business purpose.");
	return 0;
	}
	description_6()
	{
	setcolor(6);
	settextstyle(11,0,5);
	outtextxy(80,210,"The Dell Inspiron 15 5559 (Y566513HIN9) is one of thebest");
	outtextxy(80,225,"performerlaptops in a mid-range budget. The performanceand");
	outtextxy(80,240,"the battery backup are excellent. The powerful combination");
	outtextxy(80,255,"of a strong processor along with a lot of RAM outputs great");
	outtextxy(80,270,"performance.You can create a huge library of files in the");
	outtextxy(80,285,"ample storage.Overall,the laptop is worth buying,you can go");
	outtextxy(80,300,"for it.");

	return 0;
	}
	description_7()
	{
	setcolor(6);
	settextstyle(11,0,5);
	outtextxy(80,210,"The Dell Inspiron 15 3565 (A561226SIN9) Laptop is withuser");
	outtextxy(80,225,"friendly Windows 10 OS along with a decent configurationand");
	outtextxy(80,240,"goodstorage space. Availability of DVD drive and long life");
	outtextxy(80,255,"battery add the extra package with the device. Go for it if");
	outtextxy(80,270,"you overlookno dedicated graphics card.");

	return 0;
	}
	description_8()
	{
	setcolor(6);
	settextstyle(11,0,5);
	outtextxy(80,210,"Dell Inspiron 15 3565 (A561226SIN9) laptop has a display");
	outtextxy(80,225,"for your daily needs.This laptop is powered by processor,");
	outtextxy(80,240,"coupled with 8 GB GB of RAM and has 1 TB HDD storage atthis");
	outtextxy(80,255,"price point.As far as the graphics card is concerned this");
	outtextxy(80,270,"notebook has graphics card to manage the graphicalfunctions.");
	outtextxy(80,285,"To keep it alive,it has a battery and weighs.");

	return 0;
	}
	description_9()
	{
	setcolor(6);
	settextstyle(11,0,5);
	outtextxy(80,210,"The Dell Inspiron 15 5567 (Z563508SIN9) laptop is a nice");
	outtextxy(80,225,"choice for daily usage and the performance of the system");
	outtextxy(80,240,"is smooth. The user can create ample number of files in the");
	outtextxy(80,255,"huge storage available and battery backup is also good.");
	outtextxy(80,270,"However, the price tag clearly falls on the higher side as");
	outtextxy(80,285,"one can easily get a laptop with same features at a");
	outtextxy(80,300,"comparatively price and that too in a great margin.");

	return 0;
	}
	description_10()
	{
	setcolor(6);
	settextstyle(11,0,5);
	outtextxy(80,210,"The Dell Inspiron 14 3467 (A561201UIN9) laptop comes witha");
	outtextxy(80,225,"lightweight body, it can be carried easily. The strong");
	outtextxy(80,240,"processor and an ample storage make the laptop one of the");
	outtextxy(80,255,"best in its price range. The performance and the battery");
	outtextxy(80,270,"backup are excellent for daily usage. However,one mustkeep");
	outtextxy(80,285,"in mind that the laptop does not feature Windows OS.");

	return 0;
	}
};

Compshop obj;

int main()
{
	int gm=DETECT,gd=0;
	initgraph(&gm,&gd,"C:\YOGISOFT\TC\BGI");
	obj.front();
	getch();
	cleardevice();

	obj.dell_strip();
	obj.dell_logo();
	obj.twinkle();
	obj.entry();
	getch();
	cleardevice();
	obj.products();
	obj.details();
	getch();
	closegraph();

return 0;
}