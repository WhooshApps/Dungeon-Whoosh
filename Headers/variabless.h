#ifndef VARIABLESS_H_INCLUDED
#define VARIABLESS_H_INCLUDED

struct bag
{
    int potion_static;
    char weapon_static[3][20];
};
extern int S[7],D[7],IQ[7],A[7],C[7];
extern int hitp,defp,magep,wear;
extern char *playerhand;
extern int money;
extern int expe,level;
extern int hp[7],healthy;
extern char *playertype;
extern bag playerbag;

#endif
