#ifndef AK4183_H_
#define AK4183_H_

#ifdef __cplusplus
 extern "C" {
#endif

#include "hw_def.h"

#ifdef _USE_HW_AK4183


#define AK4183_MAX_TOUCH_POINT             1


typedef struct
{
  uint8_t  id;
  uint8_t  event;
  uint16_t x;
  uint16_t y;
  uint8_t  weight;
  uint8_t  area;
} ak4183_point_t;

typedef struct
{
  uint8_t gest_id;
  uint8_t count;
  ak4183_point_t point[AK4183_MAX_TOUCH_POINT];
} ak4183_info_t;


bool ak4183Init(void);
bool ak4183GetInfo(ak4183_info_t *p_info);
uint16_t ak4183GetWidth(void);
uint16_t ak4183GetHeight(void);

#endif

#ifdef __cplusplus
 }
#endif

#endif
