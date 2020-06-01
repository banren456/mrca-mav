/*
FORCESNLPsolver_basic_0_20_50 : A fast customized optimization solver.

Copyright (C) 2013-2020 EMBOTECH AG [info@embotech.com]. All rights reserved.


This software is intended for simulation and testing purposes only. 
Use of this software for any commercial purpose is prohibited.

This program is distributed in the hope that it will be useful.
EMBOTECH makes NO WARRANTIES with respect to the use of the software 
without even the implied warranty of MERCHANTABILITY or FITNESS FOR A 
PARTICULAR PURPOSE. 

EMBOTECH shall not have any liability for any damage arising from the use
of the software.

This Agreement shall exclusively be governed by and interpreted in 
accordance with the laws of Switzerland, excluding its principles
of conflict of laws. The Courts of Zurich-City shall have exclusive 
jurisdiction in case of any dispute.

*/

/* Generated by FORCES PRO v3.0.1 on Monday, June 1, 2020 at 10:45:02 AM */

#ifndef SOLVER_STDIO_H
#define SOLVER_STDIO_H
#include <stdio.h>
#endif

#ifndef FORCESNLPsolver_basic_0_20_50_H
#define FORCESNLPsolver_basic_0_20_50_H

/* DATA TYPE ------------------------------------------------------------*/
typedef double FORCESNLPsolver_basic_0_20_50_float;

typedef double FORCESNLPsolver_basic_0_20_50interface_float;

#ifndef SOLVER_STANDARD_TYPES
#define SOLVER_STANDARD_TYPES

typedef signed char solver_int8_signed;
typedef unsigned char solver_int8_unsigned;
typedef char solver_int8_default;
typedef signed short int solver_int16_signed;
typedef unsigned short int solver_int16_unsigned;
typedef short int solver_int16_default;
typedef signed int solver_int32_signed;
typedef unsigned int solver_int32_unsigned;
typedef int solver_int32_default;
typedef signed long long int solver_int64_signed;
typedef unsigned long long int solver_int64_unsigned;
typedef long long int solver_int64_default;

#endif


/* SOLVER SETTINGS ------------------------------------------------------*/

/* MISRA-C compliance */
#ifndef MISRA_C_FORCESNLPsolver_basic_0_20_50
#define MISRA_C_FORCESNLPsolver_basic_0_20_50 (0)
#endif

/* restrict code */
#ifndef RESTRICT_CODE_FORCESNLPsolver_basic_0_20_50
#define RESTRICT_CODE_FORCESNLPsolver_basic_0_20_50 (0)
#endif

/* print level */
#ifndef SET_PRINTLEVEL_FORCESNLPsolver_basic_0_20_50
#define SET_PRINTLEVEL_FORCESNLPsolver_basic_0_20_50    (0)
#endif

/* timing */
#ifndef SET_TIMING_FORCESNLPsolver_basic_0_20_50
#define SET_TIMING_FORCESNLPsolver_basic_0_20_50    (1)
#endif

/* Numeric Warnings */
/* #define PRINTNUMERICALWARNINGS */

/* maximum number of iterations  */
#define SET_MAXIT_FORCESNLPsolver_basic_0_20_50			(100)	

/* scaling factor of line search (FTB rule) */
#define SET_FLS_SCALE_FORCESNLPsolver_basic_0_20_50		(FORCESNLPsolver_basic_0_20_50_float)(0.99)      

/* maximum number of supported elements in the filter */
#define MAX_FILTER_SIZE_FORCESNLPsolver_basic_0_20_50	(100) 

/* maximum number of supported elements in the filter */
#define MAX_SOC_IT_FORCESNLPsolver_basic_0_20_50			(4) 

/* desired relative duality gap */
#define SET_ACC_RDGAP_FORCESNLPsolver_basic_0_20_50		(FORCESNLPsolver_basic_0_20_50_float)(0.0001)

/* desired maximum residual on equality constraints */
#define SET_ACC_RESEQ_FORCESNLPsolver_basic_0_20_50		(FORCESNLPsolver_basic_0_20_50_float)(1E-06)

/* desired maximum residual on inequality constraints */
#define SET_ACC_RESINEQ_FORCESNLPsolver_basic_0_20_50	(FORCESNLPsolver_basic_0_20_50_float)(1E-06)

/* desired maximum violation of complementarity */
#define SET_ACC_KKTCOMPL_FORCESNLPsolver_basic_0_20_50	(FORCESNLPsolver_basic_0_20_50_float)(1E-06)


/* RETURN CODES----------------------------------------------------------*/
/* solver has converged within desired accuracy */
#define OPTIMAL_FORCESNLPsolver_basic_0_20_50      (1)

/* maximum number of iterations has been reached */
#define MAXITREACHED_FORCESNLPsolver_basic_0_20_50 (0)

/* wrong number of inequalities error */
#define INVALID_NUM_INEQ_ERROR_FORCESNLPsolver_basic_0_20_50  (-4)

/* factorization error */
#define FACTORIZATION_ERROR_FORCESNLPsolver_basic_0_20_50   (-5)

/* NaN encountered in function evaluations */
#define BADFUNCEVAL_FORCESNLPsolver_basic_0_20_50  (-6)

/* no progress in method possible */
#define NOPROGRESS_FORCESNLPsolver_basic_0_20_50   (-7)

