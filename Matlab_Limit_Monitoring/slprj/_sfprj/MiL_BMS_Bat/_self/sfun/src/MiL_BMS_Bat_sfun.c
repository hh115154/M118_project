/* Include files */

#include "MiL_BMS_Bat_sfun.h"
#include "c1_MiL_BMS_Bat.h"
#include "c2_MiL_BMS_Bat.h"
#include "c3_MiL_BMS_Bat.h"
#include "c4_MiL_BMS_Bat.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _MiL_BMS_BatMachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void MiL_BMS_Bat_initializer(void)
{
}

void MiL_BMS_Bat_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_MiL_BMS_Bat_method_dispatcher(SimStruct *simstructPtr, unsigned
  int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==1) {
    c1_MiL_BMS_Bat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_MiL_BMS_Bat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==3) {
    c3_MiL_BMS_Bat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_MiL_BMS_Bat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_MiL_BMS_Bat_process_check_sum_call( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3500182269U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3037548500U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(710497643U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3153867797U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2297113298U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(486717198U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1797800694U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1324332520U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_MiL_BMS_Bat_get_check_sum(mxArray *plhs[]);
          sf_c1_MiL_BMS_Bat_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_MiL_BMS_Bat_get_check_sum(mxArray *plhs[]);
          sf_c2_MiL_BMS_Bat_get_check_sum(plhs);
          break;
        }

       case 3:
        {
          extern void sf_c3_MiL_BMS_Bat_get_check_sum(mxArray *plhs[]);
          sf_c3_MiL_BMS_Bat_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_MiL_BMS_Bat_get_check_sum(mxArray *plhs[]);
          sf_c4_MiL_BMS_Bat_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3564696471U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(678668628U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1090454852U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3896867807U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(943682443U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2274823639U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2416046085U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(565473908U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_MiL_BMS_Bat_autoinheritance_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char aiChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[2], aiChksum,sizeof(aiChksum)/sizeof(char));
  aiChksum[(sizeof(aiChksum)/sizeof(char)-1)] = '\0';

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(aiChksum, "FeaVVTQqfNZod1D6bACriC") == 0) {
          extern mxArray *sf_c1_MiL_BMS_Bat_get_autoinheritance_info(void);
          plhs[0] = sf_c1_MiL_BMS_Bat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 2:
      {
        if (strcmp(aiChksum, "iqZlCE3QVJsbsfIx198lnH") == 0) {
          extern mxArray *sf_c2_MiL_BMS_Bat_get_autoinheritance_info(void);
          plhs[0] = sf_c2_MiL_BMS_Bat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 3:
      {
        if (strcmp(aiChksum, "M0P6JY4LMAnuHolvySDFzG") == 0) {
          extern mxArray *sf_c3_MiL_BMS_Bat_get_autoinheritance_info(void);
          plhs[0] = sf_c3_MiL_BMS_Bat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 4:
      {
        if (strcmp(aiChksum, "3fV3pMrJ33HZFBM3U9UgbF") == 0) {
          extern mxArray *sf_c4_MiL_BMS_Bat_get_autoinheritance_info(void);
          plhs[0] = sf_c4_MiL_BMS_Bat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_MiL_BMS_Bat_get_eml_resolved_functions_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  if (nrhs<2 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        extern const mxArray *sf_c1_MiL_BMS_Bat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_MiL_BMS_Bat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 2:
      {
        extern const mxArray *sf_c2_MiL_BMS_Bat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_MiL_BMS_Bat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 3:
      {
        extern const mxArray *sf_c3_MiL_BMS_Bat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c3_MiL_BMS_Bat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 4:
      {
        extern const mxArray *sf_c4_MiL_BMS_Bat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c4_MiL_BMS_Bat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

void MiL_BMS_Bat_debug_initialize(void)
{
  _MiL_BMS_BatMachineNumber_ = sf_debug_initialize_machine("MiL_BMS_Bat","sfun",
    0,4,0,0,0);
  sf_debug_set_machine_event_thresholds(_MiL_BMS_BatMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(_MiL_BMS_BatMachineNumber_,0);
}

void MiL_BMS_Bat_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_MiL_BMS_Bat_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info("MiL_BMS_Bat",
      "MiL_BMS_Bat");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_MiL_BMS_Bat_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
