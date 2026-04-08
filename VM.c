#include "VM.h"


void showRegister(Register r) {
	printf("%d\n", r.rgster);
}

void changeRegister(Register *r, int res) {
	r->rgster = res;
}

void add(Register *r, Register *op1, Register *op2) {
	r->rgster = op1->rgster + op2->rgster;
}

void show_exec(Register *reg, int op1, int op2) {
    showRegister(*reg);
}

void change_exec(Register *reg, int op1, int op2) {
    changeRegister(reg, op1);
}

void add_exec(Register *reg, int op1, int op2) {
    Register temp1 = { op1 };
    Register temp2 = { op2 };
    add(reg, &temp1, &temp2);
}
