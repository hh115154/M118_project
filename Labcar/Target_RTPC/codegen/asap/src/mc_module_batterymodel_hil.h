/* Autogenerated on 2015-05-12/19:08:28 by LABCAR. Do not alter. */
#ifndef _MC_MODULE_BATTERYMODEL_HIL_H
#define _MC_MODULE_BATTERYMODEL_HIL_H

#include "../a_basdef.h"
#include "../y_primit.h"

/* extern declarations */
extern struct Module_Batterymodel_HiL_Obj *initModel_Module_Batterymodel_HiL(void);
extern struct Module_Batterymodel_HiL_Class Module_Batterymodel_HiL_ClassObj;
extern void initClass_Module_Batterymodel_HiL(struct Module_Batterymodel_HiL_Class *class);
extern struct Module_Batterymodel_HiL_Obj *initInstance_Module_Batterymodel_HiL(void);

/* definition of the class structure */
struct Module_Batterymodel_HiL_Class
{
  ASDObjectHeader objectHeader;

  /* Characteristics */
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_ChargeSwitch_Value_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_ChargeCurrentA1_Value_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_ChargeCurrentA_Value_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Constant1_Value_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Gain1_Gain_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Constant_Value_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_C_diff_Value_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Vektorize_Gain_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Vektorize_Gain_o_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_UnitDelay_X0_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_P_R_balance_Value_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_01_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_01_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_02_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_02_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_03_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_03_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_04_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_04_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_05_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_05_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_06_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_06_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_07_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_07_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_08_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_08_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_09_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_09_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_10_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_10_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_11_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_11_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_12_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bala_12_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Gain_Gain_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_C_diffR_diff_Value_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_UnitDelay1_X0_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Gain1_Gain_a_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_UnitDelay_X0_n_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_R_ctR_i_Value_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_UnitDelay_X0_k_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Gain_Gain_e_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_P_poles_soc_Value_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Gain_Gain_f_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Q_0_Gain_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_DiscreteTimeIntegrator_gainval_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_DiscreteTimeIntegrator_IC_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_P_InitSoC_Value_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_u11_Gain_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_charge_currentA_Gain_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_charge_currentmA_Gain_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bat_mode_system_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bat_mode_system_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_current_system_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_current_system_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_current_systemA_Gain_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Cellno_Value_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_SoC_Kalman_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_SoC_Kalman_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_bat_voltagemV_Gain_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_voltage_system_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_voltage_system_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_voltage_systemmV_Gain_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_voltage_systemV_Gain_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_P_InitAmbientTemperatureK_Value_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Mod_CAN_RS232_Value_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT01_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT01_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT02_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT02_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT03_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT03_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT04_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT04_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT05_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT05_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT06_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT06_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT07_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT07_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT08_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT08_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT09_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT09_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT10_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT10_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT11_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT11_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT12_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellT12_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV01_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV01_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV02_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV02_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV03_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV03_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV04_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV04_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV05_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV05_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV06_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV06_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV07_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV07_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV08_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV08_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV09_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV09_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV10_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV10_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV11_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV11_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV12_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_CellV12_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Error_CellNo_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Error_CellNo_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Error_Event_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Error_Event_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Error_Indication_P3_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_Error_Indication_P4_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_P_SoC_Kalman__Gain_Ptr;

  /* Measures */
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_FromWs_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_ChargeCurrentA_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_ChargeCurrentA_l_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Gain1_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_SumofElements_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Divide_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Abs_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Vektorize_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Vektorize_d_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_UnitDelay_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Divide_k_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_bala_01_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_bala_02_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_bala_03_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_bala_04_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_bala_05_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_bala_06_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_bala_07_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_bala_08_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_bala_09_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_bala_10_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_bala_11_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_bala_12_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Product_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Add_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Product_d_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Gain_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_UnitDelay1_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Product1_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Gain1_g_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_UnitDelay_l_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Add_o_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Product2_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_UnitDelay_o_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Gain_p_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Add1_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Gain_k_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_SumofElements1_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Q_0_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_DiscreteTimeIntegrator_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Add_d_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_u11_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_charge_currentA_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_charge_currentmA_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_bat_mode_system_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_current_system_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_current_systemA_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_SumofElements_c_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_SoCModel__Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_SoC_Kalman_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_deltaSoC_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_sum_bat_voltageV_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_bat_voltagemV_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_voltage_system_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_voltage_systemmV_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_voltage_systemV_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellT01_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellT02_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellT03_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellT04_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellT05_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellT06_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellT07_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellT08_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellT09_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellT10_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellT11_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellT12_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellV01_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellV02_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellV03_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellV04_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellV05_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellV06_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellV07_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellV08_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellV09_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellV10_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellV11_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_CellV12_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Error_CellNo_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Error_Event_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_Error_Indication_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_current_out_Ptr;
  vectorWrapper_Obj *MCWrapper_Batterymodel_HiL_B_y_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_bat_modus_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_DataTypeConversion_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_SoC_Kalman__Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_DataTypeConversion_f_Ptr;
  scalarWrapper_Obj *MCWrapper_Batterymodel_HiL_B_DataTypeConversion1_Ptr;
};

/* definition of the class object structure */
struct Module_Batterymodel_HiL_Obj
{
  ASDObjectHeader objectHeader;
};

#endif /* _MC_MODULE_BATTERYMODEL_HIL_H */