/* invalid values in parameters */
#define PARAM_VALUE_ERROR_FORCESNLPsolver_basic_0_20_50   (-11)

/* licensing error - solver not valid on this machine */
#define LICENSE_ERROR_FORCESNLPsolver_basic_0_20_50  (-100)

/* PARAMETERS -----------------------------------------------------------*/
/* fill this with data before calling the solver! */
typedef struct
{
    /* vector of size 9 */
    FORCESNLPsolver_basic_0_20_50_float xinit[9];

    /* vector of size 300 */
    FORCESNLPsolver_basic_0_20_50_float x0[300];

    /* vector of size 360 */
    FORCESNLPsolver_basic_0_20_50_float all_parameters[360];


} FORCESNLPsolver_basic_0_20_50_params;


/* OUTPUTS --------------------------------------------------------------*/
/* the desired variables are put here by the solver */
typedef struct
{
    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x01[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x02[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x03[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x04[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x05[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x06[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x07[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x08[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x09[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x10[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x11[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x12[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x13[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x14[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x15[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x16[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x17[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x18[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x19[15];

    /* vector of size 15 */
    FORCESNLPsolver_basic_0_20_50_float x20[15];


} FORCESNLPsolver_basic_0_20_50_output;


/* SOLVER INFO ----------------------------------------------------------*/
/* diagnostic data from last interior point step */
typedef struct
{
    /* iteration number */
    solver_int32_default it;

	/* number of iterations needed to optimality (branch-and-bound) */
	solver_int32_default it2opt;
	
    /* inf-norm of equality constraint residuals */
    FORCESNLPsolver_basic_0_20_50_float res_eq;
	
    /* inf-norm of inequality constraint residuals */
    FORCESNLPsolver_basic_0_20_50_float res_ineq;

	/* norm of stationarity condition */
    FORCESNLPsolver_basic_0_20_50_float rsnorm;

	/* max of all complementarity violations */
    FORCESNLPsolver_basic_0_20_50_float rcompnorm;

    /* primal objective */
    FORCESNLPsolver_basic_0_20_50_float pobj;	
	
    /* dual objective */
    FORCESNLPsolver_basic_0_20_50_float dobj;	

    /* duality gap := pobj - dobj */
    FORCESNLPsolver_basic_0_20_50_float dgap;		
	
    /* relative duality gap := |dgap / pobj | */
    FORCESNLPsolver_basic_0_20_50_float rdgap;		

    /* duality measure */
    FORCESNLPsolver_basic_0_20_50_float mu;

	/* duality measure (after affine step) */
    FORCESNLPsolver_basic_0_20_50_float mu_aff;
	
    /* centering parameter */
    FORCESNLPsolver_basic_0_20_50_float sigma;
	
    /* number of backtracking line search steps (affine direction) */
    solver_int32_default lsit_aff;
    
    /* number of backtracking line search steps (combined direction) */
    solver_int32_default lsit_cc;
    
    /* step size (affine direction) */
    FORCESNLPsolver_basic_0_20_50_float step_aff;
    
    /* step size (combined direction) */
    FORCESNLPsolver_basic_0_20_50_float step_cc;    

	/* solvertime */
	FORCESNLPsolver_basic_0_20_50_float solvetime;   

	/* time spent in function evaluations */
	FORCESNLPsolver_basic_0_20_50_float fevalstime;  

} FORCESNLPsolver_basic_0_20_50_info;







/* SOLVER FUNCTION DEFINITION -------------------------------------------*/
/* Time of Solver Generation: (UTC) Monday, June 1, 2020 10:45:04 AM */
/* User License expires on: (UTC) Friday, August 14, 2020 10:00:00 PM (approx.) (at the time of code generation) */
/* Solver Static License expires on: (UTC) Friday, August 14, 2020 10:00:00 PM (approx.) */
/* Solver Generation Request Id: a623f126-07e9-450e-b2ac-9121fd57f157 */
/* examine exitflag before using the result! */
#ifdef __cplusplus
extern "C" {
#endif		

typedef void (*FORCESNLPsolver_basic_0_20_50_extfunc)(FORCESNLPsolver_basic_0_20_50_float* x, FORCESNLPsolver_basic_0_20_50_float* y, FORCESNLPsolver_basic_0_20_50_float* lambda, FORCESNLPsolver_basic_0_20_50_float* params, FORCESNLPsolver_basic_0_20_50_float* pobj, FORCESNLPsolver_basic_0_20_50_float* g, FORCESNLPsolver_basic_0_20_50_float* c, FORCESNLPsolver_basic_0_20_50_float* Jeq, FORCESNLPsolver_basic_0_20_50_float* h, FORCESNLPsolver_basic_0_20_50_float* Jineq, FORCESNLPsolver_basic_0_20_50_float* H, solver_int32_default stage, solver_int32_default iterations);

extern solver_int32_default FORCESNLPsolver_basic_0_20_50_solve(FORCESNLPsolver_basic_0_20_50_params *params, FORCESNLPsolver_basic_0_20_50_output *output, FORCESNLPsolver_basic_0_20_50_info *info, FILE *fs, FORCESNLPsolver_basic_0_20_50_extfunc evalextfunctions_FORCESNLPsolver_basic_0_20_50);	





#ifdef __cplusplus
}
#endif

#endif
