#include <stdio.h>
#include "MOTION.h" /* Included the header file for all the  function prototypes */
#include <math.h>

int main(void)
{
    /*variable declarations*/
    int choice;
    int linchoice, prochoice;
    int u1, t1, v1, a1,  distance1, velocity1;  /*Variables for linear motion*/
    int u2, t2, a2, up4, angp4, time_hmax;
    int v3, u3, t3, acceleration1;/*Variables for linear motion*/
    int v4, u4, a4, time1, maxheight, up5, angp5; /* Variables for projectile motion*/
    int v5, a5, t5, initialvelocity1;/* variables for linear motion*/
    int up1, Rmax, up2, angp2, range, up3, angp3, total_time;/* Variables for projectile motion*/
    /* variable declarations ...*/

    
    do
    {
        printf("THIS PROGRAM COMPUTES FOR questions on motion \n\n");
        printf(" it is broken down into two segment\n\n (1).to solve questions on linear motion");
        printf("\n(2).to solve questions on projectile motion \n\n");
        printf("enter a number ,number must be either 1 or 2 to specify your choice:\n\n");
        scanf("%d", &choice);
    } while (choice != 1 && choice != 2);

    if (choice == 1)
    {
        printf("LINEAR MOTION\n");
        do
        {
            printf("enter one of the preceeding number to indicate your computation \n\n [1]DISTANCE TAKEN \n\n [2]VELOCITY \n\n [3]ACCELERATION \n\n[4]TIME TAKEN \n\n[5]INITIAL VELOCITY\n\n");
            scanf("%d", &linchoice);
        } while (linchoice != 1 && linchoice != 2 && linchoice != 3 && linchoice != 4 && linchoice != 5);

            if (linchoice == 1)
            {
                printf("DISTANCE TAKEN BY A BODY IN MOTION\n");
                printf("\npls enter the value of the initial velocity(u) of the body/particle in motion!!!\n");
                scanf("%d", &u1);
                printf("\n pls enter the value of the time taken(t) in the course of motion!!!\n");
                scanf("%d", &t1);
                printf("\npls enter the value of the acceleration(a) of the body or particle in the course!!!\n");
                scanf("%d", &a1);
                distance1 = distance(u1, t1, a1);
                printf("the distance covered by the body in motion is %d, \n", distance1);
            } else if (linchoice == 2) {
                printf("THE VELOCITY OF A BODY IN MOTION\n\n");
                printf("\n pls enter the value of initial velocity(u)!!!!\n");
                scanf("%d", &u2);
                printf("\n pls enter the value of the acceleration of the body!!!\n\n");
                scanf("%d", &a2);
                printf("pls enter the value of the total time(t) taken for motion!!!\n\n ");
                scanf("%d", &t2);
                velocity1 = velocity(u2, t2, a2);
                printf("the velocity of the body in motion is %dm/s\n\n", velocity1);
            } else if (linchoice == 3) {
                printf(" THE ACCELERATION OF A BODY IN MOTION\n\n");
                printf("\n pls enter the value of velocity/final velocity(v) taken by the body in motion!!!1\n\n");
                scanf("%d", &v3);
                printf("\n please enter the value of the initial velocity (u) of the body in motion!!!\n\n");
                scanf("%d", &u3 );
                printf("\n pls enter the value of the total time taken(t) for the body in the course of motion!!!\n\n");
                scanf("%d", &t3);
                acceleration1 = acceleration(v3, u3, t3);
                printf("the acceleration of the body in motion is  %dms-2\n\n", acceleration1);
            } else if (linchoice == 4)
            {
                printf("THE TIME TAKEN BY A BODY IN A PHASE OF MOTION\n\n");
                printf("\n pls enter the value of velocity/final velocity(v)!!!\n\n");
                scanf("%d", &v4);
                printf("\n please enter the value of the initial velocity (u) of the body in motion!!!\n\n");
                scanf("%d", &u4 );
                printf("\n pls enter the value of the acceleration of the body!!!\n\n");
                scanf("%d", &a4);
                time1 = time(v4, u4, a4);
                printf("the timelapse in the motion is %dseconds\n\n", time1);
            } else if (linchoice == 5)
            {
                printf("THE INITIAL VELOCITY OF THE BODY IN MOTION\n\n");
                printf("\n pls enter the value of velocity/final velocity(v)!!!\n\n");
                scanf("%d", &v5);
                printf("\n pls enter the value of the acceleration of the body!!!\n\n");
                scanf("%d", &a5);
                printf("\n pls enter the value of the total time taken(t) for the body in the course of motion!!!\n\n");
                scanf("%d", &t5);
                initialvelocity1 = initvelocity(v5, a5, t5);
                printf(" the value of the initial velocity of the body is %d m/s\n\n", initialvelocity1);
            }

    } else if (choice == 2)
    {
        printf("PROJECTILE MOTION\n");
        do
        {
            printf("enter one of the preceding numbers to indicate your choice of computation\n\n [1]MAXIMUM HORIZONTAL RANGE \n\n [2]HORIZONTAL RANGE \n\n [3]TOTAL TIME OF FLIGHT \n\n[4]TIME TAKEB TO REACH MAXIMUM HEIGHT\n\n[5]THE MAXIMUM HEIGHT ATTAINED DURING PROJECTION\n\n\n\n");
            scanf("%d", &prochoice);
        }while (prochoice != 1 && prochoice != 2 && prochoice != 3 && prochoice != 4 && prochoice != 5);

        if (prochoice == 1)
        {
            printf("THE MAXIMUM HORIZONTAL RANGE OF THE PROJECTED BODY/PARTICLE\n PLEASE NOTE THAT acceleration due to gravity (g) is taken as 10 ms-2!!!!\n\n");
            printf("\n please enter the value of the initial velocity (u) of the body in motion!!!\n\n");
            scanf("%d", &up1);
            Rmax = maxrange(up1);
            printf("the maximum range of the projectile is %d \n\n", Rmax);

        } else if ( prochoice == 2)
        {
            printf("THE HORIZONTAL RANGE OF THE PROJECTED BODY/PARTICLE\n PLEASE NOTE THAT acceleration due to gravity (g) is taken as 10 ms-2!!!!\n\n");
            printf("\n please enter the value of the initial velocity (u) of the body in motion!!!\n\n");
            scanf("%d", &up2);
            printf("\n please enter the value of the angle of projection (u) of the body in motion!!!\n\n");
            scanf("%d", &angp2);
            range = horizontalrange(up2, angp2);
            printf("the value of the horizontal range is %d\n\n",range);
            
        } else if (prochoice == 3)
        {
            printf("THE TOTAL TIME OF FLIGHT OF THE BODY/PARTICLE\nPLEASE NOTE THAT acceleration due to gravity (g) is taken as 10 ms-2!!!!\n\n ");
            printf("\n please enter the value of the initial velocity (u) of the body in motion!!!\n\n");
            scanf("%d", &up3);
            printf("\n please enter the value of the angle of projection (u) of the body in motion!!!\n\n");
            scanf("%d", &angp3);
            total_time = timeof_flight(up3, angp3);
            printf("the total time of flight taken is %dseconds", total_time);
        } else if (prochoice == 4)
        {
            printf("THE TIME TAKEN TO REACH MAXIMUM HEIGHT \nPLEASE NOTE THAT acceleration due to gravity (g) is taken as 10 ms-2!!!!\n\n  ");
            printf("\n please enter the value of the initial velocity (u) of the body in motion!!!\n\n");
            scanf("%d", &up4);
            printf("\n please enter the value of the angle of projection (u) of the body in motion!!!\n\n");
            scanf("%d", &angp4);
            time_hmax = timeto_reachmax(up4, angp4);
            printf("the total time taken to reach maximum height is %d",time_hmax);
        } else if (prochoice == 5)
        {
            printf("THE HEIGHT ATTAINED BY THE PROJECTILE\n PLEASE NOTE THAT acceleration due to gravity (g) is taken as 10 ms-2!!!!\n\n   ");
            printf("\n please enter the value of the initial velocity (u) of the body in motion!!!\n\n");
            scanf("%d", &up5);
            printf("\n please enter the value of the angle of projection (u) of the body in motion!!!\n\n");
            scanf("%d", &angp5);
            maxheight = height(up5, angp5);
            printf("the height attained by the body/particle in motion is %dmetres", maxheight);
        }
    }
            
            
    return (0);
}

