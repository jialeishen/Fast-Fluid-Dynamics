///////////////////////////////////////////////////////////////////////////////
//
//  Filename: parameters.c
//
//  Written by:  Wangda Zuo
//
//  Last Modified: Wangda Zuo on 7/7/2013
//
//  Task: Define the parameters for the simulation
//
///////////////////////////////////////////////////////////////////////////////
#include "data_structure.h"

/******************************************************************************
|  Define parameters for the simulation
******************************************************************************/
void define_parameter(PARA_DATA *para)
{
  /*--------------------------------------------------------------------------
  Check if the parameters are read from other file
  ---------------------------------------------------------------------------*/

  /*---------------------------------------------------------------------------
  Initialize the variables
  ---------------------------------------------------------------------------*/
  para->geom->uniform = 0; //1: uniform; 0: non-uniform 

      para->mytime->dt = 0.1f; 
      para->mytime->t_steady = 100.0f; 
  para->mytime->t_output =1000 ;

      para->prob->nu    = 1.53e-5f;//1.53e-5f;
      para->prob->tur_model = LAM; //LAM, CHEN, CONST(==101nu)
	  para->prob->alpha =1.96e-5f; //1.96e-5
      para->prob->coeff_h=0.004f;
      para->prob->chen_a = 0.03874f;  /* the coeffcient of Chen's model*/
      para->solv->solver = GS;
      para->solv->advection_solver = SEMI;  //LAX, SEMI, UPWIND, UPWIND_NEW;
      para->solv->interpolation = BILINEAR; //BILINEAR, FSJ
      para->solv->check_residual = 0; 
      para->solv->read_file = 0; 
      para->prob->gravx = 0.0f;
      para->prob->gravy = 0.0f;
      para->prob->gravz = 0.0f;
	  para->prob->tratio=0.001;
      para->outp->version = DEBUG; //DEMO, DEBUG;

      para->bc->bcN = OUTFLOW;
      para->bc->bcS = INFLOW;
      para->bc->bcW = NOSLIP;
      para->bc->bcE = NOSLIP;   
      para->bc->bcF = NOSLIP;
      para->bc->bcB = NOSLIP;

      para->bc->VY_bcS = 0.3f;


} // End of input_para( )