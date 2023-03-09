#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int x;
	printf("Type a number between 1 and 11 to discover your race:\n");
	scanf("%i",&x);
	if(x==1){printf("You're human.\nType a number between 1 and 10 to discover your class:\n"); 
	int h;
	scanf("%i",&h);
	if(h==1)printf("You're a Human Warrior\n");
	if(h==2)printf("You're a Human Magician\n");
	if(h==3)printf("You're a Human Archer\n");
	if(h==4)printf("You're a Human Thief\n");
    if(h==5)printf("You're a Human Healer\n");
    if(h==6)printf("You're a Human Swordsman\n");
    if(h==7)printf("You're a Human Barbarian\n");
    if(h==8)printf("You're a Human Paladin\n");
    if(h==9)printf("You're a Human Warlock\n");
    if(h==10)printf("You're a Human Druida\n");
}
	else if(x==2) {printf("You're a Dwarf.\nType a number between 1 and 5 to discover your class:\n ");
	int d;
	scanf("%i",&d);
	if(d==1)printf("You're a Dwarf warrior\n");
	if(d==2)printf("You're a Dwarf magician\n");
	if(d==3)printf("You're a Dwarf archer\n");
	if(d==4)printf("You're a Dwarf thief\n");
    if(d==5)printf("You're a Dwarf healer\n");
    if(d==6)printf("You're a Dwarf swordsman\n");
    if(d==7)printf("You're a Dwarf barbarian\n");
    if(d==8)printf("You're a Dwarf paladin\n");
    if(d==9)printf("You're a Dwarf Warlock\n");
    if(d==10)printf("You're a Dwarf Druida\n");
}
    else if(x==3){printf("You're an Elf.\nType a number between 1 and 5 to discover your class:\n ");	
    int e;
	scanf("%i",&e);
	if(e==1)printf("You're an Elf warrior\n");
	if(e==2)printf("You're an Elf magician\n");
	if(e==3)printf("You're an Elf archer\n");
	if(e==4)printf("You're an Elf thief\n");
    if(e==5)printf("You're an Elf healer\n");
    if(e==6)printf("You're an Elf swordsman\n");
    if(e==7)printf("You're an Elf barbarian\n");
    if(e==8)printf("You're an Elf paladin\n");
    if(e==9)printf("You're an Elf Warlock\n");
    if(e==10)printf("You're an Elf Druida\n");
}

	else if(x==4) {printf("You're an Orc.\nType a number between 1 and 5 to discover your class:\n "); 
    int o;
	scanf("%i",&o);
	if(o==1)printf("You're an Orc warrior\n");
	if(o==2)printf("You're an Orc magician\n");
	if(o==3)printf("You're an Orc archer\n");
	if(o==4)printf("You're an Orc thief\n");
    if(o==5)printf("You're an Orc healer\n");
    if(o==6)printf("You're an Orc swordsman\n");
    if(o==7)printf("You're an Orc barbarian\n");
    if(o==8)printf("You're an Orc paladin\n");
    if(o==9)printf("You're an Orc Warlock\n");
    if(o==10)printf("You're an Orc Druida\n");
}

	else if(x==5) {printf("You're a Hobbit.\nType a number between 1 and 5 to discover your class:\n ");
	int hb;
	scanf("%i",&hb);
	if(hb==1)printf("You're a Hobbit warrior\n");
	if(hb==2)printf("You're a Hobbit magician\n");
	if(hb==3)printf("You're a Hobbit archer\n");
	if(hb==4)printf("You're a Hobbit thief\n");
    if(hb==5)printf("You're a Hobbit healer\n");
    if(hb==6)printf("You're a Hobbit swordsman\n");
    if(hb==7)printf("You're a Hobbit barbarian\n");
    if(hb==8)printf("You're a Hobbit paladin\n");
    if(hb==9)printf("You're a Hobbit Warlock\n");
    if(hb==10)printf("You're a Hobbit Druida\n");
}
    else if(x==6) {printf("You're a Ghost.\nType a number between 1 and 5 to discover your class:\n ");
	int g;
	scanf("%i",&g);
	if(g==1)printf("You're a Ghost warrior\n");
	if(g==2)printf("You're a Ghost magician\n");
	if(g==3)printf("You're a Ghost archer\n");
	if(g==4)printf("You're a Ghost thief\n");
    if(g==5)printf("You're a Ghost healer\n");
    if(g==6)printf("You're a Ghost swordsman\n");
    if(g==7)printf("You're a Ghost barbarian\n");
    if(g==8)printf("You're a Ghost paladin\n");
    if(g==9)printf("You're a Ghost Warlock\n");
    if(g==10)printf("You're a Ghost Druida\n");
}
    else if(x==7) {printf("You're a Mermaid.\nType a number between 1 and 5 to discover your class:\n ");
	int m;
	scanf("%i",&m);
	if(m==1)printf("You're a Mermaid warrior\n");
	if(m==2)printf("You're a Mermaid magician\n");
	if(m==3)printf("You're a Mermaid archer\n");
	if(m==4)printf("You're a Mermaid thief\n");
    if(m==5)printf("You're a Mermaid healer\n");
    if(m==6)printf("You're a Mermaid swordsman\n");
    if(m==7)printf("You're a Mermaid barbarian\n");
    if(m==8)printf("You're a Mermaid paladin\n");
    if(m==9)printf("You're a Mermaid Warlock\n");
    if(m==10)printf("You're a Mermaid Druida\n");
    
}
    else if(x==8) {printf("You're an Unicorn.\nType a number between 1 and 5 to discover your class:\n ");
	int u;
	scanf("%i",&u);
	if(u==1)printf("You're an Unicorn warrior\n");
	if(u==2)printf("You're an Unicorn magician\n");
	if(u==3)printf("You're an Unicorn archer\n");
	if(u==4)printf("You're an Unicorn thief\n");
    if(u==5)printf("You're an Unicorn healer\n");
    if(u==6)printf("You're an Unicorn swordsman\n");
    if(u==7)printf("You're an Unicorn barbarian\n");
    if(u==8)printf("You're an Unicorn paladin\n");
    if(u==9)printf("You're an Unicorn Warlock\n");
    if(u==10)printf("You're an Unicorn Druida\n");
    
}
    else if(x==9) {printf("You're a Lizardman.\nType a number between 1 and 5 to discover your class:\n ");
	int l;
	scanf("%i",&l);
	if(l==1)printf("You're a Lizardman warrior\n");
	if(l==2)printf("You're a Lizardman magician\n");
	if(l==3)printf("You're a Lizardman archer\n");
	if(l==4)printf("You're a Lizardman thief\n");
    if(l==5)printf("You're a Lizardman healer\n");
    if(l==6)printf("You're a Lizardman swordsman\n");
    if(l==7)printf("You're a Lizardman barbarian\n");
    if(l==8)printf("You're a Lizardman paladin\n");
    if(l==9)printf("You're a Lizardman Warlock\n");
    if(l==10)printf("You're a Lizardman Druida\n");
}
    else if(x==10) {printf("You're a birdman.\nType a number between 1 and 5 to discover your class:\n ");
	int b;
	scanf("%i",&b);
	if(b==1)printf("You're a Birdman warrior\n");
	if(b==2)printf("You're a Birdman magician\n");
	if(b==3)printf("You're a Birdman archer\n");
	if(b==4)printf("You're a Birdman thief\n");
    if(b==5)printf("You're a Birdman healer\n");
    if(b==6)printf("You're a Birdman swordsman\n");
    if(b==7)printf("You're a Birdman barbarian\n");
    if(b==8)printf("You're a Birdman paladin\n");
    if(b==9)printf("You're a Birdman Warlock\n");
    if(b==10)printf("You're a Birdman Druida\n");
}
    else if(x==11) {printf("You're a Undead.\nType a number between 1 and 5 to discover your class:\n ");
	int Ud;
	scanf("%i",&Ud);
	if(Ud==1)printf("You're a Undead warrior\n");
	if(Ud==2)printf("You're a Undead magician\n");
	if(Ud==3)printf("You're a Undead archer\n");
	if(Ud==4)printf("You're a Undead thief\n");
    if(Ud==5)printf("You're a Undead healer\n");
    if(Ud==6)printf("You're a Undead swordsman\n");
    if(Ud==7)printf("You're a Undead barbarian\n");
    if(Ud==8)printf("You're a Undead paladin\n");
    if(Ud==9)printf("You're a Undead Warlock\n");
    if(Ud==10)printf("You're a Undead Druida\n");
}
    system("pause");
	return 0;

}
