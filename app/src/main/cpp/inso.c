//
// Created by user on 2019/3/13.
//


#include <stdio.h>
#include "inso.h"

static int gA = 1;

void setA(int i){
    gA = i;
}

int getA(){
    return gA;
}