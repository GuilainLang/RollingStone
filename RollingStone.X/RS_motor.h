/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef RS_MOTOR_H
#define	RS_MOTOR_H

#include <xc.h> // include processor files - each processor file is guarded.  

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

#include "RS_const.h"

    
#define K_LIN   0
#define K_ANG   0
    
    
void RS_mot_updateSpeed(int *acc_T, int *speed_T);
int RS_mot_calcSpeedLin(int accY);
int RS_mot_calcSpeedAng(int accX);
    
typedef Speed Speed;
struct Speed{
    int speedLin;
    int speedAng;
    Speed *Next;
};
    
#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* RS_MOTOR_H */