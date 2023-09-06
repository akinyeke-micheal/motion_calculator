#ifndef MOTION_H
#define MOTION_H


int distance(int u, int t, int a);
int velocity(int u, int t, int a);
int acceleration(int v, int u, int t);
int time(int v, int u, int a);
int initvelocity(int v, int a, int t);
int maxrange(int u);
int horizontalrange(int u, int angle);
int timeof_flight(int u, int angle);
int timeto_reachmax(int u, int angle);
int height(int u, int angle);

#endif
