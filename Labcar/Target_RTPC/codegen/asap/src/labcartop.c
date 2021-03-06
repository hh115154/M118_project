/* Autogenerated on 2015-05-13/14:42:54 by LABCAR. Do not alter. */
#define bool LABCAR_bool
#include "labcartop.h"
#include "../a_targma.h"

/* class initialization */
static void initClass_LabCarTop(struct LabCarTop_Class *self)
{
  /* intialization of top level class variables */
  self->Module_Hardware_Ptr = (struct Module_Hardware_Obj*)initModel_Module_Hardware();
  self->Module_Batterymodel_HiL_Ptr = (struct Module_Batterymodel_HiL_Obj*)initModel_Module_Batterymodel_HiL();
  self->Module_CANModule_Ptr = (struct Module_CANModule_Obj*)initModel_Module_CANModule();
  self->Module_OSMonitoring_Ptr = (struct Module_OSMonitoring_Obj*)initModel_Module_OSMonitoring();
  return;
};

/* definition of the class header */
static ASDClassHeader LabCarTop_ClassHeader =
  {0, 0, 0, 4, (MethodList *)0, (MethodList *)0};

/* definition and initialization of the class object */
static struct LabCarTop_Class LabCarTop_ClassObj =
  { { 1 , { &LabCarTop_ClassHeader } }, NULL, NULL, NULL, NULL};

/* object instantiation */
static struct LabCarTop_Obj *initInstance_LabCarTop(void)
{
  struct LabCarTop_Obj *self;
  /* object instantiation / implicit memory allocation */
  CREATE_OBJECT(self, LabCarTop);
  return self;
};

/* instance tree initialization */
ASDObject *initializeLabCarModel (void)
{
  ASDObject *model;
  /* top level class initialization */
  initClass_LabCarTop(&LabCarTop_ClassObj);
  /* top level object instantiation */
  model = (ASDObject *)initInstance_LabCarTop();
  return(model);
};