int distance(int u, int t, int a)
{
    int resulting_distance;
    resulting_distance = u * t + (0.5 * a * t * t);
    return (resulting_distance);
}

int velocity(int u, int t, int a)
{
    int resulting_velocity;
    resulting_velocity = u + (a *t);  
    return (resulting_velocity);
}

int acceleration(int v, int u, int t)
{
    int resulting_acceleration;
    resulting_acceleration = (v - u)/t;
    return (resulting_acceleration);
}
int time(int v, int u, int a)
{
    int resulting_time;
    resulting_time = (v - u) / a;
    return (resulting_time);
}

int initvelocity(int v, int a, int t)
{
    int resulting_initial_velocity;
    resulting_initial_velocity = v - (a * t);
    return (resulting_initial_velocity);
}

int maxrange(int u)
{
    int r;
    r = (u * u) / 10;
    return (r);
}

int horizontalrange(int u, int angle) 
{
    double theta = angle * M_PI / 180.0;
    int g = 10; // Acceleration due to gravity
    int range = (int)(((float)u * (float)u * sin(2 * theta)) / g);
    return range;
}

int timeof_flight(int u, int angle) 
{
    double g = 10;
    double radian_angle = angle * M_PI / 180.0;
    double t_flight = (2.0 * u * sin(radian_angle)) / g;
    int time_integer = (int)(t_flight + 0.5));

    return (time_integer);
}

int timeto_reachmax(int u, int angle)
{
    double g = 10;
    double radian_angle = angle * M_PI / 180.0;
    double t_flight = round((u * sin(radian_angle)) / g);
    int time_integer = (int)(t_flight + 0.5);

    return (time_integer);
}


int height(int u, int angle)
{
    double angle_in_radians = angle * M_PI / 180.0;

    double h = round((u * u * sin(angle_in_radians) * sin(angle_in_radians)) / (2.0 * 10.0));

    int height_as_int = (int)h;

    return (height_as_int);
}
