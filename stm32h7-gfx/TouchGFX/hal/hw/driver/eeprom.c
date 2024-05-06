#include "eeprom.h"




#define EEPROM_MAX_SIZE   HW_EEPROM_MAX_SIZE


static bool    is_init          = false;
const char    *eeprom_file_name = "eeprom.cfg";
static uint8_t eeprom_buf[EEPROM_MAX_SIZE];





bool eepromInit()
{
  bool ret = true;
  FILE *fp;
  bool is_file_new = false;


  if ((fp = fopen(eeprom_file_name, "r+")) == NULL)
  {
    if ((fp = fopen(eeprom_file_name, "wb")) == NULL)
    {
      logPrintf("eepromInit::Unable to open %s\n", eeprom_file_name);
      return false;
    }
    is_file_new = true;
  }

  memset(eeprom_buf, 0, sizeof(eeprom_buf));


  int32_t file_size;

  fseek(fp, 0, SEEK_END );
  file_size = ftell(fp);

  logPrintf("file size : %d \n", file_size);


  if (is_file_new)
  {
    // FILE 처음으로 이동 
    fseek(fp, 0, SEEK_SET );
    fwrite(eeprom_buf, 1, EEPROM_MAX_SIZE, fp);
    logPrintf("[  ] eeprom file create\n");
  }
  else
  {
    // FILE 처음으로 이동 
    fseek(fp, 0, SEEK_SET );
    fread(eeprom_buf, 1, EEPROM_MAX_SIZE, fp);
  }

  fclose(fp);

  logPrintf("[%s] eepromInit()\n", ret ? "OK":"NG");

  is_init = ret;

  return ret;
}

bool eepromIsInit(void)
{
  return is_init;
}

bool eepromRead(uint32_t addr, uint8_t *p_data, uint32_t length)
{

  for (uint32_t i=0; i<length; i++)
  {
    p_data[i] = eeprom_buf[addr + i];
  }
  
  return true;
}

bool eepromWrite(uint32_t addr, uint8_t *p_data, uint32_t length)
{



  for (uint32_t i=0; i<length; i++)
  {
    eeprom_buf[addr + i] = p_data[i];
  }

  FILE *fp;
  if ((fp = fopen(eeprom_file_name, "wb")) == NULL)
  {
    logPrintf("eepromWrite::Unable to open %s\n", eeprom_file_name);
    return false;
  }

  // FILE 처음으로 이동 
  fseek(fp, 0, SEEK_SET );
  fwrite(eeprom_buf, 1, EEPROM_MAX_SIZE, fp);
  fclose(fp);

  return true;
}

uint32_t eepromGetLength(void)
{
  return EEPROM_MAX_SIZE;
}

bool eepromFormat(void)
{
  return true;
}




