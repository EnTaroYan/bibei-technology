#pragma	once

#define   TEXT_FONT     "微软雅黑"              //修改全局字体(如需单个修改前往对应的窗口类.cpp中修改)
#define	  TEXT_BOTTOM   "比贝科技"              //修改主窗口底部文字
#define   ACCOUNT       "bibeikeji"             //修改用户名

#define   INIT_TEMP_CONSTANT        30   //初始恒定温度(单位:℃)
#define   INIT_SPEED_CONSTANT        3   //初始恒定风速(单位:m/s)
#define   INIT_FREQUENCY_CONSTANT   50   //初始风机频率(单位:Hz)

#define   PLC_TX_INTERVAL      500  //向PLC发送数据的间隔时间(单位:ms)

//控制器指令集
#define   OPEN_REFRIGERATION   0x0301
#define   CLOSE_REFRIGERATION  0x0300
#define	  OPEN_HEATER		   0x0401
#define	  CLOSE_HEATER		   0x0400
#define   TEMPSENSOR_BACKUP    0x0500
#define   TEMPSENSOR_MAIN      0x0600
#define	  CHOOSE_HEATER1	   0x0701
#define	  CHOOSE_HEATER2	   0x0702
#define	  CHOOSE_HEATER12	   0x0703
#define   CONSTANT_HEATING     0x08
#define   CONSTANT_REFRIGING   0x09
#define   CRC_ERROR			   0xF000

//PLC地址
#define   ADDRESSD_SPEED_SETTING       10
#define   ADDRESSD_SPEED_FEEDBACK      11
#define   ADDRESSD_FREQUENCY           12
#define   ADDRESSD_FREQUENCY_SETTING   13

#define   ADDRESSM_START            20
#define   ADDRESSM_STATE_FAULT      21
#define   ADDRESSM_START_RUNNING    22
#define   ADDRESSM_MODE             23

//风机运行模式
#define   MODE_AUTO            1
#define   MODE_MANU            2
#define   MODE_MANU_SPEED      3
#define   MODE_MANU_FREQUENCE  4


#define   DTRZMODE_HEATING    1
#define   DTRZMODE_REFRIGING  2



extern CString g_strRecvData;
extern CString g_strTemp;
extern CString g_strSpeed;
extern CString g_strPressure;
extern CString g_strTime;

extern BOOL g_bComOpen1;
extern BOOL g_bComOpen2;

extern int g_nCom1;
extern int g_nCom2;

extern CString g_strComNumber1;
extern CString g_strComNumber2;

extern byte bButtonFlag[3];
extern int g_nFlagReadPlcCmd;

extern int g_nTempCon;
extern float g_fSpeedCon;
extern float g_fFrequencyCon;

extern int g_nFlagTemp;
extern int g_nFlagTempCon;
extern int g_nFlagMode;
extern int g_nFlagDTRZMode;

extern int SYS_OK;
extern double g_fSpeedToFrequence[100][2];

WORD CRC16(const BYTE *nData, WORD wLength);
WORD CRC16(CByteArray& nData, WORD wLength);

//曲线相关变量声明
extern BOOL g_FlagLineOk;
extern float  g_line_strTemp;
extern float  g_line_strSpeed;
extern float  Speed_minchange;
extern float  Speed_maxchange;
extern float  Temp_minchange;
extern float  Temp_maxchange;
extern int count_time;
extern char BeginTime[100];
//全局时钟
extern CString Min;
extern CString Sec;
extern int Time;
extern CSliderCtrl m_Ymin;
extern CSliderCtrl m_Ymax;

extern POINT g_OldSizeTab2;
extern POINT g_OldSizeTab;

extern wchar_t strSavepicpath[_MAX_PATH];
extern wchar_t strSavedatapath[_MAX_PATH];
#define CNWD   1
#define SMin   2
#define SMax   3
#define TMin   4
#define TMax   5

extern int x_gridsize;
extern int y_gridsize;
extern int x_subtract;
extern int   y_subtract;//曲线Y方向经过放大缩小后的表格修正距离
extern bool  flag_changeSize;

extern float Speed_Line;//曲线速率