//
// Created by fulltimelink on 2020/4/16.
//
#include <stdio.h>
#include <assert.h>
#include "c2.h"


void c2121(){
    printf("Gustav Mahler\n");
    printf("Gustav\nMahler\n");
    printf("Gustav ");
    printf("Mahler\n");
}


void c2122(){
    printf("姓名\n地址\n");
}


void c2123(){
    size_t years =0;
    scanf("%zd", &years);
    assert(years > 0);
    printf("days: %zd\n", years * 365);
}


void jolly(){
    printf("For he's a jolly good follow!\n");
}
void deny(){
    printf("Which nobody can deny.\n");
}
void c2124(){
    jolly();
    jolly();
    jolly();
    deny();
}


void br(){
    printf("Brazil, Russia");
}
void ic(){
    printf("India, China");
}
void c2125(){
    br();
    printf(", ");
    ic();
    putchar('\n');
    ic();
    putchar('\n');
    br();
    putchar('\n');
}


void c2126(){
    int toes = 10;
    printf("%d\t%d\t%d\n", toes, toes*toes, toes*toes*toes);
}


void smile(){
    printf("Smile!");
}
void c2127(){
    smile();smile();smile();putchar('\n');
    smile();smile();putchar('\n');
    smile();putchar('\n');
}


void two(){
    printf("two\n");
}
void one_three(){
    puts("One");
    two();
    puts("Three");
}
void c2128(){
    puts("Starting Now:");
    one_three();
    puts("Done!");
}


void c2(){
    /*c2121();*/

    /*c2122();*/

    /*c2123();*/

    /*c2124();*/

    /*c2125();*/

    /*c2126();*/

    /*c2127();*/

    c2128();
}